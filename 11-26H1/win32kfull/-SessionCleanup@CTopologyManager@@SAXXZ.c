/*
 * XREFs of ?SessionCleanup@CTopologyManager@@SAXXZ @ 0x14022FA6C
 * Callers:
 *     EditionDriverUninitialize @ 0x14022F800 (EditionDriverUninitialize.c)
 * Callees:
 *     ?Release@CMonitorTopology@@QEAAXXZ @ 0x14015FDB4 (-Release@CMonitorTopology@@QEAAXXZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1401913D0 (WPP_RECORDER_AND_TRACE_SF_.c)
 */

void __fastcall CTopologyManager::SessionCleanup(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  __int64 UserSessionState; // rbx
  bool v4; // di
  bool v5; // si
  __int64 v6; // rax
  int v7; // r8d
  int v8; // edx

  UserSessionState = W32GetUserSessionState(a1, a2);
  if ( *(_QWORD *)(UserSessionState + 71208) )
  {
    v4 = 0;
    if ( WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control )
    {
      v2 = *((unsigned int *)WPP_GLOBAL_Control + 11);
      if ( (v2 & 0x40) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u )
        v4 = 1;
    }
    v5 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v4 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v6 = W32GetUserSessionState(v2, WPP_GLOBAL_Control);
      LOBYTE(v7) = v5;
      LOBYTE(v8) = v4;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v8,
        v7,
        *(_QWORD *)(v6 + 69152),
        4,
        7,
        30,
        (__int64)&WPP_f02a4a4a8b293b2feea165eb98bca231_Traceguids);
    }
    CMonitorTopology::Release(*(CMonitorTopology **)(UserSessionState + 71208));
    *(_QWORD *)(UserSessionState + 71208) = 0LL;
  }
}
