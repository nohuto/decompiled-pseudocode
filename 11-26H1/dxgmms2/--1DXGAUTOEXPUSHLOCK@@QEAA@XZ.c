/*
 * XREFs of ??1DXGAUTOEXPUSHLOCK@@QEAA@XZ @ 0x140035F30
 * Callers:
 *     ??1VIDMM_GLOBAL@@QEAA@XZ @ 0x14009CB9C (--1VIDMM_GLOBAL@@QEAA@XZ.c)
 *     ?Init@VIDMM_GLOBAL@@QEAAJPEAVADAPTER_RENDER@@KI@Z @ 0x14009E770 (-Init@VIDMM_GLOBAL@@QEAAJPEAVADAPTER_RENDER@@KI@Z.c)
 *     ?InitializePartitionForAllAdapters@VIDMM_GLOBAL@@SAJPEAUVIDMM_PARTITION@@@Z @ 0x14009F50C (-InitializePartitionForAllAdapters@VIDMM_GLOBAL@@SAJPEAUVIDMM_PARTITION@@@Z.c)
 *     ?RemoveFromAdapterList@VIDMM_GLOBAL@@QEAAXXZ @ 0x1400A20FC (-RemoveFromAdapterList@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     UpdateProcessStatusBudgetingInfo @ 0x1400A6654 (UpdateProcessStatusBudgetingInfo.c)
 *     ??1VIDMM_PARTITION@@QEAA@XZ @ 0x1400ABC7C (--1VIDMM_PARTITION@@QEAA@XZ.c)
 *     VidSchInitializeAdapter @ 0x1400C2230 (VidSchInitializeAdapter.c)
 *     VidSchTerminateAdapter @ 0x1400C57F0 (VidSchTerminateAdapter.c)
 *     ?RecalculateBudget@VIDMM_GLOBAL@@QEAA_NXZ @ 0x1400C60A4 (-RecalculateBudget@VIDMM_GLOBAL@@QEAA_NXZ.c)
 *     ?CheckBudgetRefreshConditionOnProcessMemoryChange@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ @ 0x1400CFA10 (-CheckBudgetRefreshConditionOnProcessMemoryChange@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ.c)
 *     ?VidMmRecordAlloc@@YAXPEAUVIDMM_PHYSICAL_ADAPTER@@PEAUVIDMM_PHYSICAL_ALLOC@@PEAVVIDMM_PROCESS@@W4VIDMM_ALLOC_RECORD_TYPE@@@Z @ 0x1400DD220 (-VidMmRecordAlloc@@YAXPEAUVIDMM_PHYSICAL_ADAPTER@@PEAUVIDMM_PHYSICAL_ALLOC@@PEAVVIDMM_PROCESS@@W.c)
 *     ?RequestNewBudget@VIDMM_GLOBAL@@QEAAX_N@Z @ 0x1400E1030 (-RequestNewBudget@VIDMM_GLOBAL@@QEAAX_N@Z.c)
 *     CalculateTrimIntervals @ 0x14010CB90 (CalculateTrimIntervals.c)
 *     ?VidMmiOpenCurrentPartition@@YAJPEAVVIDMM_PROCESS@@PEAPEAUVIDMM_PARTITION@@@Z @ 0x140118A50 (-VidMmiOpenCurrentPartition@@YAJPEAVVIDMM_PROCESS@@PEAPEAUVIDMM_PARTITION@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGAUTOEXPUSHLOCK::~DXGAUTOEXPUSHLOCK(DXGAUTOEXPUSHLOCK *this)
{
  int v1; // eax

  v1 = *((_DWORD *)this + 4);
  if ( v1 == 1 )
  {
    *((_DWORD *)this + 4) = 0;
    ExReleasePushLockSharedEx(*((_QWORD *)this + 1), 0LL);
LABEL_3:
    KeLeaveCriticalRegion();
    return;
  }
  if ( v1 == 2 )
  {
    *((_DWORD *)this + 4) = 0;
    ExReleasePushLockExclusiveEx(*((_QWORD *)this + 1), 0LL);
    goto LABEL_3;
  }
}
