/*
 * XREFs of RaUnitGetInstances @ 0x140039F84
 * Callers:
 *     RaUnitSendInstanceCounters @ 0x140039378 (RaUnitSendInstanceCounters.c)
 * Callees:
 *     RaUnitAcquireRemoveLock @ 0x140004AB0 (RaUnitAcquireRemoveLock.c)
 *     RaidGetPortData @ 0x140039F08 (RaidGetPortData.c)
 *     RaidReleasePortData @ 0x14003A14C (RaidReleasePortData.c)
 */

__int64 __fastcall RaUnitGetInstances(__int64 a1, unsigned int *a2)
{
  __int64 v2; // r12
  __int64 PortData; // rax
  __int64 v6; // rsi
  _QWORD *v8; // rdi
  _QWORD *v9; // rsi
  KSPIN_LOCK *v10; // r14
  KSPIN_LOCK *v11; // rbx
  __int64 *i; // r14
  unsigned int v13; // eax
  struct _KLOCK_QUEUE_HANDLE v14; // [rsp+20h] [rbp-50h] BYREF
  struct _KLOCK_QUEUE_HANDLE v15; // [rsp+38h] [rbp-38h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-20h] BYREF
  _QWORD *v17; // [rsp+B0h] [rbp+40h]
  __int64 v18; // [rsp+C0h] [rbp+50h]

  v2 = 0LL;
  memset(&v15, 0, sizeof(v15));
  memset(&LockHandle, 0, sizeof(LockHandle));
  memset(&v14, 0, sizeof(v14));
  if ( !a1 )
    *a2 = 0;
  PortData = RaidGetPortData();
  v18 = PortData;
  v6 = PortData;
  if ( PortData )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(PortData + 24), &LockHandle);
    v8 = *(_QWORD **)(v6 + 8);
    v17 = (_QWORD *)(v6 + 8);
    if ( v8 != (_QWORD *)(v6 + 8) )
    {
      v9 = (_QWORD *)(v6 + 8);
      do
      {
        KeAcquireInStackQueuedSpinLock(v8 + 7, &v15);
        v10 = v8 + 4;
        v11 = (KSPIN_LOCK *)v8[4];
        if ( v11 != v8 + 4 )
        {
          do
          {
            if ( *((_DWORD *)v11 - 16) == 1094997074
              && ExAcquireRundownProtectionCacheAware((PEX_RUNDOWN_REF_CACHE_AWARE)v11[34]) )
            {
              KeAcquireInStackQueuedSpinLock(v11 + 9, &v14);
              for ( i = (__int64 *)v11[10]; i != (__int64 *)(v11 + 10); i = (__int64 *)*i )
              {
                v13 = *a2;
                if ( a1 )
                {
                  if ( (unsigned int)v2 < v13 && (int)RaUnitAcquireRemoveLock((__int64)(i - 8), 0LL, 0) >= 0 )
                  {
                    *(_QWORD *)(a1 + 8 * v2) = i - 8;
                    v2 = (unsigned int)(v2 + 1);
                  }
                }
                else
                {
                  *a2 = v13 + 1;
                }
              }
              KeReleaseInStackQueuedSpinLock(&v14);
              ExReleaseRundownProtectionCacheAware((PEX_RUNDOWN_REF_CACHE_AWARE)v11[34]);
              v10 = v8 + 4;
            }
            v11 = (KSPIN_LOCK *)*v11;
          }
          while ( v11 != v10 );
          v9 = v17;
        }
        KeReleaseInStackQueuedSpinLock(&v15);
        v8 = (_QWORD *)*v8;
      }
      while ( v8 != v9 );
      v6 = v18;
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    RaidReleasePortData(v6);
    if ( a1 )
      *a2 = v2;
  }
  return 0LL;
}
