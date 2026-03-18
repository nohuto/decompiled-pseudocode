/*
 * XREFs of VidSchiSetTransferContextRunningTime @ 0x1400252A0
 * Callers:
 *     ?VidSchiSelectContextFromThisPriority@@YAPEAU_VIDSCH_CONTEXT@@PEAU_VIDSCH_NODE@@K_N@Z @ 0x140024900 (-VidSchiSelectContextFromThisPriority@@YAPEAU_VIDSCH_CONTEXT@@PEAU_VIDSCH_NODE@@K_N@Z.c)
 *     VidSchiIsQuantumLeft @ 0x14002558C (VidSchiIsQuantumLeft.c)
 *     VidSchiProcessDpcPreemptedPacket @ 0x1400271BC (VidSchiProcessDpcPreemptedPacket.c)
 *     VidSchiProcessDpcCompletedPacket @ 0x140027C1C (VidSchiProcessDpcCompletedPacket.c)
 *     VidSchiDrainContextFromWorkerThread @ 0x140054C70 (VidSchiDrainContextFromWorkerThread.c)
 *     VidSchiRun_PriorityTable @ 0x1400E8CE0 (VidSchiRun_PriorityTable.c)
 * Callees:
 *     VidSchiIncrementContextReference @ 0x140025CE0 (VidSchiIncrementContextReference.c)
 *     VidSchiInterlockedRemoveHeadListIfExist @ 0x140026470 (VidSchiInterlockedRemoveHeadListIfExist.c)
 *     ?VidSchiFlushGpuWorkEntries@@YAXPEAU_VIDSCH_CONTEXT@@@Z @ 0x140026504 (-VidSchiFlushGpuWorkEntries@@YAXPEAU_VIDSCH_CONTEXT@@@Z.c)
 */

void __fastcall VidSchiSetTransferContextRunningTime(__int64 a1, __int64 a2, char a3)
{
  __int64 v6; // rbp
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // r8
  _QWORD *v10; // rdx
  __int64 v11; // r8
  _QWORD *v12; // rax
  __int64 v13; // r13
  __int64 v14; // rax
  void *v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // r8
  _QWORD *v18; // rdx
  __int64 v19; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-78h] BYREF
  __int128 v21; // [rsp+38h] [rbp-60h]
  __int64 v22; // [rsp+48h] [rbp-50h]
  __int128 v23; // [rsp+50h] [rbp-48h]
  __int64 v24; // [rsp+60h] [rbp-38h]

  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( !a3 )
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 24LL) + 2016LL), &LockHandle);
  if ( (*(_DWORD *)(a1 + 192) & 2) == 0 )
  {
    if ( a2 )
      VidSchiIncrementContextReference(a2);
    v6 = *(_QWORD *)(a1 + 504);
    if ( !v6
      || (v7 = *(_QWORD *)(*(_QWORD *)(v6 + 96) + 24LL),
          v22 = 0LL,
          v21 = 0LL,
          _InterlockedExchangeAdd((volatile signed __int32 *)(v6 + 72), 0xFFFFFFFF) != 1) )
    {
      *(_QWORD *)(a1 + 504) = a2;
      goto LABEL_4;
    }
    v8 = *(_QWORD *)(v6 + 96);
    if ( *(_QWORD *)(v8 + 224) == v6 )
      *(_QWORD *)(v8 + 224) = 0LL;
    v9 = *(_QWORD *)(v6 + 8);
    if ( *(_QWORD *)(v9 + 8) == v6 + 8 )
    {
      v10 = *(_QWORD **)(v6 + 16);
      if ( *v10 == v6 + 8 )
      {
        *v10 = v9;
        *(_QWORD *)(v9 + 8) = v10;
        v11 = *(_QWORD *)(v6 + 24);
        if ( *(_QWORD *)(v11 + 8) == v6 + 24 )
        {
          v12 = *(_QWORD **)(v6 + 32);
          if ( *v12 == v6 + 24 )
          {
            v13 = v7 + 2024;
            *v12 = v11;
            *(_QWORD *)(v11 + 8) = v12;
            while ( 1 )
            {
              v14 = VidSchiInterlockedRemoveHeadListIfExist(v13, v6 + 720, v6 + 736);
              if ( !v14 )
                break;
              ExFreePoolWithTag((PVOID)(v14 - 8), 0);
            }
            if ( (*(_DWORD *)(v6 + 112) & 0x100) != 0 )
            {
              while ( 1 )
              {
                v19 = VidSchiInterlockedRemoveHeadListIfExist(v13, v6 + 744, v6 + 760);
                if ( !v19 )
                  break;
                ExFreePoolWithTag((PVOID)(v19 - 8), 0);
              }
            }
            if ( bTracingEnabled )
              VidSchiFlushGpuWorkEntries((struct _VIDSCH_CONTEXT *)v6);
            v15 = *(void **)(v6 + 1000);
            if ( v15 )
              ExFreePoolWithTag(v15, 0);
            v16 = *(_QWORD *)(v6 + 104);
            v23 = 0LL;
            v24 = 0LL;
            if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v16 + 32), 0xFFFFFFFFFFFFFFFFuLL) != 1 )
              goto LABEL_28;
            v17 = *(_QWORD *)(v16 + 112);
            if ( *(_QWORD *)(v17 + 8) == v16 + 112 )
            {
              v18 = *(_QWORD **)(v16 + 120);
              if ( *v18 == v16 + 112 )
              {
                *v18 = v17;
                *(_QWORD *)(v17 + 8) = v18;
                ExFreePoolWithTag((PVOID)v16, 0);
LABEL_28:
                ExFreePoolWithTag((PVOID)v6, 0);
                *(_QWORD *)(a1 + 504) = a2;
                goto LABEL_4;
              }
            }
          }
        }
      }
    }
    __fastfail(3u);
  }
LABEL_4:
  if ( !a3 )
    KeReleaseInStackQueuedSpinLock(&LockHandle);
}
