/*
 * XREFs of ?OnMonitorRectsChanged@DesktopRecalc@@YAXPEAUtagWINDOWSTATION@@PEAVCMonitorTopology@@PEAU_DXGK_SET_DISPLAY_CONFIG_PARAMS_EX@@@Z @ 0x14015C0C8
 * Callers:
 *     xxxDesktopsRecalcAndBroadcastDisplayChange @ 0x14015B5D0 (xxxDesktopsRecalcAndBroadcastDisplayChange.c)
 * Callees:
 *     ??0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z @ 0x1400211C4 (--0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z.c)
 *     ?Cancel@CRapidHpdInfo@@SAPEAVCMonitorTopology@@XZ @ 0x14015C480 (-Cancel@CRapidHpdInfo@@SAPEAVCMonitorTopology@@XZ.c)
 *     ?StartRecalc@DesktopRecalc@@YAXPEAUtagWINDOWSTATION@@PEAVCMonitorTopology@@PEBU_GUID@@@Z @ 0x14015CCB0 (-StartRecalc@DesktopRecalc@@YAXPEAUtagWINDOWSTATION@@PEAVCMonitorTopology@@PEBU_GUID@@@Z.c)
 *     ?Release@CMonitorTopology@@QEAAXXZ @ 0x14015FDB4 (-Release@CMonitorTopology@@QEAAXXZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1401913D0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?ProcessModeChange@CRapidHpdInfo@@SA?AW4ProcessModeChangeResult@1@W4_DXGK_RAPID_HPD_TYPE@@PEAU_GUID@@PEAVCMonitorTopology@@@Z @ 0x14028F004 (-ProcessModeChange@CRapidHpdInfo@@SA-AW4ProcessModeChangeResult@1@W4_DXGK_RAPID_HPD_TYPE@@PEAU_G.c)
 *     ?RapidHpdModeChange@DesktopRecalc@InputTraceLogging@@SAXH@Z @ 0x1402FC4AC (-RapidHpdModeChange@DesktopRecalc@InputTraceLogging@@SAXH@Z.c)
 */

void __fastcall DesktopRecalc::OnMonitorRectsChanged(
        DesktopRecalc *this,
        struct tagWINDOWSTATION *a2,
        struct CMonitorTopology *a3,
        struct _DXGK_SET_DISPLAY_CONFIG_PARAMS_EX *a4)
{
  __int64 v7; // rcx
  struct CMonitorTopology *v8; // rsi
  int v9; // eax
  __int64 v10; // rdx
  bool v11; // bl
  bool v12; // bp
  struct tagWINDOWSTATION *v13; // rax
  const struct _GUID *v14; // r9
  CMonitorTopology *v15; // rbx
  __int64 v16; // rdx
  bool v17; // bl
  bool v18; // di
  __int64 UserSessionState; // rax
  int v20; // r8d
  int v21; // edx
  __int64 v22; // rax
  int v23; // r8d
  int v24; // edx
  _BYTE v25[8]; // [rsp+40h] [rbp-18h] BYREF
  __int64 v26; // [rsp+48h] [rbp-10h]

  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v25);
  v7 = 0LL;
  v8 = 0LL;
  if ( a3 )
  {
    v7 = *(unsigned int *)a3;
    v8 = (struct CMonitorTopology *)((char *)a3 + 4);
  }
  v9 = CRapidHpdInfo::ProcessModeChange(v7, v8, a2);
  if ( v9 == 2 || (v10 = (unsigned int)(v9 - 3), (unsigned int)v10 < 2) )
  {
    InputTraceLogging::DesktopRecalc::RapidHpdModeChange(v9 == 2);
    v17 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x40) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v18 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v17 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v16);
      LOBYTE(v20) = v18;
      LOBYTE(v21) = v17;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v21,
        v20,
        *(_QWORD *)(UserSessionState + 69152),
        4,
        7,
        150,
        (__int64)&WPP_78206adbc0fc3667085fdf33c34682f8_Traceguids);
    }
  }
  else
  {
    v11 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x40) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v12 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v11 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v22 = W32GetUserSessionState(WPP_GLOBAL_Control, v10);
      LOBYTE(v23) = v12;
      LOBYTE(v24) = v11;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v24,
        v23,
        *(_QWORD *)(v22 + 69152),
        4,
        7,
        151,
        (__int64)&WPP_78206adbc0fc3667085fdf33c34682f8_Traceguids);
    }
    v13 = CRapidHpdInfo::Cancel();
    v15 = v13;
    if ( v13 )
      a2 = v13;
    DesktopRecalc::StartRecalc(this, a2, v8, v14);
    if ( v15 )
      CMonitorTopology::Release(v15);
  }
  if ( v25[0] )
    --*(_DWORD *)(v26 + 28);
}
