/*
 * XREFs of ?NotifyResidency@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@EG_K@Z @ 0x1400D941C
 * Callers:
 *     UpdateAllocationProperty @ 0x1400B2A2C (UpdateAllocationProperty.c)
 *     ?MoveOneResource@VIDMM_SEGMENT@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@PEA_NPEAX@Z @ 0x1400B6A80 (-MoveOneResource@VIDMM_SEGMENT@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@PEA_NPEAX@Z.c)
 *     MoveAndFlipDisplayingAllocation @ 0x1400BECE0 (MoveAndFlipDisplayingAllocation.c)
 *     EvictResources @ 0x1401172F8 (EvictResources.c)
 *     ?CommitResource@VIDMM_APERTURE_SEGMENT@@UEAAJPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@@Z @ 0x14012A910 (-CommitResource@VIDMM_APERTURE_SEGMENT@@UEAAJPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@@Z.c)
 *     ?TransferToSegment@VIDMM_MEMORY_SEGMENT@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@PEAU_MDL@@_N@Z @ 0x14012B6B8 (-TransferToSegment@VIDMM_MEMORY_SEGMENT@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@PEAU_MDL@@_N@Z.c)
 * Callees:
 *     ?DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x140037958 (-DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z.c)
 *     memset @ 0x14005BBC0 (memset.c)
 *     ?CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@QEAA_NKPEAUVIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@JHPEA_KPEAX@Z @ 0x1400D6590 (-CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@QEAA_NKPEAUVIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BU.c)
 *     ?SetupForBuildPagingBufferIteration@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1400D7AC4 (-SetupForBuildPagingBufferIteration@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUI.c)
 *     ?SetupForBuildPagingBuffer@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1400D7C7C (-SetupForBuildPagingBuffer@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGB.c)
 *     ?RecordVaPagingHistoryNotifyResidency@VIDMM_GLOBAL@@QEAAXPEAU_DXGKARG_BUILDPAGINGBUFFER@@PEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400D95B4 (-RecordVaPagingHistoryNotifyResidency@VIDMM_GLOBAL@@QEAAXPEAU_DXGKARG_BUILDPAGINGBUFFER@@PEAUVID.c)
 */

void __fastcall VIDMM_GLOBAL::NotifyResidency(
        ADAPTER_RENDER **this,
        struct VIDMM_GLOBAL_ALLOC *a2,
        unsigned __int8 a3,
        unsigned __int16 a4,
        SIZE_T a5)
{
  UINT v6; // r12d
  __int64 v8; // r15
  __int64 v9; // rcx
  struct VIDMM_GLOBAL_ALLOC *v10; // r8
  __int64 v11; // rax
  unsigned int v12; // r14d
  SIZE_T v13; // r13
  __int64 v14; // rax
  int v15; // ebx
  struct _DXGKARG_BUILDPAGINGBUFFER v16; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int64 v17; // [rsp+1B0h] [rbp+B0h] BYREF

  v6 = a4;
  v8 = a3;
  if ( !*((_BYTE *)this + 41068) && (**((_DWORD **)a2 + 46) & 0x8000) != 0 )
  {
    memset(&v16, 0, sizeof(v16));
    if ( g_IsInternalReleaseOrDbg )
    {
      v11 = WdLogNewEntry5_WdTrace(v9);
      *(_QWORD *)(v11 + 24) = a2;
      *(_QWORD *)(v11 + 32) = v8;
      WdLogGlobalForLineNumber = 14833;
    }
    v12 = (*(_DWORD *)(*(_QWORD *)a2 + 52LL) >> 2) & 0x3F;
    VIDMM_GLOBAL::SetupForBuildPagingBuffer((VIDMM_GLOBAL *)this, v12, v10, &v16);
    v13 = a5;
    do
    {
      VIDMM_GLOBAL::SetupForBuildPagingBufferIteration((VIDMM_GLOBAL *)this, v12, a2, &v16);
      v14 = *((_QWORD *)a2 + 46);
      v16.Operation = DXGK_OPERATION_NOTIFY_RESIDENCY;
      v16.UpdateContextAllocation.ContextAllocation = *(_QWORD *)(v14 + 48);
      if ( (_BYTE)v8 )
      {
        v16.Transfer.Source.SegmentId |= 1u;
        v16.Transfer.TransferOffset = v6;
        v16.Transfer.TransferSize = v13;
      }
      else
      {
        v16.Transfer.Source.SegmentId &= ~1u;
        v16.Transfer.TransferOffset = 0;
        v16.Transfer.TransferSize = 0LL;
      }
      v15 = ADAPTER_RENDER::DdiBuildPagingBuffer(this[2], &v16);
      v17 = 0LL;
      VIDMM_GLOBAL::CompleteBuildPagingBufferIteration((VIDMM_GLOBAL *)this, v12, a2, &v16, v15, 0, &v17, 0LL);
    }
    while ( v15 < 0 );
    VIDMM_GLOBAL::RecordVaPagingHistoryNotifyResidency((VIDMM_GLOBAL *)this, &v16, a2);
  }
}
