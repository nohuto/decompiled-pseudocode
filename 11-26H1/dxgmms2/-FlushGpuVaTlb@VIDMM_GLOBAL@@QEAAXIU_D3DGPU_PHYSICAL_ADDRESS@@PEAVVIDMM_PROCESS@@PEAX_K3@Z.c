/*
 * XREFs of ?FlushGpuVaTlb@VIDMM_GLOBAL@@QEAAXIU_D3DGPU_PHYSICAL_ADDRESS@@PEAVVIDMM_PROCESS@@PEAX_K3@Z @ 0x1400E6514
 * Callers:
 *     ?FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z @ 0x140038F20 (-FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z.c)
 *     ?MakeOneVirtualAddressRangeNotResident@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1400E6030 (-MakeOneVirtualAddressRangeNotResident@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x1400294D8 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??2@YAPEAX_KPEAVDXGK_LOG@@II@Z @ 0x1400302B0 (--2@YAPEAX_KPEAVDXGK_LOG@@II@Z.c)
 *     ?DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x140037958 (-DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x140037998 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140038394 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     memset @ 0x14005BBC0 (memset.c)
 *     ?WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1400D1928 (-WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@QEAA_NKPEAUVIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@JHPEA_KPEAX@Z @ 0x1400D6590 (-CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@QEAA_NKPEAUVIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BU.c)
 *     ?SetupForBuildPagingBufferIteration@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1400D7AC4 (-SetupForBuildPagingBufferIteration@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUI.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1400E78B8 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     ?SuspendResumeProcessGpuMmuContexts@VIDMM_PROCESS@@QEAAXI_N@Z @ 0x14011379C (-SuspendResumeProcessGpuMmuContexts@VIDMM_PROCESS@@QEAAXI_N@Z.c)
 */

void __fastcall VIDMM_GLOBAL::FlushGpuVaTlb(
        VIDMM_GLOBAL *this,
        unsigned int a2,
        struct _D3DGPU_PHYSICAL_ADDRESS *a3,
        struct VIDMM_PROCESS *a4,
        void *a5,
        unsigned __int64 a6,
        unsigned __int64 a7)
{
  __int64 v7; // r14
  struct _D3DGPU_PHYSICAL_ADDRESS *v9; // rbx
  __int64 v11; // rdx
  __int64 v12; // rax
  void *v13; // rax
  LARGE_INTEGER v14; // r15
  struct _D3DGPU_PHYSICAL_ADDRESS v15; // xmm0
  char *v16; // rax
  int v17; // ebx
  __int64 v18; // r8
  bool v19; // zf
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // r8
  int v23; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v24; // [rsp+48h] [rbp-B8h]
  char v25; // [rsp+50h] [rbp-B0h]
  struct _DXGKARG_BUILDPAGINGBUFFER v26; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int64 v27; // [rsp+1E0h] [rbp+E0h] BYREF
  struct _D3DGPU_PHYSICAL_ADDRESS *v28; // [rsp+1F0h] [rbp+F0h]

  v28 = a3;
  v7 = a2;
  v9 = a3;
  if ( !*((_BYTE *)this + 7040) && !*((_BYTE *)this + 41068) )
  {
    memset(&v26, 0, sizeof(v26));
    v11 = *(_QWORD *)(*((_QWORD *)this + 2) + 744LL);
    v12 = *(_QWORD *)(*(_QWORD *)(v11 + 336) + 8 * v7);
    if ( v12 )
      v13 = *(void **)(v12 + 48);
    else
      v13 = *(void **)(*(_QWORD *)(*(_QWORD *)(v11 + (*((_BYTE *)this + 41070) != 0 ? 0x18 : 0) + 328) + 8 * v7) + 64LL);
    v14.QuadPart = a7;
    v26.hSystemContext = v13;
    v26.MultipassOffset = 0;
    do
    {
      VIDMM_GLOBAL::SetupForBuildPagingBufferIteration(this, v7, 0LL, &v26);
      v15 = *v9;
      *(_OWORD *)&v26.NotifyResidency.PhysicalAddress.SegmentOffset = __PAIR128__(a6, (unsigned __int64)a5);
      v26.Operation = DXGK_OPERATION_FLUSH_TLB;
      v26.FlushTlb.RootPageTableAddress = v15;
      v26.Transfer.Source.SegmentAddress = v14;
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx((char *)this + 41144, 0LL);
      *((_QWORD *)this + 5144) = KeGetCurrentThread();
      v16 = operator new(64, (VIDMM_GLOBAL *)((char *)this + 41168), 5u, 0);
      if ( v16 )
      {
        *(_OWORD *)v16 = *(_OWORD *)&v26.Transfer.hAllocation;
        *((_OWORD *)v16 + 1) = *(_OWORD *)&v26.NotifyResidency.PhysicalAddress.SegmentOffset;
        *((_QWORD *)v16 + 4) = v26.Transfer.Source.SegmentAddress.QuadPart;
        *((_DWORD *)v16 + 14) = v7;
        *((_QWORD *)v16 + 5) = *((_QWORD *)a4 + 2);
        *((_QWORD *)v16 + 6) = *((_QWORD *)a4 + 9);
      }
      *((_QWORD *)this + 5144) = 0LL;
      ExReleasePushLockExclusiveEx((char *)this + 41144, 0LL);
      KeLeaveCriticalRegion();
      v17 = ADAPTER_RENDER::DdiBuildPagingBuffer(*((ADAPTER_RENDER **)this + 2), &v26);
      v27 = 0LL;
      VIDMM_GLOBAL::CompleteBuildPagingBufferIteration(this, v7, 0LL, &v26, v17, 0, &v27, 0LL);
      v19 = v17 == -1071775743;
      v9 = v28;
    }
    while ( v19 );
    v20 = **(unsigned int **)(*(_QWORD *)(*((_QWORD *)this + 5040) + 8 * v7) + 560LL);
    if ( (v20 & 0x20) != 0 && (*((_DWORD *)a4 + 34) & 2) == 0 )
    {
      if ( (byte_14008A201 & 1) != 0 )
        McTemplateK0q_EtwWriteTransfer(v20, &EventPerformanceWarning, v18, 23);
      v23 = -1;
      v24 = 0LL;
      if ( (qword_14008A010 & 2) != 0 )
      {
        v25 = 1;
        v23 = 8010;
        if ( (byte_14008A202 & 1) != 0 )
          McTemplateK0q_EtwWriteTransfer(v20, &EventProfilerEnter, v18, 8010);
      }
      else
      {
        v25 = 0;
      }
      DXGETWPROFILER_BASE::PushProfilerEntry();
      VIDMM_GLOBAL::FlushPagingBufferInternal(this, v7, 0, 0LL, 0LL, 0, 0);
      VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(this, v7);
      if ( (*((_DWORD *)a4 + 34) & 4) == 0 )
      {
        VIDMM_PROCESS::SuspendResumeProcessGpuMmuContexts(a4, *(_DWORD *)(*((_QWORD *)this + 3) + 240LL), 1);
        VIDMM_PROCESS::SuspendResumeProcessGpuMmuContexts(a4, *(_DWORD *)(*((_QWORD *)this + 3) + 240LL), 0);
      }
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v23);
      if ( v25 )
      {
        if ( (byte_14008A202 & 1) != 0 )
          McTemplateK0q_EtwWriteTransfer(v21, &EventProfilerExit, v22, v23);
      }
    }
  }
}
