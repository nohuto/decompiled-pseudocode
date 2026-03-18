/*
 * XREFs of ?MinimizeSettingEnabled@DesktopRecalcSettings@@YA_NXZ @ 0x140029100
 * Callers:
 *     ?ShouldMinimizeOnMonitorRemove@CRecalcState@@AEAA_NPEAUtagWND@@PEBUMonitorData@CMonitorTopology@@PEBVCRecalcContext@@@Z @ 0x14002808C (-ShouldMinimizeOnMonitorRemove@CRecalcState@@AEAA_NPEAUtagWND@@PEBUMonitorData@CMonitorTopology@.c)
 *     ?StartRecalc@DesktopRecalc@@YAXPEAUtagWINDOWSTATION@@PEAVCMonitorTopology@@PEBU_GUID@@@Z @ 0x14002860C (-StartRecalc@DesktopRecalc@@YAXPEAUtagWINDOWSTATION@@PEAVCMonitorTopology@@PEBU_GUID@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_s @ 0x14018F548 (WPP_RECORDER_AND_TRACE_SF_s.c)
 */

bool __fastcall DesktopRecalcSettings::MinimizeSettingEnabled(DesktopRecalcSettings *this)
{
  __int64 v1; // rdx
  int v2; // ebp
  char v3; // bl
  char v4; // di
  __int64 UserSessionState; // rax
  const char *v6; // rcx
  int v7; // r8d
  int v8; // edx

  v2 = *(_DWORD *)UPDWORDPointer(8234LL);
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
    v6 = "Minimize";
    LOBYTE(v7) = v3;
    LOBYTE(v8) = v4;
    if ( v2 )
      v6 = "Migrate";
    WPP_RECORDER_AND_TRACE_SF_s(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v8,
      v7,
      *(_QWORD *)(UserSessionState + 69160),
      5,
      7,
      134,
      (__int64)&WPP_5203336677413a97442e065d09735669_Traceguids,
      (__int64)v6);
  }
  return v2 == 0;
}
