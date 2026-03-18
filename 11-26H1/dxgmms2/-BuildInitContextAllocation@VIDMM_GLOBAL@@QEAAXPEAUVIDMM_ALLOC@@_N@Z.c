/*
 * XREFs of ?BuildInitContextAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z @ 0x1400CDBD4
 * Callers:
 *     ?UpdateVirtualAddressForNewResourceLocation@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@@Z @ 0x1400B7C7C (-UpdateVirtualAddressForNewResourceLocation@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@.c)
 *     ?InitContextAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@EPEA_NPEAPEAU2@@Z @ 0x1400CDAE8 (-InitContextAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@EPEA_NPEAPEAU2@@Z.c)
 * Callees:
 *     ?DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x140037958 (-DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z.c)
 *     ?VidMmGetAllocGpuVirtualAddress@@YA_KPEBUVIDMM_ALLOC@@I@Z @ 0x140038928 (-VidMmGetAllocGpuVirtualAddress@@YA_KPEBUVIDMM_ALLOC@@I@Z.c)
 *     McTemplateK0pppxxq_EtwWriteTransfer @ 0x140041EA0 (McTemplateK0pppxxq_EtwWriteTransfer.c)
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 *     memset @ 0x14005BBC0 (memset.c)
 *     ?CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@QEAA_NKPEAUVIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@JHPEA_KPEAX@Z @ 0x1400D6590 (-CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@QEAA_NKPEAUVIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BU.c)
 *     ?SetupForBuildPagingBufferIteration@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1400D7AC4 (-SetupForBuildPagingBufferIteration@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUI.c)
 *     ?SetupForBuildPagingBuffer@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1400D7C7C (-SetupForBuildPagingBuffer@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGB.c)
 */

void __fastcall VIDMM_GLOBAL::BuildInitContextAllocation(VIDMM_GLOBAL *this, struct VIDMM_ALLOC *a2, char a3)
{
  const struct VIDMM_ALLOC *v4; // r15
  struct VIDMM_GLOBAL_ALLOC *v6; // rdi
  __int64 v7; // r13
  __int64 v8; // rsi
  __int64 v9; // r12
  struct VIDMM_GLOBAL_ALLOC *v10; // r8
  D3DGPU_VIRTUAL_ADDRESS v11; // rax
  int v12; // ecx
  __int64 AllocGpuVirtualAddress; // rax
  ADAPTER_RENDER *v14; // rcx
  int v15; // r15d
  bool v16; // sf
  __int64 v17; // rbx
  HANDLE CurrentProcessId; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // [rsp+40h] [rbp-C0h]
  struct _DXGKARG_BUILDPAGINGBUFFER v23; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 v24; // [rsp+1D0h] [rbp+D0h] BYREF
  struct VIDMM_ALLOC *v25; // [rsp+1D8h] [rbp+D8h]

  v25 = a2;
  v4 = a2;
  v6 = **(struct VIDMM_GLOBAL_ALLOC ***)a2;
  v7 = *(_QWORD *)v6;
  v8 = (*(_DWORD *)(*(_QWORD *)v6 + 52LL) >> 2) & 0x3F;
  v9 = *(_QWORD *)(*((_QWORD *)this + 5040) + 8 * v8);
  memset(&v23, 0, sizeof(v23));
  if ( a3 )
    VIDMM_GLOBAL::SetupForBuildPagingBuffer(this, v8, v10, &v23);
  do
  {
    VIDMM_GLOBAL::SetupForBuildPagingBufferIteration(this, v8, v6, &v23);
    v23.Operation = DXGK_OPERATION_INIT_CONTEXT_RESOURCE;
    if ( v6 )
      v11 = *(_QWORD *)(*((_QWORD *)v6 + 46) + 48LL);
    else
      v11 = 0LL;
    v23.UpdateContextAllocation.ContextAllocation = v11;
    if ( (*(_DWORD *)(v7 + 52) & 2) != 0 )
      (*(void (__fastcall **)(__int64, __int64, UINT *, SIZE_T *, _QWORD))(*(_QWORD *)v9 + 48LL))(
        v9,
        v7,
        &v23.Transfer.TransferOffset,
        &v23.Transfer.TransferSize,
        0LL);
    v12 = **((_DWORD **)v6 + 46);
    if ( (v12 & 1) != 0 )
    {
      if ( (v12 & 8) != 0 )
        v23.MapApertureSegment.OffsetInPages = *((_QWORD *)v6 + 26);
      else
        v23.MapApertureSegment.OffsetInPages = *(_QWORD *)(*((_QWORD *)v6 + 6) + 16LL);
    }
    AllocGpuVirtualAddress = VidMmGetAllocGpuVirtualAddress(v4, v8);
    v14 = (ADAPTER_RENDER *)*((_QWORD *)this + 2);
    v23.Transfer.Source.SegmentAddress.QuadPart = AllocGpuVirtualAddress;
    v15 = ADAPTER_RENDER::DdiBuildPagingBuffer(v14, &v23);
    if ( (byte_14008A201 & 0x10) != 0 )
    {
      v17 = *((_QWORD *)this + v8 + 144);
      CurrentProcessId = PsGetCurrentProcessId();
      LODWORD(v22) = 8;
      McTemplateK0pppxxq_EtwWriteTransfer(v20, v19, v21, CurrentProcessId, v6, v17, 0LL, 0LL, v22);
    }
    v24 = 0LL;
    VIDMM_GLOBAL::CompleteBuildPagingBufferIteration(this, v8, v6, &v23, v15, 0, &v24, 0LL);
    v16 = v15 < 0;
    v4 = v25;
  }
  while ( v16 );
}
