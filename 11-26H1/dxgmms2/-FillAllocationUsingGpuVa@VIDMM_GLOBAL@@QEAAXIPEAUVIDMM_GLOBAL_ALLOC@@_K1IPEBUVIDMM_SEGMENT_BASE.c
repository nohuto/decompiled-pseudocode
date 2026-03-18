/*
 * XREFs of ?FillAllocationUsingGpuVa@VIDMM_GLOBAL@@QEAAXIPEAUVIDMM_GLOBAL_ALLOC@@_K1IPEBUVIDMM_SEGMENT_BASE@@1@Z @ 0x1400D83E4
 * Callers:
 *     ?FillAllocationInternal@VIDMM_GLOBAL@@QEAAXIPEAUVIDMM_GLOBAL_ALLOC@@_K1IPEBUVIDMM_SEGMENT_BASE@@1@Z @ 0x1400D8B94 (-FillAllocationInternal@VIDMM_GLOBAL@@QEAAXIPEAUVIDMM_GLOBAL_ALLOC@@_K1IPEBUVIDMM_SEGMENT_BASE@@.c)
 * Callees:
 *     ?DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x140037958 (-DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z.c)
 *     ?FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z @ 0x140038F20 (-FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z.c)
 *     McTemplateK0pppxxq_EtwWriteTransfer @ 0x140041EA0 (McTemplateK0pppxxq_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x14005B770 (__security_check_cookie.c)
 *     memset @ 0x14005BBC0 (memset.c)
 *     ?CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@QEAA_NKPEAUVIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@JHPEA_KPEAX@Z @ 0x1400D6590 (-CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@QEAA_NKPEAUVIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BU.c)
 *     ?SetupForBuildPagingBufferIteration@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1400D7AC4 (-SetupForBuildPagingBufferIteration@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUI.c)
 *     ?SetupForBuildPagingBuffer@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1400D7C7C (-SetupForBuildPagingBuffer@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGB.c)
 *     ?MapScratchAreaVaRange@VIDMM_PAGING_PROCESS@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@I_KPEAUVIDMM_GLOBAL_ALLOC@@0I0PEBU_DXGK_ADL@@PEAE0@Z @ 0x1400D87F8 (-MapScratchAreaVaRange@VIDMM_PAGING_PROCESS@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@I_KPEAUVIDMM_GLOBAL_.c)
 *     ?MustFlushTlbOnValidTransition@VIDMM_GLOBAL@@QEAA_NI@Z @ 0x1400D8A54 (-MustFlushTlbOnValidTransition@VIDMM_GLOBAL@@QEAA_NI@Z.c)
 *     ?RecordVaPagingHistoryVirtualFill@VIDMM_GLOBAL@@QEAAXPEAU_DXGKARG_BUILDPAGINGBUFFER@@KPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400D8DDC (-RecordVaPagingHistoryVirtualFill@VIDMM_GLOBAL@@QEAAXPEAU_DXGKARG_BUILDPAGINGBUFFER@@KPEAUVIDMM_.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1400E78B8 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     ?FlushScratchGpuVaRanges@VIDMM_GLOBAL@@QEAAXI@Z @ 0x140105B64 (-FlushScratchGpuVaRanges@VIDMM_GLOBAL@@QEAAXI@Z.c)
 */

