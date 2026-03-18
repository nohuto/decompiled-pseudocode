/*
 * XREFs of ?RestoreStateSettingEnabled@DesktopRecalcSettings@@YA_NXZ @ 0x140028B68
 * Callers:
 *     ?ShouldStoreAfterProcessing@CRecalcState@@QEBA_NPEBUtagWND@@@Z @ 0x140027C00 (-ShouldStoreAfterProcessing@CRecalcState@@QEBA_NPEBUtagWND@@@Z.c)
 *     ?StartRecalc@DesktopRecalc@@YAXPEAUtagWINDOWSTATION@@PEAVCMonitorTopology@@PEBU_GUID@@@Z @ 0x14002860C (-StartRecalc@DesktopRecalc@@YAXPEAUtagWINDOWSTATION@@PEAVCMonitorTopology@@PEBU_GUID@@@Z.c)
 *     ?UpdateActionForAnchor@CRecalcProp@@AEAAXPEAVCWindowAction@AdvancedWindowPos@@PEAPEBUMonitorData@CMonitorTopology@@PEAW4Result@CRecalcContext@@PEAVCRecalcState@@_N@Z @ 0x1402C6604 (-UpdateActionForAnchor@CRecalcProp@@AEAAXPEAVCWindowAction@AdvancedWindowPos@@PEAPEBUMonitorData.c)
 *     ?xxxProcessPendingRecalcStateOld@CRecalcProp@@AEAAXPEAUtagWND@@PEAVCRecalcState@@_NPEAVCRecalcContext@@@Z @ 0x1402C8868 (-xxxProcessPendingRecalcStateOld@CRecalcProp@@AEAAXPEAUtagWND@@PEAVCRecalcState@@_NPEAVCRecalcCo.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_s @ 0x14018F548 (WPP_RECORDER_AND_TRACE_SF_s.c)
 */

bool __fastcall DesktopRecalcSettings::RestoreStateSettingEnabled(DesktopRecalcSettings *this)
{
  __int64 v1; // rdx
  int v2; // ebp
  char v3; // bl
  char v4; // di
  __int64 UserSessionState; // rax
  const char *v7; // rcx
  int v8; // r8d
  int v9; // edx

  v2 = *(_DWORD *)UPDWORDPointer(8238LL);
  v3 = 1;
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x40) == 0
    || (v4 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
  {
    v4 = 0;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL) )
  {
    v3 = 0;
  }
  if ( v4 || v3 )
  {
    UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v1);
    v7 = "Enabled";
    LOBYTE(v8) = v3;
    LOBYTE(v9) = v4;
    if ( v2 )
      v7 = "Disabled";
    WPP_RECORDER_AND_TRACE_SF_s(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v9,
      v8,
      *(_QWORD *)(UserSessionState + 69160),
      5,
      7,
      135,
      (__int64)&WPP_5203336677413a97442e065d09735669_Traceguids,
      (__int64)v7);
  }
  return v2 == 0;
}
