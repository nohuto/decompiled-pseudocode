/*
 * XREFs of ?OnRapidHpdTimeout@DesktopRecalc@@YAXPEAVCMonitorTopology@@AEBU_GUID@@@Z @ 0x14015B9A0
 * Callers:
 *     ?OnTimer@CRapidHpdInfo@@SAXXZ @ 0x1401E6268 (-OnTimer@CRapidHpdInfo@@SAXXZ.c)
 * Callees:
 *     ?StartRecalc@DesktopRecalc@@YAXPEAUtagWINDOWSTATION@@PEAVCMonitorTopology@@PEBU_GUID@@@Z @ 0x14015CCB0 (-StartRecalc@DesktopRecalc@@YAXPEAUtagWINDOWSTATION@@PEAVCMonitorTopology@@PEBU_GUID@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1401913D0 (WPP_RECORDER_AND_TRACE_SF_.c)
 */

void __fastcall DesktopRecalc::OnRapidHpdTimeout(
        DesktopRecalc *this,
        struct CMonitorTopology *a2,
        const struct _GUID *a3)
{
  bool v5; // bl
  bool v6; // di
  __int64 UserSessionState; // rax
  int v8; // r8d
  int v9; // edx
  __int64 v10; // rax
  const struct _GUID *v11; // r9

  v5 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v6 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v5 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(this, a2);
    LOBYTE(v8) = v6;
    LOBYTE(v9) = v5;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v9,
      v8,
      *(_QWORD *)(UserSessionState + 69152),
      4,
      7,
      152,
      (__int64)&WPP_78206adbc0fc3667085fdf33c34682f8_Traceguids);
  }
  v10 = W32GetUserSessionState(this, a2);
  DesktopRecalc::StartRecalc(*(DesktopRecalc **)(*(_QWORD *)(v10 + 19176) + 40LL), this, a2, v11);
}