void __fastcall VIDMM_GLOBAL::FillAllocationUsingGpuVa(
        VIDMM_GLOBAL *this,
        unsigned int a2,
        struct VIDMM_GLOBAL_ALLOC *a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        UINT a6,
        const struct VIDMM_SEGMENT_BASE *a7,
        unsigned __int64 a8)
{
  __int64 v9; // r14
  unsigned int v11; // eax
  unsigned __int64 v12; // rsi
  unsigned __int64 v13; // r12
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rdx
  unsigned __int64 i; // r8
  unsigned int v17; // ebx
  unsigned int v18; // r13d
  struct VIDMM_MAPPED_VA_RANGE *v19; // r9
  LARGE_INTEGER *v20; // r13
  struct VIDMM_GLOBAL_ALLOC *v21; // r8
  __int64 v22; // r9
  SIZE_T v23; // r12
  unsigned __int64 v24; // rsi
  D3DGPU_VIRTUAL_ADDRESS v25; // rax
  int v26; // ebx
  struct VIDMM_MAPPED_VA_RANGE *v27; // r8
  __int64 v28; // rcx
  __int64 *v29; // rdx
  __int64 **v30; // rax
  __int64 v31; // rbx
  HANDLE CurrentProcessId; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  unsigned int v36; // ecx
  unsigned __int64 v37; // rbx
  unsigned __int64 v38; // r12
  struct VIDMM_MAPPED_VA_RANGE *v39; // rax
  unsigned int v40; // [rsp+28h] [rbp-D8h]
  unsigned int v41; // [rsp+28h] [rbp-D8h]
  unsigned __int8 *v42; // [rsp+40h] [rbp-C0h]
  unsigned __int8 v43[8]; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 v44; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v45; // [rsp+60h] [rbp-A0h]
  unsigned int v46; // [rsp+64h] [rbp-9Ch]
  unsigned __int64 v47; // [rsp+68h] [rbp-98h]
  const struct VIDMM_SEGMENT_BASE *v48; // [rsp+70h] [rbp-90h]
  struct VIDMM_MAPPED_VA_RANGE *v49; // [rsp+78h] [rbp-88h]
  unsigned int v50; // [rsp+80h] [rbp-80h] BYREF
  int v51; // [rsp+84h] [rbp-7Ch]
  unsigned __int64 v52; // [rsp+88h] [rbp-78h]
  unsigned __int64 v53; // [rsp+90h] [rbp-70h]
  struct _DXGKARG_BUILDPAGINGBUFFER v54; // [rsp+A0h] [rbp-60h] BYREF
  _DWORD v55[2]; // [rsp+1E0h] [rbp+E0h] BYREF
  unsigned __int64 v56; // [rsp+1E8h] [rbp+E8h]

  v9 = a2;
  v48 = a7;
  v47 = a4;
  memset(&v54, 0, sizeof(v54));
  v11 = *((_DWORD *)this + 1759);
  LODWORD(v12) = *((_DWORD *)this + 10284);
  v45 = v12;
  if ( v11 )
  {
    if ( (unsigned int)v12 >= v11 )
      LODWORD(v12) = v11;
    v45 = v12;
  }
  v13 = a5;
  v43[0] = 0;
  if ( a5 )
  {
    v14 = v47;
    v15 = a8;
    for ( i = (unsigned int)v12; ; i = v12 )
    {
      v51 = 1;
      v17 = v13;
      if ( v13 > i )
        v17 = v12;
      v44 = v15 >> 12;
      v52 = v15 >> 12;
      v53 = v17;
      v18 = v17 >> 12;
      v40 = *((unsigned __int16 *)v48 + 32);
      v46 = v17;
      v50 = v17 >> 12;
      v49 = VIDMM_PAGING_PROCESS::MapScratchAreaVaRange(
              (VIDMM_GLOBAL *)((char *)this + 40512),
              v9,
              v17,
              a3,
              v14,
              v40,
              0LL,
              (const struct _DXGK_ADL *)&v50,
              v43,
              0LL);
      v19 = v49;
      if ( !v49 )
      {
        v37 = v44;
        v38 = v47;
        do
        {
          VIDMM_GLOBAL::FlushPagingBufferInternal(this, v9, 1u, 0LL, 0LL, 0, 0);
          VIDMM_GLOBAL::FlushScratchGpuVaRanges(this, v9);
          v51 = 1;
          v50 = v18;
          v41 = *((unsigned __int16 *)v48 + 32);
          v52 = v37;
          v39 = VIDMM_PAGING_PROCESS::MapScratchAreaVaRange(
                  (VIDMM_GLOBAL *)((char *)this + 40512),
                  v9,
                  v53,
                  a3,
                  v38,
                  v41,
                  0LL,
                  (const struct _DXGK_ADL *)&v50,
                  v43,
                  0LL);
          v49 = v39;
        }
        while ( !v39 );
        v17 = v46;
        v19 = v39;
      }
      v20 = (LARGE_INTEGER *)((char *)v19 + 104);
      if ( VIDMM_GLOBAL::MustFlushTlbOnValidTransition(this, v9) )
        CVirtualAddressAllocator::FlushGpuVaTlb(
          *((CVirtualAddressAllocator **)this + v9 + 5068),
          v9,
          v20->QuadPart,
          *(_QWORD *)(v22 + 112));
      VIDMM_GLOBAL::SetupForBuildPagingBuffer(this, v9, v21, &v54);
      v23 = v47;
      v24 = v17;
      do
      {
        VIDMM_GLOBAL::SetupForBuildPagingBufferIteration(this, v9, a3, &v54);
        v54.Operation = DXGK_OPERATION_VIRTUAL_FILL;
        if ( a3 )
          v25 = *(_QWORD *)(*((_QWORD *)a3 + 46) + 48LL);
        else
          v25 = 0LL;
        v54.UpdateContextAllocation.ContextAllocation = v25;
        v54.Transfer.TransferSize = v53;
        v54.Transfer.Source.SegmentId = a6;
        v54.Transfer.Source.SegmentAddress = *v20;
        v54.Fill.FillSize = v23;
        VIDMM_GLOBAL::RecordVaPagingHistoryVirtualFill(this, &v54, v9, a3);
        v26 = ADAPTER_RENDER::DdiBuildPagingBuffer(*((ADAPTER_RENDER **)this + 2), &v54);
        LODWORD(v44) = v26;
        if ( (byte_14008A201 & 0x10) != 0 )
        {
          v31 = *((_QWORD *)this + v9 + 144);
          CurrentProcessId = PsGetCurrentProcessId();
          LODWORD(v42) = 0;
          McTemplateK0pppxxq_EtwWriteTransfer(v34, v33, v35, CurrentProcessId, a3, v31, 0LL, v24, v42);
          v26 = v44;
        }
        _InterlockedAdd64((volatile signed __int64 *)this + 938, v24);
        v55[1] = 0;
        v44 = 0LL;
        v55[0] = (unsigned __int16)(*((_WORD *)v48 + 31) + 1);
        v56 = a8;
        VIDMM_GLOBAL::CompleteBuildPagingBufferIteration(this, v9, a3, &v54, v26, 0, &v44, v55);
      }
      while ( v26 < 0 );
      v27 = v49;
      v12 = v45;
      v28 = *(_QWORD *)(*((_QWORD *)this + 5040) + 8 * v9) + 584LL;
      v29 = (__int64 *)((char *)v49 + 32);
      v30 = *(__int64 ***)(*(_QWORD *)(*((_QWORD *)this + 5040) + 8 * v9) + 592LL);
      if ( *v30 != (__int64 *)v28 )
        __fastfail(3u);
      *v29 = v28;
      v29[1] = (__int64)v30;
      *v30 = v29;
      *(_QWORD *)(v28 + 8) = v29;
      v36 = v46;
      v13 = a5 - v46;
      v15 = v46 + a8;
      *((_QWORD *)v27 + 6) = *((_QWORD *)a3 + 11);
      a5 = v13;
      v14 = v36 + v47;
      a8 = v15;
      v47 = v14;
      if ( !v13 )
        break;
    }
  }
}
