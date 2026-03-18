/*
 * XREFs of ?StartPreparation@VIDMM_GLOBAL@@QEAAXIPEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@W4VIDMM_OPERATION@@@Z @ 0x1400CF620
 * Callers:
 *     ?Defragment@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_SEGMENT@@@Z @ 0x140099F08 (-Defragment@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_SEGMENT@@@Z.c)
 *     ?VidMmUpgradeAllocation@@YAJPEAUVIDMM_WORKER_THREAD@@PEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400A8668 (-VidMmUpgradeAllocation@@YAJPEAUVIDMM_WORKER_THREAD@@PEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 *     TrimSegmentOfferLists @ 0x1400B292C (TrimSegmentOfferLists.c)
 *     ?TryPageInDevice@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z @ 0x1400CDA2C (-TryPageInDevice@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z.c)
 *     ?CleanupMarkedForEvictionAllocations@VIDMM_GLOBAL@@QEAAXXZ @ 0x1400CE160 (-CleanupMarkedForEvictionAllocations@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1400D09E8 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 *     ?FaultAllAllocations@VIDMM_DEVICE@@QEAAXXZ @ 0x1401028B0 (-FaultAllAllocations@VIDMM_DEVICE@@QEAAXXZ.c)
 *     ?CheckMemorySegmentsFState@VIDMM_GLOBAL@@QEAAXXZ @ 0x140104FA0 (-CheckMemorySegmentsFState@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?ProcessPendingOfferList@VIDMM_GLOBAL@@QEAAXXZ @ 0x14010D82C (-ProcessPendingOfferList@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ProcessSystemMemoryOfferList @ 0x14010E534 (ProcessSystemMemoryOfferList.c)
 *     ?CurateVPR@VIDMM_SEGMENT@@QEAAXXZ @ 0x14011146C (-CurateVPR@VIDMM_SEGMENT@@QEAAXXZ.c)
 *     HandlePromotionCandidates @ 0x14011A818 (HandlePromotionCandidates.c)
 *     ?ForceUncommitVirtualAddress@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@@Z @ 0x140126BC0 (-ForceUncommitVirtualAddress@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@@Z.c)
 * Callees:
 *     McTemplateK0x_EtwWriteTransfer @ 0x140031A48 (McTemplateK0x_EtwWriteTransfer.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall VIDMM_GLOBAL::StartPreparation(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, unsigned int a5)
{
  __int64 v6; // rcx
  __int64 result; // rax
  unsigned int v8; // esi
  __int64 v9; // rdi
  __int64 v10; // rdi
  int v11; // ecx

  v6 = *(int *)(a1 + 8);
  if ( (_DWORD)v6 )
  {
LABEL_17:
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 270LL, 64LL, a1, v6, (int)a5);
    WdLogGlobalForLineNumber = 213;
    JUMPOUT(0x1400CF828LL);
  }
  ++*(_QWORD *)(a1 + 4560);
  result = a5;
  *(_DWORD *)(a1 + 8) = a5;
  *(_DWORD *)(a1 + 56) = a2;
  *(_QWORD *)(a1 + 6960) = a3;
  *(_QWORD *)(a1 + 6968) = a4;
  if ( a2 == -1 )
  {
    v8 = 0;
    if ( *(_DWORD *)(a1 + 6952) )
    {
      while ( 1 )
      {
        v9 = v8;
        if ( (byte_14008A201 & 1) != 0 )
          McTemplateK0x_EtwWriteTransfer(v6, &EventPagingStartPreparation, a3, *(_QWORD *)(a1 + 8LL * v8 + 1152));
        v6 = *(unsigned int *)(a1 + 4LL * v8 + 1664);
        if ( (_DWORD)v6 != *(_DWORD *)(a1 + 4LL * v8 + 1920) )
          break;
        result = *(unsigned int *)(a1 + 4LL * v8 + 2176);
        if ( (_DWORD)result != *(_DWORD *)(a1 + 4LL * v8 + 2432) )
          break;
        ++v8;
        *(_DWORD *)(a1 + 4 * v9 + 3792) = 0;
        *(_DWORD *)(a1 + 4 * v9 + 4048) = v6;
        *(_DWORD *)(a1 + 4 * v9 + 4304) = result;
        if ( v8 >= *(_DWORD *)(a1 + 6952) )
          return result;
      }
      g_DxgMmsBugcheckExportIndex = 1;
      WdLogSingleEntry5(0LL, 270LL, 33LL, a1, 0LL, 0LL);
      WdLogGlobalForLineNumber = 213;
      goto LABEL_16;
    }
  }
  else
  {
    v10 = a2;
    if ( (byte_14008A201 & 1) != 0 )
      McTemplateK0x_EtwWriteTransfer(v6, &EventPagingStartPreparation, a3, *(_QWORD *)(a1 + 8LL * a2 + 1152));
    v11 = *(_DWORD *)(a1 + 4 * v10 + 1664);
    if ( v11 != *(_DWORD *)(a1 + 4 * v10 + 1920)
      || (result = *(unsigned int *)(a1 + 4 * v10 + 2176), (_DWORD)result != *(_DWORD *)(a1 + 4 * v10 + 2432)) )
    {
LABEL_16:
      g_DxgMmsBugcheckExportIndex = 1;
      WdLogSingleEntry5(0LL, 270LL, 33LL, a1, 0LL, 0LL);
      WdLogGlobalForLineNumber = 213;
      goto LABEL_17;
    }
    *(_DWORD *)(a1 + 4 * v10 + 4048) = v11;
    *(_DWORD *)(a1 + 4 * v10 + 3792) = 0;
    *(_DWORD *)(a1 + 4 * v10 + 4304) = result;
  }
  return result;
}
