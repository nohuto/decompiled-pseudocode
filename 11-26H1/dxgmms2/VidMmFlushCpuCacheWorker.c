/*
 * XREFs of VidMmFlushCpuCacheWorker @ 0x1400A2FFC
 * Callers:
 *     ?InvalidateCache@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS@@PEAUVIDMM_MULTI_GLOBAL_ALLOC@@PEAUVIDMM_MULTI_ALLOC@@_K3@Z @ 0x14009F738 (-InvalidateCache@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS@@PEAUVIDMM_MULTI_GLOBAL_ALLOC@@PEAUVIDMM_M.c)
 *     ?VidMmFlushAllocationRangeFromProcessorCache@@YAXPEAUVIDMM_GLOBAL_ALLOC@@_K1@Z @ 0x1400A2F6C (-VidMmFlushAllocationRangeFromProcessorCache@@YAXPEAUVIDMM_GLOBAL_ALLOC@@_K1@Z.c)
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x1400294D8 (McTemplateK0q_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x140037998 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140038394 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 */

__int64 __fastcall VidMmFlushCpuCacheWorker(__int64 BaseAddress, unsigned __int64 Length, __int64 a3)
{
  char *v4; // r14
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // r8
  ULONG v9; // ebx
  __int64 v10; // rcx
  __int64 v11; // r8
  int v12; // [rsp+50h] [rbp-38h] BYREF
  __int64 v13; // [rsp+58h] [rbp-30h]
  char v14; // [rsp+60h] [rbp-28h]

  v4 = (char *)BaseAddress;
  v12 = -1;
  v13 = 0LL;
  if ( (qword_14008A010 & 2) != 0 )
  {
    v14 = 1;
    v12 = 8008;
    if ( (byte_14008A202 & 1) != 0 )
      McTemplateK0q_EtwWriteTransfer(BaseAddress, &EventProfilerEnter, a3, 8008);
  }
  else
  {
    v14 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry();
  if ( v4 )
  {
    if ( Length < 0x80000000 )
    {
      while ( Length )
      {
        v9 = -1;
        if ( Length < 0xFFFFFFFF )
          v9 = Length;
        KeInvalidateRangeAllCaches(v4, v9);
        Length -= v9;
        v4 += v9;
      }
    }
    else
    {
      KeInvalidateAllCaches();
    }
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v12);
    if ( v14 && (byte_14008A202 & 1) != 0 )
      McTemplateK0q_EtwWriteTransfer(v10, &EventProfilerExit, v11, v12);
    return 0LL;
  }
  else
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 17896;
    DxgkLogInternalTriageEvent(v5, 0x40000LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v12);
    if ( v14 )
    {
      if ( (byte_14008A202 & 1) != 0 )
        McTemplateK0q_EtwWriteTransfer(v6, &EventProfilerExit, v7, v12);
    }
    return 3221225485LL;
  }
}
