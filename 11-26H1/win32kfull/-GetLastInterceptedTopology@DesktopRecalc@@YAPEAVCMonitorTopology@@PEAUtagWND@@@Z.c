/*
 * XREFs of ?GetLastInterceptedTopology@DesktopRecalc@@YAPEAVCMonitorTopology@@PEAUtagWND@@@Z @ 0x1402DD85C
 * Callers:
 *     ?GetActionTopology@@YA_NAEBU_WINDOW_ACTION@@_NPEAUtagWND@@PEAPEAVCMonitorTopology@@@Z @ 0x1402E1FFC (-GetActionTopology@@YA_NAEBU_WINDOW_ACTION@@_NPEAUtagWND@@PEAPEAVCMonitorTopology@@@Z.c)
 * Callees:
 *     ?GetRecalcProperty@CRecalcProp@@SAPEAV1@PEBUtagWND@@@Z @ 0x14015F568 (-GetRecalcProperty@CRecalcProp@@SAPEAV1@PEBUtagWND@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x14019025C (WPP_RECORDER_AND_TRACE_SF_q.c)
 */

struct CMonitorTopology *__fastcall DesktopRecalc::GetLastInterceptedTopology(DesktopRecalc *this, struct tagWND *a2)
{
  struct CRecalcProp *RecalcProperty; // rax
  __int64 v4; // rdx
  volatile signed __int32 *v5; // rcx
  bool v7; // di
  bool v8; // si
  __int64 v9; // rbx
  __int64 UserSessionState; // rax
  int v11; // r8d
  int v12; // edx

  RecalcProperty = CRecalcProp::GetRecalcProperty(this, (__int64)a2);
  v4 = 0LL;
  if ( RecalcProperty )
  {
    v5 = (volatile signed __int32 *)*((_QWORD *)RecalcProperty + 6);
    if ( v5 )
    {
      _InterlockedAdd(v5, 1u);
      return (struct CMonitorTopology *)*((_QWORD *)RecalcProperty + 6);
    }
    return (struct CMonitorTopology *)v4;
  }
  else
  {
    v7 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
    v8 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v7 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v9 = *(_QWORD *)this;
      UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, 0LL);
      LOBYTE(v11) = v8;
      LOBYTE(v12) = v7;
      WPP_RECORDER_AND_TRACE_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v12,
        v11,
        *(_QWORD *)(UserSessionState + 69152),
        3,
        7,
        157,
        (__int64)&WPP_78206adbc0fc3667085fdf33c34682f8_Traceguids,
        v9);
    }
    return 0LL;
  }
}
