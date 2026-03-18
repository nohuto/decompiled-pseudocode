/*
 * XREFs of DxgkInvalidateMonitorConnections @ 0x1403ADA10
 * Callers:
 *     ?HandleRapidHPDAction@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1401CF2D8 (-HandleRapidHPDAction@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IPEAU_DXGK_DISPLAY_SCEN.c)
 *     DxgkHandleForceProjectionMonitor @ 0x1401CFE80 (DxgkHandleForceProjectionMonitor.c)
 *     ?HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1403ABFD4 (-HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@.c)
 *     DxgkCompleteTopologyTransition @ 0x1403AD850 (DxgkCompleteTopologyTransition.c)
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     ?DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z @ 0x14031B9EC (-DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z.c)
 *     ?DisplayConfigHandleMonitorInvalidation@@YAJ_KPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1403ADC38 (-DisplayConfigHandleMonitorInvalidation@@YAJ_KPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@PEAU_DXGK_DISP.c)
 */

__int64 __fastcall DxgkInvalidateMonitorConnections(unsigned __int64 a1)
{
  __int64 v2; // rcx
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v3; // rdi
  unsigned int v4; // edi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned int CurrentProcessSessionId; // eax
  __int64 v10; // rcx
  unsigned __int8 v12[8]; // [rsp+50h] [rbp-49h] BYREF
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v13; // [rsp+58h] [rbp-41h] BYREF
  GUID ActivityId; // [rsp+60h] [rbp-39h] BYREF
  char v15; // [rsp+70h] [rbp-29h]
  _OWORD v16[6]; // [rsp+80h] [rbp-19h] BYREF

  v12[0] = 0;
  ActivityId = 0LL;
  EtwActivityIdControl(3u, &ActivityId);
  DisplayScenarioContextEnsureAndAssociate(&ActivityId, 0x25u, 0, &v13, v12);
  v3 = v13;
  ActivityId.Data1 = -1;
  *(_QWORD *)ActivityId.Data4 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v15 = 1;
    ActivityId.Data1 = 2165;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v2, (__int64)&EventProfilerEnter);
  }
  else
  {
    v15 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&ActivityId, 2165);
  WdLogSingleEntry1(4LL);
  WdLogGlobalForLineNumber = 2909;
  if ( (a1 & 3) == 0 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2911;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"((i_Parameter & INVALIDATE_MONITOR_CONNECTIONS_EMERGENCY_ONLY) != 0) || ((i_Parameter & INVALIDATE_MONITO"
                "R_CONNECTIONS_PATH_PERSIST) != 0)",
      2911LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v4 = DisplayConfigHandleMonitorInvalidation(a1, 0LL, v3);
  memset(v16, 0, sizeof(v16));
  LODWORD(v16[3]) |= 2u;
  memset(&v16[1], 0, 28);
  v16[0] = 0x6000000002uLL;
  *((_QWORD *)&v16[3] + 1) = a1;
  LODWORD(v16[5]) = v4;
  CurrentProcessSessionId = PsGetCurrentProcessSessionId(v6, v5, v7, v8);
  DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v16, CurrentProcessSessionId);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&ActivityId);
  if ( v15 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v10, (__int64)&EventProfilerExit);
  if ( v12[0] )
    DisplayScenarioContextDissociate(&v13);
  return v4;
}
