/*
 * XREFs of ?AcquireNextModeInfo@DXGK_MONITORSOURCEMODESET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORSOURCEMODESET__@@QEBU_D3DKMDT_MONITOR_SOURCE_MODE@@PEAPEBU3@@Z @ 0x1403E6890
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?AcquireExclusive@MonitorResourceLock@@QEAAXXZ @ 0x14003586C (-AcquireExclusive@MonitorResourceLock@@QEAAXXZ.c)
 *     ?AddReference@MONITOR_REF_ACCESSOR@@AEAAXXZ @ 0x1402CC034 (-AddReference@MONITOR_REF_ACCESSOR@@AEAAXXZ.c)
 *     ?Release@MONITOR_REF_ACCESSOR@@QEAAXXZ @ 0x1402CC050 (-Release@MONITOR_REF_ACCESSOR@@QEAAXXZ.c)
 *     ?_GetNextMonitorModeEnumerator@MonitorModes@DxgMonitor@@QEAAJQEBU_D3DKMDT_MONITOR_SOURCE_MODE@@PEAPEBU3@@Z @ 0x1403E6B20 (-_GetNextMonitorModeEnumerator@MonitorModes@DxgMonitor@@QEAAJQEBU_D3DKMDT_MONITOR_SOURCE_MODE@@P.c)
 */

__int64 __fastcall DXGK_MONITORSOURCEMODESET_INTERFACE_V1_IMPL::AcquireNextModeInfo(
        struct D3DKMDT_HMONITORSOURCEMODESET__ *const a1,
        const struct _D3DKMDT_MONITOR_SOURCE_MODE *const a2,
        const struct _D3DKMDT_MONITOR_SOURCE_MODE **a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  _QWORD *v8; // rax
  __int64 v9; // rcx
  __int64 v11; // rcx
  struct _ERESOURCE *v12; // rbx
  unsigned int NextMonitorModeEnumerator; // esi
  __int64 v14; // rcx
  __int64 v15; // rcx
  void *v16; // [rsp+20h] [rbp-30h] BYREF
  struct D3DKMDT_HMONITORSOURCEMODESET__ *v17; // [rsp+28h] [rbp-28h]
  int v18; // [rsp+30h] [rbp-20h] BYREF
  __int64 v19; // [rsp+38h] [rbp-18h]
  char v20; // [rsp+40h] [rbp-10h]
  void *retaddr; // [rsp+58h] [rbp+8h]

  v18 = -1;
  v19 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v20 = 1;
    v18 = 7019;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, (__int64)&EventProfilerEnter);
  }
  else
  {
    v20 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v18, 7019);
  v8 = (_QWORD *)WdLogNewEntry5_WdTrace(v7, v6);
  v8[3] = a2;
  v8[4] = a1;
  v8[5] = a3;
  WdLogGlobalForLineNumber = 494;
  if ( a3 )
  {
    *a3 = 0LL;
    if ( a2 )
    {
      v16 = retaddr;
      v17 = 0LL;
      MONITOR_REF_ACCESSOR::AddReference((MONITOR_REF_ACCESSOR *)&v16);
      MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v16);
      if ( a1 )
      {
        MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v16);
        v17 = a1;
        MONITOR_REF_ACCESSOR::AddReference((MONITOR_REF_ACCESSOR *)&v16);
        v12 = (struct _ERESOURCE *)*((_QWORD *)a1 + 29);
        if ( v12 )
          MonitorResourceLock::AcquireExclusive(v12);
        NextMonitorModeEnumerator = DxgMonitor::MonitorModes::_GetNextMonitorModeEnumerator(
                                      (DxgMonitor::MonitorModes *)v12,
                                      a2,
                                      a3);
        if ( !NextMonitorModeEnumerator && !*a3 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 550;
        }
        if ( v12 )
        {
          ExReleaseResourceLite(v12);
          KeLeaveCriticalRegion();
        }
        MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v16);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v18);
        if ( v20 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v14, (__int64)&EventProfilerExit);
        return NextMonitorModeEnumerator;
      }
      else
      {
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 532;
        MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v16);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v18);
        if ( v20 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v15, (__int64)&EventProfilerExit);
        return 3223192353LL;
      }
    }
    else
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 516;
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v18);
      if ( v20 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v11, (__int64)&EventProfilerExit);
      return 3223192354LL;
    }
  }
  else
  {
    WdLogSingleEntry3(2LL, 0LL, a2, a1);
    WdLogGlobalForLineNumber = 507;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v18);
    if ( v20 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v9, (__int64)&EventProfilerExit);
    }
    return 3221225485LL;
  }
}
