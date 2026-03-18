/*
 * XREFs of ?LogComparisonToCurrent@CMonitorTopology@@QEBAXXZ @ 0x140028E98
 * Callers:
 *     ?StartRecalc@DesktopRecalc@@YAXPEAUtagWINDOWSTATION@@PEAVCMonitorTopology@@PEBU_GUID@@@Z @ 0x14002860C (-StartRecalc@DesktopRecalc@@YAXPEAUtagWINDOWSTATION@@PEAVCMonitorTopology@@PEBU_GUID@@@Z.c)
 *     ?UpdateCurrent@CTopologyManager@@SA_NXZ @ 0x14021E9D8 (-UpdateCurrent@CTopologyManager@@SA_NXZ.c)
 * Callees:
 *     ?CompareToCurrent@CMonitorTopology@@QEBA?AW4CompareResult@1@W4CompareType@1@@Z @ 0x14002233C (-CompareToCurrent@CMonitorTopology@@QEBA-AW4CompareResult@1@W4CompareType@1@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400D9978 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_DDD @ 0x1402A466C (WPP_RECORDER_AND_TRACE_SF_DDD.c)
 *     ?TraceTopology@CMonitorTopology@@QEBAXXZ @ 0x1402AD0EC (-TraceTopology@CMonitorTopology@@QEBAXXZ.c)
 */

void __fastcall CMonitorTopology::LogComparisonToCurrent(CMonitorTopology *this)
{
  __int64 v2; // rcx
  char v3; // si
  bool v4; // bp
  bool v5; // r14
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 UserSessionState; // rax
  int v9; // r8d
  int v10; // edx
  bool v11; // di
  bool v12; // bl
  __int64 v13; // rax
  int v14; // r8d
  int v15; // edx
  __int64 v16; // rdx
  __int64 v17; // rcx
  bool v18; // bl
  __int64 v19; // rax
  int v20; // r8d
  int v21; // edx
  __int64 v22; // rax

  if ( (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x40) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u )
  {
    CMonitorTopology::CompareToCurrent((__int64)this, 0LL);
    v3 = 1;
    v4 = 0;
    if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control )
    {
      v2 = *(unsigned int *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL);
      if ( (v2 & 0x40) != 0 && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u )
        v4 = 1;
    }
    v5 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v4 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v6 = *(_QWORD *)(W32GetUserSessionState(v2, &WPP_RECORDER_INITIALIZED) + 19872);
      UserSessionState = W32GetUserSessionState(v6, v7);
      LOBYTE(v9) = v5;
      LOBYTE(v10) = v4;
      WPP_RECORDER_AND_TRACE_SF_DDD(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v10,
        v9,
        *(_QWORD *)(UserSessionState + 69160));
    }
    v11 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
       && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x40) != 0
       && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 5u;
    v12 = *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED
       && *(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL);
    if ( v11 || v12 )
    {
      v13 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, &WPP_RECORDER_INITIALIZED);
      LOBYTE(v14) = v12;
      LOBYTE(v15) = v11;
      WPP_RECORDER_AND_TRACE_SF_(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v15,
        v14,
        *(_QWORD *)(v13 + 69160),
        5,
        7,
        27,
        (__int64)&WPP_f02a4a4a8b293b2feea165eb98bca231_Traceguids);
    }
    CMonitorTopology::TraceTopology(this);
    v17 = *(_QWORD *)&WPP_GLOBAL_Control;
    v18 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
       && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x40) != 0
       && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 5u;
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL) )
    {
      v3 = 0;
    }
    if ( v18 || v3 )
    {
      v19 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v16);
      LOBYTE(v20) = v3;
      LOBYTE(v21) = v18;
      WPP_RECORDER_AND_TRACE_SF_(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v21,
        v20,
        *(_QWORD *)(v19 + 69160),
        5,
        7,
        28,
        (__int64)&WPP_f02a4a4a8b293b2feea165eb98bca231_Traceguids);
    }
    v22 = W32GetUserSessionState(v17, v16);
    CMonitorTopology::TraceTopology(*(CMonitorTopology **)(v22 + 71224));
  }
}
