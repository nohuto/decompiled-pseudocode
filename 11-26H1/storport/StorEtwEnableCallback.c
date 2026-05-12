/*
 * XREFs of StorEtwEnableCallback @ 0x140038A60
 * Callers:
 *     McGenControlCallbackV2 @ 0x140038920 (McGenControlCallbackV2.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000A250 (RaidAllocatePool.c)
 *     StorEnableAdapterHealthEvents @ 0x14000F3D8 (StorEnableAdapterHealthEvents.c)
 *     StorEnableAdapterDiagnosticEvents @ 0x14000F8DC (StorEnableAdapterDiagnosticEvents.c)
 *     StorAdapterNeedsUpdate @ 0x140010C40 (StorAdapterNeedsUpdate.c)
 *     RaidAcquireAdapterRemoveLock @ 0x14002F6B4 (RaidAcquireAdapterRemoveLock.c)
 *     RaidGetPortData @ 0x140039F08 (RaidGetPortData.c)
 *     RaidReleasePortData @ 0x14003A14C (RaidReleasePortData.c)
 *     StorEnableAdapterOperationalEvents @ 0x14005BE70 (StorEnableAdapterOperationalEvents.c)
 *     StorEnableAdapterEtwTracing @ 0x14005C398 (StorEnableAdapterEtwTracing.c)
 */

__int64 __fastcall StorEtwEnableCallback(__int64 a1, int a2, __int64 a3, int a4, __int64 a5, __int64 a6)
{
  __int64 *v6; // rbp
  char v7; // r14
  bool v8; // al
  bool v9; // al
  bool v10; // al
  __int64 result; // rax
  __int64 v12; // r13
  __int64 v13; // r12
  __int64 *v14; // rdi
  __int64 *Pool; // r15
  __int64 v16; // rbx
  __int64 *v17; // r14
  __int64 *v18; // rsi
  __int64 *v19; // rsi
  __int64 v20; // rbp
  __int64 v21; // rdx
  __int64 *v22; // rsi
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-68h] BYREF
  __int64 *v24; // [rsp+A0h] [rbp+8h]
  char v25; // [rsp+A8h] [rbp+10h]
  __int64 v26; // [rsp+B8h] [rbp+20h]

  v25 = a2;
  v6 = 0LL;
  v24 = 0LL;
  StorEtwLoggingEnabled = a2 != 0;
  StorRequestThresholdTime = 0LL;
  v7 = a2;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( (*(_QWORD *)&a4 & 0x100000LL) != 0 && a6 && *(_DWORD *)(a6 + 8) == 8 )
    StorRequestThresholdTime = **(_QWORD **)a6;
  v8 = (byte_140173444 & 0x10) != 0 || (byte_140173445 & 4) != 0 || byte_140173444 < 0;
  StorMiniportOperationalEventsEnabled = v8;
  v9 = (byte_140173445 & 0x10) != 0 || (byte_140173445 & 0x20) != 0 || (byte_140173446 & 0x10) != 0;
  StorMiniportHealthEventsEnabled = v9;
  StorMiniportDiagnosticEventsEnabled = (byte_140173443 & 0x10) != 0;
  v10 = (byte_140173441 & 1) != 0 || (byte_140173443 & 2) != 0;
  StorIoPerformanceEventsEnabled = v10;
  result = RaidGetPortData();
  v26 = result;
  v12 = result;
  if ( result )
  {
    v13 = result + 8;
    v14 = *(__int64 **)(result + 8);
    while ( v14 != (__int64 *)v13 )
    {
      Pool = 0LL;
      v16 = 0LL;
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)v14 + 7, &LockHandle);
      if ( *((_DWORD *)v14 + 12) )
      {
        v17 = v14 + 4;
        v18 = (__int64 *)v14[4];
        if ( v18 != v14 + 4 )
        {
          do
          {
            if ( *((_DWORD *)v18 - 16) == 1094997074 )
            {
              v6 = v18 - 8;
              if ( StorAdapterNeedsUpdate((__int64)(v18 - 8), v25) )
                v16 = (unsigned int)(v16 + 1);
            }
            v18 = (__int64 *)*v18;
          }
          while ( v18 != v17 );
          v12 = v26;
          v24 = v6;
          if ( (_DWORD)v16 )
          {
            Pool = (__int64 *)RaidAllocatePool(64LL, 8LL * (unsigned int)v16, 1413833042LL, v6[1]);
            if ( Pool )
            {
              v19 = (__int64 *)*v17;
              v20 = 0LL;
              if ( (__int64 *)*v17 != v17 )
              {
                do
                {
                  if ( (unsigned int)v20 >= (unsigned int)v16 )
                    break;
                  v24 = v19 - 8;
                  if ( *((_DWORD *)v19 - 16) == 1094997074
                    && StorAdapterNeedsUpdate((__int64)(v19 - 8), v25)
                    && (int)RaidAcquireAdapterRemoveLock((__int64)(v19 - 8)) >= 0 )
                  {
                    Pool[v20] = (__int64)(v19 - 8);
                    v20 = (unsigned int)(v20 + 1);
                  }
                  v19 = (__int64 *)*v19;
                }
                while ( v19 != v17 );
                v12 = v26;
                v13 = v26 + 8;
              }
              v16 = (unsigned int)v20;
            }
          }
        }
        v7 = v25;
      }
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      if ( Pool )
      {
        if ( (_DWORD)v16 )
        {
          v22 = Pool;
          do
          {
            LOBYTE(v21) = v7;
            StorEnableAdapterEtwTracing(*v22, v21);
            StorEnableAdapterOperationalEvents(*v22);
            StorEnableAdapterHealthEvents(*v22);
            StorEnableAdapterDiagnosticEvents(*v22);
            ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*v22++ + 336));
            --v16;
          }
          while ( v16 );
        }
        ExFreePoolWithTag(Pool, 0x54456152u);
      }
      v14 = (__int64 *)*v14;
      v6 = v24;
    }
    return RaidReleasePortData(v12);
  }
  return result;
}
