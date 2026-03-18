/*
 * XREFs of ?FillAllocationInternal@VIDMM_GLOBAL@@QEAAXIPEAUVIDMM_GLOBAL_ALLOC@@_K1IPEBUVIDMM_SEGMENT_BASE@@1@Z @ 0x1400D8B94
 * Callers:
 *     ?FillAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@_K1IPEBUVIDMM_SEGMENT_BASE@@1@Z @ 0x1400D8AA0 (-FillAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@_K1IPEBUVIDMM_SEGMENT_BASE@@1@Z.c)
 * Callees:
 *     ?DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x140037958 (-DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z.c)
 *     McTemplateK0pppxxq_EtwWriteTransfer @ 0x140041EA0 (McTemplateK0pppxxq_EtwWriteTransfer.c)
 *     memset @ 0x14005BBC0 (memset.c)
 *     ?CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@QEAA_NKPEAUVIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@JHPEA_KPEAX@Z @ 0x1400D6590 (-CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@QEAA_NKPEAUVIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BU.c)
 *     ?SetupForBuildPagingBufferIteration@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1400D7AC4 (-SetupForBuildPagingBufferIteration@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUI.c)
 *     ?SetupForBuildPagingBuffer@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1400D7C7C (-SetupForBuildPagingBuffer@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGB.c)
 *     ?FillAllocationUsingGpuVa@VIDMM_GLOBAL@@QEAAXIPEAUVIDMM_GLOBAL_ALLOC@@_K1IPEBUVIDMM_SEGMENT_BASE@@1@Z @ 0x1400D83E4 (-FillAllocationUsingGpuVa@VIDMM_GLOBAL@@QEAAXIPEAUVIDMM_GLOBAL_ALLOC@@_K1IPEBUVIDMM_SEGMENT_BASE.c)
 *     ?VidMmRecordTransfer@@YAXPEAUVIDMM_GLOBAL_STATISTICS@@_KI@Z @ 0x1401195CC (-VidMmRecordTransfer@@YAXPEAUVIDMM_GLOBAL_STATISTICS@@_KI@Z.c)
 */

void __fastcall VIDMM_GLOBAL::FillAllocationInternal(
        ADAPTER_RENDER **this,
        unsigned int a2,
        struct VIDMM_GLOBAL_ALLOC *a3,
        unsigned __int64 a4,
        SIZE_T a5,
        UINT a6,
        const struct VIDMM_SEGMENT_BASE *a7,
        unsigned __int64 a8)
{
  __int64 v9; // r14
  __int64 v11; // rbx
  struct VIDMM_GLOBAL_ALLOC *v12; // r8
  D3DGPU_VIRTUAL_ADDRESS v13; // r15
  const struct VIDMM_SEGMENT_BASE *v14; // r13
  SIZE_T v15; // r12
  bool v16; // zf
  UINT v17; // ecx
  ADAPTER_RENDER *v18; // rcx
  ADAPTER_RENDER *v19; // rbx
  HANDLE CurrentProcessId; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  int v24; // eax
  __int64 v25; // [rsp+40h] [rbp-C0h]
  struct _DXGKARG_BUILDPAGINGBUFFER v26; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 v27; // [rsp+1D0h] [rbp+D0h] BYREF
  int v28; // [rsp+1D8h] [rbp+D8h]
  unsigned __int64 v29; // [rsp+1E8h] [rbp+E8h]

  v29 = a4;
  v9 = a2;
  v11 = a2;
  if ( *(char *)(*((_QWORD *)this[5040] + a2) + 556LL) >= 0 )
  {
    memset(&v26, 0, sizeof(v26));
    VIDMM_GLOBAL::SetupForBuildPagingBuffer((VIDMM_GLOBAL *)this, v9, v12, &v26);
    if ( a3 )
      v13 = *(_QWORD *)(*((_QWORD *)a3 + 46) + 48LL);
    else
      v13 = 0LL;
    v14 = a7;
    v15 = a5;
    do
    {
      VIDMM_GLOBAL::SetupForBuildPagingBufferIteration((VIDMM_GLOBAL *)this, v9, a3, &v26);
      v16 = (*((_BYTE *)this + 41065) & 0x20) == 0;
      v17 = *((unsigned __int16 *)v14 + 32);
      v26.UpdateContextAllocation.ContextAllocation = v13;
      if ( v16 )
      {
        v26.Transfer.Source.SegmentId = v17;
        v26.Transfer.Source.SegmentAddress.QuadPart = *((_QWORD *)v14 + 2) + a8;
        v26.Operation = DXGK_OPERATION_FILL;
        v26.Fill.FillSize = v15;
      }
      else
      {
        v26.Transfer.TransferOffset = v29 >> 12;
        v26.DiscardContent.SegmentAddress.HighPart = v17;
        v26.MapApertureSegment.OffsetInPages = *((_QWORD *)v14 + 2) + a8;
        v26.Operation = DXGK_OPERATION_SIGNAL_MONITORED_FENCE|DXGK_OPERATION_VIRTUAL_TRANSFER;
        v26.DiscardContent.SegmentId = v15 >> 12;
      }
      v18 = this[2];
      v26.Fill.FillPattern = a6;
      v28 = ADAPTER_RENDER::DdiBuildPagingBuffer(v18, &v26);
      if ( (byte_14008A201 & 0x10) != 0 )
      {
        v19 = this[v11 + 144];
        CurrentProcessId = PsGetCurrentProcessId();
        LODWORD(v25) = 0;
        McTemplateK0pppxxq_EtwWriteTransfer(v22, v21, v23, CurrentProcessId, a3, v19, 0LL, v15, v25);
        v11 = v9;
      }
      VidMmRecordTransfer((struct VIDMM_GLOBAL_STATISTICS *)(this + 892), v15, 0);
      v27 = 0LL;
      VIDMM_GLOBAL::CompleteBuildPagingBufferIteration((VIDMM_GLOBAL *)this, v9, a3, &v26, v24, 0, &v27, 0LL);
    }
    while ( v28 < 0 );
  }
  else
  {
    VIDMM_GLOBAL::FillAllocationUsingGpuVa((VIDMM_GLOBAL *)this, a2, a3, a4, a5, a6, a7, a8);
  }
}
