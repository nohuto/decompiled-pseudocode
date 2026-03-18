/*
 * XREFs of ?EnsureSchedulable@VIDMM_DEVICE@@QEAAX_N@Z @ 0x1400E2070
 * Callers:
 *     VidSchiSubmitCommandPacketToHwQueue @ 0x140009B58 (VidSchiSubmitCommandPacketToHwQueue.c)
 *     VidSchiSubmitCommandPacketToQueue @ 0x140011854 (VidSchiSubmitCommandPacketToQueue.c)
 *     ?VidMmEnsureDeviceSchedulable@@YAXPEAVVIDMM_DEVICE@@_N@Z @ 0x1400393AC (-VidMmEnsureDeviceSchedulable@@YAXPEAVVIDMM_DEVICE@@_N@Z.c)
 *     VidSchiSubmitCommandPacketToQueueDirectSubmitAware @ 0x140055344 (VidSchiSubmitCommandPacketToQueueDirectSubmitAware.c)
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1400D09E8 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 *     ?VidMmFlushPagingQueue@@YAXPEAUVIDMM_WORKER_THREAD@@PEAUVIDMM_PAGING_QUEUE@@@Z @ 0x1400E1FE4 (-VidMmFlushPagingQueue@@YAXPEAUVIDMM_WORKER_THREAD@@PEAUVIDMM_PAGING_QUEUE@@@Z.c)
 *     ?SuspendResume@VIDMM_DEVICE@@QEAAX_N0@Z @ 0x1400E3644 (-SuspendResume@VIDMM_DEVICE@@QEAAX_N0@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     ?RemoveFromPenaltyBoxByListEntry@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x14002FDD8 (-RemoveFromPenaltyBoxByListEntry@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x140030000 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?LogEvent@DXGPUSHLOCK@@IEAAXXZ @ 0x140030174 (-LogEvent@DXGPUSHLOCK@@IEAAXXZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1400301B0 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?VidMmNotifyTaskWork@@YA_NPEAUVIDMM_WORKER_THREAD2@@PEAUVIDMM_SCHCLASS@@PEAUVIDMM_TASK@@K@Z @ 0x1400990DC (-VidMmNotifyTaskWork@@YA_NPEAUVIDMM_WORKER_THREAD2@@PEAUVIDMM_SCHCLASS@@PEAUVIDMM_TASK@@K@Z.c)
 *     ?VidMmSwapSuspendList@@YAXPEAUVIDMM_WORKER_THREAD2@@PEAVVIDMM_DEVICE@@W4VIDMM_PENALTY_BOX_BAND@@@Z @ 0x1400B9098 (-VidMmSwapSuspendList@@YAXPEAUVIDMM_WORKER_THREAD2@@PEAVVIDMM_DEVICE@@W4VIDMM_PENALTY_BOX_BAND@@.c)
 */

void __fastcall VIDMM_DEVICE::EnsureSchedulable(VIDMM_DEVICE *this, char a2)
{
  __int64 v3; // rcx
  DXGPUSHLOCK *v4; // rdi
  __int64 v5; // rcx
  __int64 v6; // rdx
  VIDMM_GLOBAL *v7; // rcx
  __int64 v8; // r8
  __int64 *v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rax
  __int64 **v12; // rcx
  __int64 v13; // rsi
  _BYTE v14[40]; // [rsp+50h] [rbp-28h] BYREF

  if ( !a2 || *((_BYTE *)this + 56) )
  {
    *((_BYTE *)this + 56) = 1;
    v3 = *(_QWORD *)this;
    v4 = (DXGPUSHLOCK *)(v3 + 45000);
    if ( (*(_BYTE *)(v3 + 41065) & 0x10) != 0 )
    {
      v13 = *(_QWORD *)v3;
      DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
        (DXGAUTOPUSHLOCKEXCLUSIVE *)v14,
        (struct _KTHREAD **)(v3 + 45000));
      if ( (*((_BYTE *)this + 312) & 7) == 4 )
      {
        VidMmSwapSuspendList(v13, (__int64)this, 1u);
        VidMmNotifyTaskWork(
          (struct VIDMM_WORKER_THREAD2 *)v13,
          (struct VIDMM_SCHCLASS *)(v13 + 5472),
          (VIDMM_DEVICE *)((char *)this + 320),
          1u);
      }
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v14);
    }
    else
    {
      if ( v3 != -45000 && *(struct _KTHREAD **)(v3 + 45008) == KeGetCurrentThread() )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 1495;
        DxgkLogInternalTriageEvent(v5, 262146LL);
      }
      KeEnterCriticalRegion();
      if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v4, 0LL) )
      {
        DXGPUSHLOCK::LogEvent(v4, v6, v8);
        ExAcquirePushLockExclusiveEx(v4, 0LL);
      }
      *((_QWORD *)v4 + 1) = KeGetCurrentThread();
      if ( (*((_BYTE *)this + 312) & 7) == 4 )
      {
        VIDMM_GLOBAL::RemoveFromPenaltyBoxByListEntry(v7, (struct _LIST_ENTRY *)((char *)this + 184));
        *((_BYTE *)this + 312) &= 0xF8u;
        v10 = *(_QWORD *)this;
        v11 = *(_QWORD *)this + 45064LL;
        v12 = *(__int64 ***)(*(_QWORD *)this + 45072LL);
        if ( *v12 != (__int64 *)v11 )
          __fastfail(3u);
        *v9 = v11;
        v9[1] = (__int64)v12;
        *v12 = v9;
        *(_QWORD *)(v11 + 8) = v9;
        KeSetEvent(*(PRKEVENT *)(*(_QWORD *)v10 + 24LL), 0, 0);
        *((_BYTE *)this + 312) = *((_BYTE *)this + 312) & 0xF8 | 3;
        KeSetEvent(*(PRKEVENT *)(**(_QWORD **)this + 24LL), 0, 0);
      }
      *((_QWORD *)v4 + 1) = 0LL;
      ExReleasePushLockExclusiveEx(v4, 0LL);
      KeLeaveCriticalRegion();
    }
  }
}
