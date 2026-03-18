/*
 * XREFs of ?Cancel@CRapidHpdInfo@@SAPEAVCMonitorTopology@@XZ @ 0x14015C480
 * Callers:
 *     ?OnMonitorRectsChanged@DesktopRecalc@@YAXPEAUtagWINDOWSTATION@@PEAVCMonitorTopology@@PEAU_DXGK_SET_DISPLAY_CONFIG_PARAMS_EX@@@Z @ 0x14015C0C8 (-OnMonitorRectsChanged@DesktopRecalc@@YAXPEAUtagWINDOWSTATION@@PEAVCMonitorTopology@@PEAU_DXGK_S.c)
 *     ?OnWorkAreaChanged@DesktopRecalc@@YAXPEAVCMonitorTopology@@@Z @ 0x14015C41C (-OnWorkAreaChanged@DesktopRecalc@@YAXPEAVCMonitorTopology@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1401A4EE4 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     ?Delete@CRapidHpdInfo@@CAXW4InputTracing_DesktopRecalcRapidHpdResult@@@Z @ 0x14022FBC0 (-Delete@CRapidHpdInfo@@CAXW4InputTracing_DesktopRecalcRapidHpdResult@@@Z.c)
 */

struct CMonitorTopology *__fastcall CRapidHpdInfo::Cancel(__int64 a1, __int64 a2)
{
  volatile signed __int32 *v2; // rbx
  __int64 UserSessionState; // rsi
  __int64 v4; // rdx
  char v5; // di
  bool v6; // bp
  int v7; // ebx
  __int64 v8; // rax
  int v9; // r8d
  int v10; // edx

  v2 = 0LL;
  UserSessionState = W32GetUserSessionState(a1, a2);
  v4 = *(_QWORD *)(UserSessionState + 71232);
  if ( v4 )
  {
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x40) == 0
      || (v5 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
    {
      v5 = 0;
    }
    v6 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v5 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v7 = *(_DWORD *)(*(_QWORD *)(v4 + 40) + 12LL);
      v8 = W32GetUserSessionState(WPP_GLOBAL_Control, v4);
      LOBYTE(v9) = v6;
      LOBYTE(v10) = v5;
      WPP_RECORDER_AND_TRACE_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v10,
        v9,
        *(_QWORD *)(v8 + 69152),
        3,
        7,
        12,
        (__int64)&WPP_24961469f9f338f3d0acbcc72a179045_Traceguids,
        v7);
    }
    v2 = *(volatile signed __int32 **)(*(_QWORD *)(UserSessionState + 71232) + 40LL);
    _InterlockedIncrement(v2);
    CRapidHpdInfo::Delete(2LL);
  }
  return (struct CMonitorTopology *)v2;
}
