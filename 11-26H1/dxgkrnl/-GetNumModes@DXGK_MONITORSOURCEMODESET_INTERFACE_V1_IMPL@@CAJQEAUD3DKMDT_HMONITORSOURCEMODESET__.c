/*
 * XREFs of ?GetNumModes@DXGK_MONITORSOURCEMODESET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORSOURCEMODESET__@@QEA_K@Z @ 0x140272CC0
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??0?$RESOURCE_LOCK@VMonitorDescriptorState@DxgMonitor@@@@QEAA@PEAVMonitorDescriptorState@DxgMonitor@@_N@Z @ 0x140035600 (--0-$RESOURCE_LOCK@VMonitorDescriptorState@DxgMonitor@@@@QEAA@PEAVMonitorDescriptorState@DxgMoni.c)
 *     ??0MONITOR_REF_ACCESSOR@@QEAA@PEAVDXGMONITOR@@@Z @ 0x14003CDDC (--0MONITOR_REF_ACCESSOR@@QEAA@PEAVDXGMONITOR@@@Z.c)
 *     ?_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@AEAVMONITOR_REF_ACCESSOR@@@Z @ 0x140041718 (-_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@AEAVMONITOR_REF_ACCESSOR@@@Z.c)
 *     ??1?$RESOURCE_LOCK@VMonitorModes@DxgMonitor@@@@QEAA@XZ @ 0x140059934 (--1-$RESOURCE_LOCK@VMonitorModes@DxgMonitor@@@@QEAA@XZ.c)
 *     ?Release@MONITOR_REF_ACCESSOR@@QEAAXXZ @ 0x1402CC050 (-Release@MONITOR_REF_ACCESSOR@@QEAAXXZ.c)
 */

__int64 __fastcall DXGK_MONITORSOURCEMODESET_INTERFACE_V1_IMPL::GetNumModes(
        struct D3DKMDT_HMONITORSOURCEMODESET__ *const a1,
        unsigned __int64 *const a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rcx
  int MonitorFromHandle; // eax
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // rcx
  _BYTE v13[8]; // [rsp+20h] [rbp-30h] BYREF
  __int64 v14; // [rsp+28h] [rbp-28h]
  int v15; // [rsp+30h] [rbp-20h] BYREF
  __int64 v16; // [rsp+38h] [rbp-18h]
  char v17; // [rsp+40h] [rbp-10h]
  struct _ERESOURCE *v18; // [rsp+60h] [rbp+10h] BYREF

  v15 = -1;
  v16 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v17 = 1;
    v15 = 7016;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, (__int64)&EventProfilerEnter);
  }
  else
  {
    v17 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v15, 7016);
  v6 = WdLogNewEntry5_WdTrace(v5, v4);
  *(_QWORD *)(v6 + 24) = a1;
  *(_QWORD *)(v6 + 32) = a2;
  WdLogGlobalForLineNumber = 223;
  if ( a2 )
  {
    *a2 = 0LL;
    MONITOR_REF_ACCESSOR::MONITOR_REF_ACCESSOR((MONITOR_REF_ACCESSOR *)v13, 0LL);
    MonitorFromHandle = MONITOR_MGR::_GetMonitorFromHandle(
                          (struct HDXGMONITOR__ *)a1,
                          (struct MONITOR_REF_ACCESSOR *)v13);
    if ( MonitorFromHandle == -1073741816 )
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 253;
      MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)v13);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v15);
      if ( v17 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v10, (__int64)&EventProfilerExit);
      return 3223192353LL;
    }
    else
    {
      if ( MonitorFromHandle < 0 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 264;
      }
      v11 = v14;
      if ( !v14 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 265;
      }
      RESOURCE_LOCK<DxgMonitor::MonitorDescriptorState>::RESOURCE_LOCK<DxgMonitor::MonitorDescriptorState>(
        &v18,
        *(struct _ERESOURCE **)(v11 + 232),
        0);
      *a2 = LODWORD(v18[1].OwnerTable);
      RESOURCE_LOCK<DxgMonitor::MonitorModes>::~RESOURCE_LOCK<DxgMonitor::MonitorModes>(&v18);
      MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)v13);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v15);
      if ( v17 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v12, (__int64)&EventProfilerExit);
      return 0LL;
    }
  }
  else
  {
    WdLogSingleEntry2(2LL, 0LL, a1);
    WdLogGlobalForLineNumber = 235;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v15);
    if ( v17 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v7, (__int64)&EventProfilerExit);
    }
    return 3221225485LL;
  }
}
