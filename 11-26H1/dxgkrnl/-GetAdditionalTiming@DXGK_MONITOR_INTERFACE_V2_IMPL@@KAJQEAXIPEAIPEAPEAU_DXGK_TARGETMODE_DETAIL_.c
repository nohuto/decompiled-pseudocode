/*
 * XREFs of ?GetAdditionalTiming@DXGK_MONITOR_INTERFACE_V2_IMPL@@KAJQEAXIPEAIPEAPEAU_DXGK_TARGETMODE_DETAIL_TIMING@@@Z @ 0x14038CC00
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x140031B50 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     DpiGetDxgAdapter @ 0x1400348A0 (DpiGetDxgAdapter.c)
 *     ?AcquireExclusive@MonitorResourceLock@@QEAAXXZ @ 0x14003586C (-AcquireExclusive@MonitorResourceLock@@QEAAXXZ.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEAEAVMONITOR_REF_ACCESSOR@@@Z @ 0x1402CBB30 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEAEAVMONITOR_REF_ACCESSOR@@@Z.c)
 *     ?AddReference@MONITOR_REF_ACCESSOR@@AEAAXXZ @ 0x1402CC034 (-AddReference@MONITOR_REF_ACCESSOR@@AEAAXXZ.c)
 *     ?Release@MONITOR_REF_ACCESSOR@@QEAAXXZ @ 0x1402CC050 (-Release@MONITOR_REF_ACCESSOR@@QEAAXXZ.c)
 *     ?_GetAdditionalTiming@MonitorModes@DxgMonitor@@QEAAJPEAIPEAPEAU_DXGK_TARGETMODE_DETAIL_TIMING@@@Z @ 0x14038CFB8 (-_GetAdditionalTiming@MonitorModes@DxgMonitor@@QEAAJPEAIPEAPEAU_DXGK_TARGETMODE_DETAIL_TIMING@@@.c)
 */

__int64 __fastcall DXGK_MONITOR_INTERFACE_V2_IMPL::GetAdditionalTiming(
        __int64 a1,
        unsigned int a2,
        unsigned int *a3,
        struct _DXGK_TARGETMODE_DETAIL_TIMING **a4)
{
  __int64 v4; // r12
  __int64 v8; // rdx
  __int64 v9; // rcx
  _QWORD *v10; // rax
  DXGADAPTER *DxgAdapter; // rax
  DXGADAPTER *v12; // rdi
  __int64 v13; // rax
  MONITOR_MGR *v14; // rbx
  int MonitorInstance; // eax
  unsigned int AdditionalTiming; // edi
  __int64 v17; // rbx
  struct _ERESOURCE *v18; // rbx
  __int64 v19; // rcx
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rcx
  void *v24; // [rsp+20h] [rbp-30h] BYREF
  __int64 v25; // [rsp+28h] [rbp-28h]
  int v26; // [rsp+30h] [rbp-20h] BYREF
  __int64 v27; // [rsp+38h] [rbp-18h]
  char v28; // [rsp+40h] [rbp-10h]
  void *retaddr; // [rsp+78h] [rbp+28h]

  v4 = a2;
  v26 = -1;
  v27 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v28 = 1;
    v26 = 7059;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter);
  }
  else
  {
    v28 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v26, 7059);
  v10 = (_QWORD *)WdLogNewEntry5_WdTrace(v9, v8);
  v10[3] = a1;
  v10[4] = v4;
  v10[5] = a3;
  v10[6] = a4;
  WdLogGlobalForLineNumber = 2137;
  if ( !a3 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 2145;
    goto LABEL_24;
  }
  if ( !a4 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 2152;
LABEL_24:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v26);
    if ( v28 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v21, (__int64)&EventProfilerExit);
    return 3221225485LL;
  }
  DxgAdapter = (DXGADAPTER *)DpiGetDxgAdapter(a1);
  v12 = DxgAdapter;
  if ( DxgAdapter )
  {
    if ( DXGADAPTER::IsCoreResourceSharedOwner(DxgAdapter) )
    {
      v13 = *((_QWORD *)v12 + 395);
      if ( v13 )
      {
        v14 = *(MONITOR_MGR **)(v13 + 112);
        if ( v14 )
        {
          v24 = retaddr;
          v25 = 0LL;
          MONITOR_REF_ACCESSOR::AddReference((MONITOR_REF_ACCESSOR *)&v24);
          MonitorInstance = MONITOR_MGR::_GetMonitorInstance(v14, v4, 0, (struct MONITOR_REF_ACCESSOR *)&v24);
          AdditionalTiming = MonitorInstance;
          if ( MonitorInstance == -1073741275 )
          {
            WdLogSingleEntry2(7LL, v4, v14);
            WdLogGlobalForLineNumber = 2214;
            MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v24);
            DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v26);
            if ( v28 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
              McTemplateK0q_EtwWriteTransfer(v23, (__int64)&EventProfilerExit);
            return 3221226021LL;
          }
          else
          {
            if ( MonitorInstance < 0 )
            {
              WdLogSingleEntry2(2LL, v4, v14);
              WdLogGlobalForLineNumber = 2220;
            }
            else
            {
              v17 = v25;
              if ( !v25 )
              {
                WdLogSingleEntry0(1LL);
                WdLogGlobalForLineNumber = 2225;
              }
              v18 = *(struct _ERESOURCE **)(v17 + 232);
              if ( v18 )
                MonitorResourceLock::AcquireExclusive(v18);
              AdditionalTiming = DxgMonitor::MonitorModes::_GetAdditionalTiming((DxgMonitor::MonitorModes *)v18, a3, a4);
              if ( v18 )
              {
                ExReleaseResourceLite(v18);
                KeLeaveCriticalRegion();
              }
            }
            MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v24);
            DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v26);
            if ( v28 )
            {
              if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
                McTemplateK0q_EtwWriteTransfer(v19, (__int64)&EventProfilerExit);
            }
            return AdditionalTiming;
          }
        }
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 2200;
      }
      else
      {
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 2187;
      }
    }
    else
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 2176;
    }
    goto LABEL_24;
  }
  WdLogSingleEntry1(2LL);
  WdLogGlobalForLineNumber = 2165;
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v26);
  if ( v28 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v22, (__int64)&EventProfilerExit);
  return 3223191554LL;
}
