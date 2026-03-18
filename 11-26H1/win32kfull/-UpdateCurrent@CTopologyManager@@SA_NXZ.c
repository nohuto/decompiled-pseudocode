/*
 * XREFs of ?UpdateCurrent@CTopologyManager@@SA_NXZ @ 0x140292D08
 * Callers:
 *     ?xxxGetWorkAreasFromShell@@YA_NXZ @ 0x14015A030 (-xxxGetWorkAreasFromShell@@YA_NXZ.c)
 *     xxxSystemParametersInfoWorker @ 0x1401CB418 (xxxSystemParametersInfoWorker.c)
 *     EditionUpdateCurrentMonitorTopology @ 0x140257EB0 (EditionUpdateCurrentMonitorTopology.c)
 * Callees:
 *     ?LogComparisonToCurrent@CMonitorTopology@@QEBAXXZ @ 0x14015C68C (-LogComparisonToCurrent@CMonitorTopology@@QEBAXXZ.c)
 *     ?Release@CMonitorTopology@@QEAAXXZ @ 0x14015FDB4 (-Release@CMonitorTopology@@QEAAXXZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1401913D0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?CreateTopologySnapshot@CMonitorTopology@@SAPEAV1@XZ @ 0x140212314 (-CreateTopologySnapshot@CMonitorTopology@@SAPEAV1@XZ.c)
 *     ?SetTopologyId@CMonitorTopology@@QEAAXXZ @ 0x140254360 (-SetTopologyId@CMonitorTopology@@QEAAXXZ.c)
 */

char __fastcall CTopologyManager::UpdateCurrent(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  CMonitorTopology *TopologySnapshot; // rbx
  bool v5; // bl
  bool v6; // di
  __int64 v7; // rax
  int v8; // r8d
  int v9; // edx
  __int64 UserSessionState; // rax
  CMonitorTopology *v12; // rdi
  __int64 v13; // rdx

  TopologySnapshot = CMonitorTopology::CreateTopologySnapshot(a1, a2);
  if ( TopologySnapshot )
  {
    UserSessionState = W32GetUserSessionState(v3, v2);
    v12 = *(CMonitorTopology **)(UserSessionState + 71208);
    *(_QWORD *)(UserSessionState + 71208) = TopologySnapshot;
    CMonitorTopology::SetTopologyId(TopologySnapshot, v13);
    if ( v12 )
    {
      CMonitorTopology::LogComparisonToCurrent(v12);
      CMonitorTopology::Release(v12);
    }
    return 1;
  }
  else
  {
    v5 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
    v6 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v5 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v7 = W32GetUserSessionState(WPP_GLOBAL_Control, v2);
      LOBYTE(v8) = v6;
      LOBYTE(v9) = v5;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v9,
        v8,
        *(_QWORD *)(v7 + 69152),
        2,
        7,
        29,
        (__int64)&WPP_f02a4a4a8b293b2feea165eb98bca231_Traceguids);
    }
    return 0;
  }
}
