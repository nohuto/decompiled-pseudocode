/*
 * XREFs of ?EndPreparation@VIDMM_GLOBAL@@QEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1400D1528
 * Callers:
 *     ?Defragment@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_SEGMENT@@@Z @ 0x140099F08 (-Defragment@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_SEGMENT@@@Z.c)
 *     ?VidMmUpgradeAllocation@@YAJPEAUVIDMM_WORKER_THREAD@@PEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400A8668 (-VidMmUpgradeAllocation@@YAJPEAUVIDMM_WORKER_THREAD@@PEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 *     TrimSegmentOfferLists @ 0x1400B292C (TrimSegmentOfferLists.c)
 *     ?TryPageInDevice@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z @ 0x1400CDA2C (-TryPageInDevice@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z.c)
 *     ?CleanupMarkedForEvictionAllocations@VIDMM_GLOBAL@@QEAAXXZ @ 0x1400CE160 (-CleanupMarkedForEvictionAllocations@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1400CFED0 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1400D09E8 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 *     ?FaultAllAllocations@VIDMM_DEVICE@@QEAAXXZ @ 0x1401028B0 (-FaultAllAllocations@VIDMM_DEVICE@@QEAAXXZ.c)
 *     ?CheckMemorySegmentsFState@VIDMM_GLOBAL@@QEAAXXZ @ 0x140104FA0 (-CheckMemorySegmentsFState@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?ProcessPendingOfferList@VIDMM_GLOBAL@@QEAAXXZ @ 0x14010D82C (-ProcessPendingOfferList@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ProcessSystemMemoryOfferList @ 0x14010E534 (ProcessSystemMemoryOfferList.c)
 *     ?CurateVPR@VIDMM_SEGMENT@@QEAAXXZ @ 0x14011146C (-CurateVPR@VIDMM_SEGMENT@@QEAAXXZ.c)
 *     HandlePromotionCandidates @ 0x14011A818 (HandlePromotionCandidates.c)
 *     ?ForceUncommitVirtualAddress@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@@Z @ 0x140126BC0 (-ForceUncommitVirtualAddress@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@@Z.c)
 * Callees:
 *     VidSchSignalSyncObjectsFromCpu @ 0x1400069F0 (VidSchSignalSyncObjectsFromCpu.c)
 *     VidSchSignalSyncObjectsFromGpu @ 0x14000F5A0 (VidSchSignalSyncObjectsFromGpu.c)
 *     McTemplateK0x_EtwWriteTransfer @ 0x140031A48 (McTemplateK0x_EtwWriteTransfer.c)
 *     ?ResumeFlipQueuesIfSuspendedForMove@VIDMM_GLOBAL@@QEAAXXZ @ 0x1400D1870 (-ResumeFlipQueuesIfSuspendedForMove@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1400D1928 (-WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1400E78B8 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     ?EndPreparationOnPhysicalAdapter@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1400E7CEC (-EndPreparationOnPhysicalAdapter@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     VidSchWaitForPagingFence @ 0x1401194D4 (VidSchWaitForPagingFence.c)
 *     ?ResumeSchedulerDevice@VIDMM_DEVICE@@QEAAXXZ @ 0x14011A16C (-ResumeSchedulerDevice@VIDMM_DEVICE@@QEAAXXZ.c)
 *     ?SignalMonitoredFence@VIDMM_GLOBAL@@QEAAXIPEAU_VIDSCH_SYNC_OBJECT@@_KPEA_N@Z @ 0x1401267F0 (-SignalMonitoredFence@VIDMM_GLOBAL@@QEAAXIPEAU_VIDSCH_SYNC_OBJECT@@_KPEA_N@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall VIDMM_GLOBAL::EndPreparation(
        VIDMM_GLOBAL *this,
        unsigned int a2,
        struct _KEVENT *a3,
        char a4,
        unsigned __int64 a5,
        struct _VIDSCH_SYNC_OBJECT *a6)
{
  __int64 v6; // rdi
  bool v10; // r15
  unsigned int i; // esi
  _QWORD **v12; // r14
  int v13; // r8d
  __int64 *v14; // r9
  unsigned int v15; // ecx
  _QWORD *v16; // rdx
  __int64 v17; // rax
  unsigned int v18; // ecx
  _QWORD *v19; // rsi
  _QWORD *v20; // rax
  VIDMM_DEVICE *v21; // r9
  _QWORD *v22; // rcx
  __int64 v23; // rcx
  bool v24; // [rsp+88h] [rbp+10h] BYREF

  v6 = a2;
  v24 = 0;
  *((_QWORD *)this + 466) = (char *)this + 3720;
  *((_QWORD *)this + 465) = (char *)this + 3720;
  v10 = 0;
  if ( a2 == -1 )
  {
    for ( i = 0; i < *((_DWORD *)this + 1738); ++i )
    {
      if ( (byte_14008A201 & 1) != 0 )
        McTemplateK0x_EtwWriteTransfer(
          (__int64)this,
          &EventPagingEndPreparation,
          (__int64)a3,
          *((_QWORD *)this + i + 144));
      if ( *((_DWORD *)this + i + 416) != *((_DWORD *)this + i + 480)
        || *((_DWORD *)this + i + 544) != *((_DWORD *)this + i + 608) )
      {
        VIDMM_GLOBAL::FlushPagingBufferInternal(this, i, 0, 0LL, 0LL, 0, 0);
      }
    }
  }
  else
  {
    if ( a4 )
    {
      VIDMM_GLOBAL::SignalMonitoredFence(this, a2, a6, a5, &v24);
      v10 = v24;
    }
    VIDMM_GLOBAL::EndPreparationOnPhysicalAdapter(this, v6);
  }
  v12 = (_QWORD **)((char *)this + 45200);
  if ( *v12 != v12 )
  {
    VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(this, v6);
    v19 = *v12;
    while ( v19 != v12 )
    {
      v20 = (_QWORD *)*v19;
      v21 = (VIDMM_DEVICE *)(v19 - 37);
      if ( *(_QWORD **)(*v19 + 8LL) != v19 || (v22 = (_QWORD *)v19[1], (_QWORD *)*v22 != v19) )
        __fastfail(3u);
      *v22 = v20;
      v20[1] = v22;
      *v19 = 0LL;
      v19 = v20;
      if ( (*((_BYTE *)v21 + 312) & 7) != 0 )
      {
        v23 = *((_QWORD *)v21 + 4);
        g_DxgMmsBugcheckExportIndex = 1;
        WdLogSingleEntry5(0LL, 270LL, 63LL, v21, v23, 0LL);
        WdLogGlobalForLineNumber = 213;
        goto LABEL_25;
      }
      VIDMM_DEVICE::ResumeSchedulerDevice(v21);
    }
  }
  VIDMM_GLOBAL::ResumeFlipQueuesIfSuspendedForMove(this);
  if ( a4 && !v10 )
  {
    v13 = 0;
    v14 = 0LL;
    v15 = 0;
    v16 = 0LL;
    v17 = *(_QWORD *)(*((_QWORD *)this + 2) + 744LL);
    if ( *(_BYTE *)(v17 + 63) )
    {
      v16 = *(_QWORD **)(v17 + 344);
      if ( !*v16 )
      {
        VidSchSignalSyncObjectsFromCpu(1u, &a6, 0, &a5);
        goto LABEL_15;
      }
      if ( (_DWORD)v6 == -1 )
      {
        v15 = *(_DWORD *)(v17 + 84);
      }
      else
      {
        v15 = 1;
        v16 += v6;
      }
    }
    else if ( (_DWORD)v6 == -1 )
    {
      v13 = *(_DWORD *)(v17 + 84);
      v14 = *(__int64 **)(v17 + 328);
    }
    else
    {
      v13 = 1;
      v14 = (__int64 *)(*(_QWORD *)(v17 + 328) + 8 * v6);
    }
    VidSchSignalSyncObjectsFromGpu(v15, (unsigned __int64)v16, v13, v14, 1u, (__int64)&a6, 0, &a5, 0);
LABEL_15:
    if ( (_DWORD)v6 == -1 )
    {
      v18 = *((_DWORD *)this + 1738);
      if ( v18 > 1 )
        VidSchWaitForPagingFence(*(_QWORD *)(*((_QWORD *)this + 2) + 744LL), a6, a5, (unsigned int)((1 << v18) - 1));
    }
    goto LABEL_18;
  }
LABEL_25:
  if ( a3 )
  {
    VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(this, v6);
    KeSetEvent(a3, 0, 0);
  }
LABEL_18:
  *((_QWORD *)this + 870) = 0LL;
  *((_QWORD *)this + 871) = 0LL;
  *((_DWORD *)this + 2) = 0;
}
