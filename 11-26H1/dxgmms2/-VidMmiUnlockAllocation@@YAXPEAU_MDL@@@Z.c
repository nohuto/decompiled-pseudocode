/*
 * XREFs of ?VidMmiUnlockAllocation@@YAXPEAU_MDL@@@Z @ 0x14010BCAC
 * Callers:
 *     ?UnlockHeapAllocation@VIDMM_PROCESS_HEAP@@UEAAXPEAUVIDMM_HEAP_ALLOC@@_K1_N@Z @ 0x1400BC010 (-UnlockHeapAllocation@VIDMM_PROCESS_HEAP@@UEAAXPEAUVIDMM_HEAP_ALLOC@@_K1_N@Z.c)
 *     ?UnlockAllocationRange@VIDMM_APERTURE_SEGMENT@@UEAAXPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@_N1@Z @ 0x1400BDD00 (-UnlockAllocationRange@VIDMM_APERTURE_SEGMENT@@UEAAXPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@_N1@Z.c)
 *     ?DoDeferredUnlock@VIDMM_GLOBAL@@QEAAXXZ @ 0x14010B81C (-DoDeferredUnlock@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?VidMmiReleaseSystemCommitMdl@@YAXPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x14010BC7C (-VidMmiReleaseSystemCommitMdl@@YAXPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x1400294D8 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x140037998 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140038394 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 */

void __fastcall VidMmiUnlockAllocation(struct _MDL *P, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  __int64 v5; // r8
  int v6; // [rsp+20h] [rbp-28h] BYREF
  __int64 v7; // [rsp+28h] [rbp-20h]
  char v8; // [rsp+30h] [rbp-18h]

  v6 = -1;
  v7 = 0LL;
  if ( (qword_14008A010 & 2) != 0 )
  {
    v8 = 1;
    v6 = 8001;
    if ( (byte_14008A202 & 1) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)P, &EventProfilerEnter, a3, 8001);
  }
  else
  {
    v8 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry();
  MmUnlockPages(P);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v6);
  if ( v8 && (byte_14008A202 & 1) != 0 )
    McTemplateK0q_EtwWriteTransfer(v4, &EventProfilerExit, v5, v6);
  ExFreePoolWithTag(P, 0);
}
