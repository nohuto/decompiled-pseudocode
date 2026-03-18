/*
 * XREFs of DxgkCompleteTopologyTransition @ 0x1403AD850
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     DxgkMiracastEnforceInactiveMonitorPolicy @ 0x14004CCA0 (DxgkMiracastEnforceInactiveMonitorPolicy.c)
 *     ?ToggleTopologyTransition@DXGGLOBAL@@QEAAEE@Z @ 0x1400622C8 (-ToggleTopologyTransition@DXGGLOBAL@@QEAAEE@Z.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x14033D68C (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 *     DxgkInvalidateMonitorConnections @ 0x1403ADA10 (DxgkInvalidateMonitorConnections.c)
 */

__int64 DxgkCompleteTopologyTransition()
{
  __int64 v0; // rcx
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v1; // rdi
  int v2; // ebx
  DXGGLOBAL *Global; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rcx
  struct DXGGLOBAL *v8; // rax
  unsigned __int8 v9[8]; // [rsp+30h] [rbp-40h] BYREF
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v10; // [rsp+38h] [rbp-38h] BYREF
  int v11; // [rsp+40h] [rbp-30h] BYREF
  __int64 v12; // [rsp+48h] [rbp-28h]
  char v13; // [rsp+50h] [rbp-20h]
  GUID ActivityId; // [rsp+58h] [rbp-18h] BYREF

  v9[0] = 0;
  ActivityId = 0LL;
  EtwActivityIdControl(3u, &ActivityId);
  DisplayScenarioContextEnsureAndAssociate(&ActivityId, 0x26u, 0, &v10, v9);
  v1 = v10;
  v11 = -1;
  v12 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v13 = 1;
    v11 = 2173;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v0, (__int64)&EventProfilerEnter);
  }
  else
  {
    v13 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v11, 2173);
  v2 = 0;
  Global = DXGGLOBAL::GetGlobal();
  if ( DXGGLOBAL::ToggleTopologyTransition(Global, 0) )
  {
    WdLogNewEntry5_WdTrace(v5, v4);
    WdLogGlobalForLineNumber = 8674;
  }
  else
  {
    WdLogNewEntry5_WdTrace(v5, v4);
    WdLogGlobalForLineNumber = 8678;
    *(_DWORD *)&ActivityId.Data2 = 0;
    *(_QWORD *)ActivityId.Data4 = v1;
    ActivityId.Data1 = 0;
    v8 = DXGGLOBAL::GetGlobal();
    v2 = DXGGLOBAL::IterateAdaptersWithCallback(
           (__int64)v8,
           (__int64 (__fastcall *)(_QWORD *, __int64))CompleteTopologyTransitionCallback,
           (__int64)&ActivityId,
           4);
    if ( v2 >= 0 )
      DxgkMiracastEnforceInactiveMonitorPolicy(&ActivityId);
  }
  DxgkInvalidateMonitorConnections(1uLL);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v11);
  if ( v13 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v6, (__int64)&EventProfilerExit);
  if ( v9[0] )
    DisplayScenarioContextDissociate(&v10);
  return (unsigned int)v2;
}
