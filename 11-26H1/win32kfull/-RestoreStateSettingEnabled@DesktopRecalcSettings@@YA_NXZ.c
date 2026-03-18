/*
 * XREFs of ?RestoreStateSettingEnabled@DesktopRecalcSettings@@YA_NXZ @ 0x14015CB14
 * Callers:
 *     ?ShouldStoreAfterProcessing@CRecalcState@@QEBA_NPEBUtagWND@@@Z @ 0x14011D60C (-ShouldStoreAfterProcessing@CRecalcState@@QEBA_NPEBUtagWND@@@Z.c)
 *     ?StartRecalc@DesktopRecalc@@YAXPEAUtagWINDOWSTATION@@PEAVCMonitorTopology@@PEBU_GUID@@@Z @ 0x14015CCB0 (-StartRecalc@DesktopRecalc@@YAXPEAUtagWINDOWSTATION@@PEAVCMonitorTopology@@PEBU_GUID@@@Z.c)
 *     ?UpdateActionForAnchor@CRecalcProp@@AEAAXPEAVCWindowAction@AdvancedWindowPos@@PEAPEBUMonitorData@CMonitorTopology@@PEAW4Result@CRecalcContext@@PEAVCRecalcState@@_N@Z @ 0x1402DE810 (-UpdateActionForAnchor@CRecalcProp@@AEAAXPEAVCWindowAction@AdvancedWindowPos@@PEAPEBUMonitorData.c)
 *     ?xxxProcessPendingRecalcStateOld@CRecalcProp@@AEAAXPEAUtagWND@@PEAVCRecalcState@@_NPEAVCRecalcContext@@@Z @ 0x1402E01BC (-xxxProcessPendingRecalcStateOld@CRecalcProp@@AEAAXPEAUtagWND@@PEAVCRecalcState@@_NPEAVCRecalcCo.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_s @ 0x1401A15C0 (WPP_RECORDER_AND_TRACE_SF_s.c)
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
  if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x40) == 0
    || (v4 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    v4 = 0;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
    v3 = 0;
  if ( v4 || v3 )
  {
    UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v1);
    v7 = "Enabled";
    LOBYTE(v8) = v3;
    LOBYTE(v9) = v4;
    if ( v2 )
      v7 = "Disabled";
    WPP_RECORDER_AND_TRACE_SF_s(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v9,
      v8,
      *(_QWORD *)(UserSessionState + 69152),
      5,
      7,
      135,
      (__int64)&WPP_78206adbc0fc3667085fdf33c34682f8_Traceguids,
      (__int64)v7);
  }
  return v2 == 0;
}
