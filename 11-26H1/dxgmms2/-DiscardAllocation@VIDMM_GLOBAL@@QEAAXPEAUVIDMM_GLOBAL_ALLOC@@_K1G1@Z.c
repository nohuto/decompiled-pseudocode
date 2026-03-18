/*
 * XREFs of ?DiscardAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@_K1G1@Z @ 0x1400D80D8
 * Callers:
 *     ?VidMmPbmmDiscardMemoryCB@@YAXPEAUVIDMM_PHYSICAL_ADAPTER@@PEAUVIDMM_PHYSICAL_ALLOC@@III_K@Z @ 0x1400B0910 (-VidMmPbmmDiscardMemoryCB@@YAXPEAUVIDMM_PHYSICAL_ADAPTER@@PEAUVIDMM_PHYSICAL_ALLOC@@III_K@Z.c)
 *     ?TransferToSystem@VIDMM_MEMORY_SEGMENT@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@_NPEAUVIDMM_LOCAL_ALLOC@@1@Z @ 0x14012C3C4 (-TransferToSystem@VIDMM_MEMORY_SEGMENT@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@_NPEAUVIDMM_LOCAL_.c)
 * Callees:
 *     ?DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x140037958 (-DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z.c)
 *     McTemplateK0pppxxq_EtwWriteTransfer @ 0x140041EA0 (McTemplateK0pppxxq_EtwWriteTransfer.c)
 *     memset @ 0x14005BBC0 (memset.c)
 *     ?CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@QEAA_NKPEAUVIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@JHPEA_KPEAX@Z @ 0x1400D6590 (-CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@QEAA_NKPEAUVIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BU.c)
 *     ?SetupForBuildPagingBufferIteration@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1400D7AC4 (-SetupForBuildPagingBufferIteration@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUI.c)
 *     ?SetupForBuildPagingBuffer@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1400D7C7C (-SetupForBuildPagingBuffer@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGB.c)
 *     ?VerifyAllocationIsIdle@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400D8328 (-VerifyAllocationIsIdle@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?IsAllocationInUse@VIDMM_GLOBAL@@QEBAEPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400D8388 (-IsAllocationInUse@VIDMM_GLOBAL@@QEBAEPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400E71D0 (-WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 */

void __fastcall VIDMM_GLOBAL::DiscardAllocation(
        VIDMM_GLOBAL *this,
        struct VIDMM_GLOBAL_ALLOC *a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        unsigned __int16 a5,
        SIZE_T a6)
{
  unsigned __int64 v6; // r15
  unsigned __int64 v9; // rbx
  __int64 v10; // rcx
  struct VIDMM_GLOBAL_ALLOC *v11; // r8
  __int64 v12; // r14
  __int64 v13; // rcx
  unsigned __int8 IsAllocationInUse; // al
  ADAPTER_RENDER *v15; // rcx
  int v16; // r15d
  bool v17; // sf
  __int64 v18; // rbx
  HANDLE CurrentProcessId; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  ADAPTER_RENDER *v23; // rcx
  __int64 v24; // [rsp+48h] [rbp-C0h]
  unsigned __int64 v25; // [rsp+58h] [rbp-B0h] BYREF
  struct _DXGKARG_BUILDPAGINGBUFFER v26; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v27; // [rsp+1F0h] [rbp+E8h]

  v6 = a3;
  v9 = a4;
  memset(&v26, 0, sizeof(v26));
  v27 = *(_QWORD *)a2;
  if ( g_IsInternalReleaseOrDbg )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v10) + 24) = a2;
    WdLogGlobalForLineNumber = 15177;
  }
  v12 = (*(_DWORD *)(*(_QWORD *)a2 + 52LL) >> 2) & 0x3F;
  VIDMM_GLOBAL::SetupForBuildPagingBuffer(this, (*(_DWORD *)(*(_QWORD *)a2 + 52LL) >> 2) & 0x3F, v11, &v26);
  do
  {
    VIDMM_GLOBAL::SetupForBuildPagingBufferIteration(this, v12, a2, &v26);
    v13 = *((_QWORD *)a2 + 46);
    if ( (*((_BYTE *)this + 41065) & 0x20) != 0 )
    {
      v26.Operation = DXGK_OPERATION_SIGNAL_MONITORED_FENCE|DXGK_OPERATION_VIRTUAL_FILL;
      v26.UpdateContextAllocation.ContextAllocation = *(_QWORD *)(v13 + 48);
      v26.Fill.FillPattern = v9 >> 12;
      v26.DiscardContent.SegmentId = v6 >> 12;
      v26.DiscardContent.SegmentAddress.HighPart = a5;
      v26.MapApertureSegment.OffsetInPages = a6;
    }
    else
    {
      v26.Operation = DXGK_OPERATION_DISCARD_CONTENT;
      v26.UpdateContextAllocation.ContextAllocation = *(_QWORD *)(v13 + 48);
      v26.DiscardContent.SegmentId = a5;
      v26.Transfer.TransferSize = a6;
    }
    v26.Transfer.TransferOffset = 0;
    IsAllocationInUse = VIDMM_GLOBAL::IsAllocationInUse(this, a2);
    v15 = (ADAPTER_RENDER *)*((_QWORD *)this + 2);
    v26.Transfer.TransferOffset = (IsAllocationInUse == 0) | v26.Transfer.TransferOffset & 0xFFFFFFFE;
    v16 = ADAPTER_RENDER::DdiBuildPagingBuffer(v15, &v26);
    if ( v16 == -1071775486 )
    {
      VIDMM_GLOBAL::WaitForAllPagingEngines(this, a2);
      VIDMM_GLOBAL::VerifyAllocationIsIdle(this, a2);
      v23 = (ADAPTER_RENDER *)*((_QWORD *)this + 2);
      v26.Transfer.TransferOffset |= 1u;
      v16 = ADAPTER_RENDER::DdiBuildPagingBuffer(v23, &v26);
    }
    if ( (byte_14008A201 & 0x10) != 0 )
    {
      v18 = *((_QWORD *)this + v12 + 144);
      CurrentProcessId = PsGetCurrentProcessId();
      LODWORD(v24) = 5;
      McTemplateK0pppxxq_EtwWriteTransfer(v21, v20, v22, CurrentProcessId, a2, v18, 0LL, 0LL, v24);
      v9 = a4;
    }
    _InterlockedAdd64((volatile signed __int64 *)this + 939, *(_QWORD *)(v27 + 16));
    v25 = 0LL;
    VIDMM_GLOBAL::CompleteBuildPagingBufferIteration(this, v12, a2, &v26, v16, 0, &v25, 0LL);
    v17 = v16 < 0;
    v6 = a3;
  }
  while ( v17 );
}
