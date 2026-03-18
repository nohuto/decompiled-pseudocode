/*
 * XREFs of ?GetMonitorDescriptor@DXGK_MONITOR_INTERFACE_V3_IMPL@@KAJQEAXIPEAU_DXGK_MONITOR_DESCRIPTOR@@@Z @ 0x140272160
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x140031B50 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     DpiGetDxgAdapter @ 0x1400348A0 (DpiGetDxgAdapter.c)
 *     ??0?$RESOURCE_LOCK@VMonitorDescriptorState@DxgMonitor@@@@QEAA@PEAVMonitorDescriptorState@DxgMonitor@@_N@Z @ 0x140035600 (--0-$RESOURCE_LOCK@VMonitorDescriptorState@DxgMonitor@@@@QEAA@PEAVMonitorDescriptorState@DxgMoni.c)
 *     ??0MONITOR_REF_ACCESSOR@@QEAA@PEAVDXGMONITOR@@@Z @ 0x14003CDDC (--0MONITOR_REF_ACCESSOR@@QEAA@PEAVDXGMONITOR@@@Z.c)
 *     ??1?$RESOURCE_LOCK@VMonitorModes@DxgMonitor@@@@QEAA@XZ @ 0x140059934 (--1-$RESOURCE_LOCK@VMonitorModes@DxgMonitor@@@@QEAA@XZ.c)
 *     ?GetMonitorDescriptor@MonitorDescriptorState@DxgMonitor@@QEBAJPEAU_DXGK_MONITOR_DESCRIPTOR@@@Z @ 0x140279CC4 (-GetMonitorDescriptor@MonitorDescriptorState@DxgMonitor@@QEBAJPEAU_DXGK_MONITOR_DESCRIPTOR@@@Z.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEAEAVMONITOR_REF_ACCESSOR@@@Z @ 0x1402CBB30 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEAEAVMONITOR_REF_ACCESSOR@@@Z.c)
 *     ?Release@MONITOR_REF_ACCESSOR@@QEAAXXZ @ 0x1402CC050 (-Release@MONITOR_REF_ACCESSOR@@QEAAXXZ.c)
 */

__int64 __fastcall DXGK_MONITOR_INTERFACE_V3_IMPL::GetMonitorDescriptor(
        __int64 a1,
        unsigned int a2,
        struct _DXGK_MONITOR_DESCRIPTOR *a3)
{
  __int64 v4; // rsi
  __int64 v6; // rcx
  DXGADAPTER *DxgAdapter; // rax
  DXGADAPTER *v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // rdx
  int MonitorInstance; // eax
  unsigned int MonitorDescriptor; // ebx
  __int64 v14; // rcx
  __int64 v15; // rcx
  _BYTE v16[8]; // [rsp+20h] [rbp-30h] BYREF
  __int64 v17; // [rsp+28h] [rbp-28h]
  int v18; // [rsp+30h] [rbp-20h] BYREF
  __int64 v19; // [rsp+38h] [rbp-18h]
  char v20; // [rsp+40h] [rbp-10h]
  DxgMonitor::MonitorDescriptorState *v21; // [rsp+80h] [rbp+30h] BYREF

  v4 = a2;
  v18 = -1;
  v19 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v20 = 1;
    v18 = 7064;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter);
  }
  else
  {
    v20 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v18, 7064);
  if ( !a3 )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 2394;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v18);
    if ( v20 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v6, (__int64)&EventProfilerExit);
    }
    return 3221225485LL;
  }
  DxgAdapter = (DXGADAPTER *)DpiGetDxgAdapter(a1);
  v9 = DxgAdapter;
  if ( !DxgAdapter )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 2401;
    goto LABEL_16;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(DxgAdapter) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2404;
  }
  if ( !*((_QWORD *)v9 + 395) )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 2411;
LABEL_16:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v18);
    if ( v20 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v10, (__int64)&EventProfilerExit);
    return 3223191554LL;
  }
  MONITOR_REF_ACCESSOR::MONITOR_REF_ACCESSOR((MONITOR_REF_ACCESSOR *)v16, 0LL);
  if ( *((_QWORD *)v9 + 395) == v11 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2416;
  }
  if ( !*(_QWORD *)(*((_QWORD *)v9 + 395) + 112LL) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2417;
  }
  MonitorInstance = MONITOR_MGR::_GetMonitorInstance(
                      *(MONITOR_MGR **)(*((_QWORD *)v9 + 395) + 112LL),
                      v4,
                      1u,
                      (struct MONITOR_REF_ACCESSOR *)v16);
  MonitorDescriptor = MonitorInstance;
  if ( MonitorInstance == -1073741275 )
  {
    WdLogSingleEntry1(3LL);
    WdLogGlobalForLineNumber = 2421;
    MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)v16);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v18);
    if ( v20 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v14, (__int64)&EventProfilerExit);
    return 3223192376LL;
  }
  else
  {
    if ( MonitorInstance >= 0 )
    {
      RESOURCE_LOCK<DxgMonitor::MonitorDescriptorState>::RESOURCE_LOCK<DxgMonitor::MonitorDescriptorState>(
        (struct _ERESOURCE **)&v21,
        *(struct _ERESOURCE **)(v17 + 216),
        0);
      MonitorDescriptor = DxgMonitor::MonitorDescriptorState::GetMonitorDescriptor(v21, a3);
      RESOURCE_LOCK<DxgMonitor::MonitorModes>::~RESOURCE_LOCK<DxgMonitor::MonitorModes>((struct _ERESOURCE **)&v21);
    }
    else
    {
      WdLogSingleEntry2(2LL, v4, MonitorInstance);
      WdLogGlobalForLineNumber = 2426;
    }
    MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)v16);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v18);
    if ( v20 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v15, (__int64)&EventProfilerExit);
    return MonitorDescriptor;
  }
}
