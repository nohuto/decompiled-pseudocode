/*
 * XREFs of ?ReleaseAdditionalTiming@DXGK_MONITOR_INTERFACE_V2_IMPL@@KAJQEAXIPEBU_DXGK_TARGETMODE_DETAIL_TIMING@@@Z @ 0x140272ED0
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x140031B50 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     DpiGetDxgAdapter @ 0x1400348A0 (DpiGetDxgAdapter.c)
 *     ?AcquireExclusive@MonitorResourceLock@@QEAAXXZ @ 0x14003586C (-AcquireExclusive@MonitorResourceLock@@QEAAXXZ.c)
 *     ??0MONITOR_REF_ACCESSOR@@QEAA@PEAVDXGMONITOR@@@Z @ 0x14003CDDC (--0MONITOR_REF_ACCESSOR@@QEAA@PEAVDXGMONITOR@@@Z.c)
 *     ??1?$RESOURCE_LOCK@VMonitorModes@DxgMonitor@@@@QEAA@XZ @ 0x140059934 (--1-$RESOURCE_LOCK@VMonitorModes@DxgMonitor@@@@QEAA@XZ.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEAEAVMONITOR_REF_ACCESSOR@@@Z @ 0x1402CBB30 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEAEAVMONITOR_REF_ACCESSOR@@@Z.c)
 *     ?Release@MONITOR_REF_ACCESSOR@@QEAAXXZ @ 0x1402CC050 (-Release@MONITOR_REF_ACCESSOR@@QEAAXXZ.c)
 */

__int64 __fastcall DXGK_MONITOR_INTERFACE_V2_IMPL::ReleaseAdditionalTiming(
        __int64 a1,
        unsigned int a2,
        const struct _DXGK_TARGETMODE_DETAIL_TIMING *a3)
{
  __int64 v3; // r14
  __int64 v6; // rdx
  __int64 v7; // rcx
  _QWORD *v8; // rax
  DXGADAPTER *DxgAdapter; // rax
  DXGADAPTER *v10; // rdi
  __int64 v11; // rcx
  __int64 v13; // rax
  MONITOR_MGR *v14; // rbx
  __int64 v15; // rcx
  int MonitorInstance; // edi
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rbx
  __int64 v20; // rbx
  int v21; // eax
  __int64 v22; // rcx
  _BYTE v23[8]; // [rsp+20h] [rbp-30h] BYREF
  __int64 v24; // [rsp+28h] [rbp-28h]
  int v25; // [rsp+30h] [rbp-20h] BYREF
  __int64 v26; // [rsp+38h] [rbp-18h]
  char v27; // [rsp+40h] [rbp-10h]
  struct _ERESOURCE *v28; // [rsp+70h] [rbp+20h] BYREF

  v3 = a2;
  v25 = -1;
  v26 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v27 = 1;
    v25 = 7060;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter);
  }
  else
  {
    v27 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v25, 7060);
  v8 = (_QWORD *)WdLogNewEntry5_WdTrace(v7, v6);
  v8[3] = a3;
  v8[4] = a1;
  v8[5] = v3;
  WdLogGlobalForLineNumber = 2272;
  if ( !a3 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 2280;
LABEL_18:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v25);
    if ( v27 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v15, (__int64)&EventProfilerExit);
    }
    return 3221225485LL;
  }
  DxgAdapter = (DXGADAPTER *)DpiGetDxgAdapter(a1);
  v10 = DxgAdapter;
  if ( DxgAdapter )
  {
    if ( !DXGADAPTER::IsCoreResourceSharedOwner(DxgAdapter) )
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 2304;
      goto LABEL_18;
    }
    v13 = *((_QWORD *)v10 + 395);
    if ( !v13 )
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 2315;
      goto LABEL_18;
    }
    v14 = *(MONITOR_MGR **)(v13 + 112);
    if ( !v14 )
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 2328;
      goto LABEL_18;
    }
    MONITOR_REF_ACCESSOR::MONITOR_REF_ACCESSOR((MONITOR_REF_ACCESSOR *)v23, 0LL);
    MonitorInstance = MONITOR_MGR::_GetMonitorInstance(v14, v3, 0, (struct MONITOR_REF_ACCESSOR *)v23);
    if ( MonitorInstance == -1073741275 )
    {
      WdLogSingleEntry2(7LL, v3, v14);
      WdLogGlobalForLineNumber = 2342;
      MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)v23);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v25);
      if ( v27 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v17, (__int64)&EventProfilerExit);
      return 3221226021LL;
    }
    else if ( MonitorInstance >= 0 )
    {
      v19 = v24;
      if ( !v24 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 2353;
      }
      v20 = *(_QWORD *)(v19 + 232);
      v28 = (struct _ERESOURCE *)v20;
      if ( v20 )
        MonitorResourceLock::AcquireExclusive((PERESOURCE)v20);
      v21 = *(_DWORD *)(v20 + 224);
      if ( v21 )
      {
        *(_DWORD *)(v20 + 224) = v21 - 1;
      }
      else
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 1119;
      }
      RESOURCE_LOCK<DxgMonitor::MonitorModes>::~RESOURCE_LOCK<DxgMonitor::MonitorModes>(&v28);
      MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)v23);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v25);
      if ( v27 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v22, (__int64)&EventProfilerExit);
      return 0LL;
    }
    else
    {
      WdLogSingleEntry2(2LL, v3, v14);
      WdLogGlobalForLineNumber = 2348;
      MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)v23);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v25);
      if ( v27 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v18, (__int64)&EventProfilerExit);
      return (unsigned int)MonitorInstance;
    }
  }
  else
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 2293;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v25);
    if ( v27 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v11, (__int64)&EventProfilerExit);
    return 3223191554LL;
  }
}
