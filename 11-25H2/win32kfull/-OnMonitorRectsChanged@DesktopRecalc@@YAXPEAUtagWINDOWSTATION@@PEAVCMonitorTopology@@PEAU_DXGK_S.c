/*
 * XREFs of ?OnMonitorRectsChanged@DesktopRecalc@@YAXPEAUtagWINDOWSTATION@@PEAVCMonitorTopology@@PEAU_DXGK_SET_DISPLAY_CONFIG_PARAMS_EX@@@Z @ 0x140028254
 * Callers:
 *     xxxDesktopsRecalcAndBroadcastDisplayChange @ 0x14022E770 (xxxDesktopsRecalcAndBroadcastDisplayChange.c)
 * Callees:
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x140019B64 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x140019B80 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     ?Release@CMonitorTopology@@QEAAXXZ @ 0x1400229F8 (-Release@CMonitorTopology@@QEAAXXZ.c)
 *     ?Cancel@CRapidHpdInfo@@SAPEAVCMonitorTopology@@XZ @ 0x140028494 (-Cancel@CRapidHpdInfo@@SAPEAVCMonitorTopology@@XZ.c)
 *     ?StartRecalc@DesktopRecalc@@YAXPEAUtagWINDOWSTATION@@PEAVCMonitorTopology@@PEBU_GUID@@@Z @ 0x14002860C (-StartRecalc@DesktopRecalc@@YAXPEAUtagWINDOWSTATION@@PEAVCMonitorTopology@@PEBU_GUID@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400D9978 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?ProcessModeChange@CRapidHpdInfo@@SA?AW4ProcessModeChangeResult@1@W4_DXGK_RAPID_HPD_TYPE@@PEAU_GUID@@PEAVCMonitorTopology@@@Z @ 0x1402EC9CC (-ProcessModeChange@CRapidHpdInfo@@SA-AW4ProcessModeChangeResult@1@W4_DXGK_RAPID_HPD_TYPE@@PEAU_G.c)
 *     ?RapidHpdModeChange@DesktopRecalc@InputTraceLogging@@SAXH@Z @ 0x1402ECB7C (-RapidHpdModeChange@DesktopRecalc@InputTraceLogging@@SAXH@Z.c)
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
  __int64 v13; // rax
  int v14; // r8d
  int v15; // edx
  struct tagWINDOWSTATION *v16; // rax
  const struct _GUID *v17; // r9
  CMonitorTopology *v18; // rbx
  __int64 v19; // rdx
  bool v20; // bl
  bool v21; // di
  __int64 UserSessionState; // rax
  int v23; // r8d
  int v24; // edx
  _BYTE v25[24]; // [rsp+40h] [rbp-18h] BYREF

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
    v20 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
       && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x40) != 0
       && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
    v21 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v20 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v19);
      LOBYTE(v23) = v21;
      LOBYTE(v24) = v20;
      WPP_RECORDER_AND_TRACE_SF_(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v24,
        v23,
        *(_QWORD *)(UserSessionState + 69160),
        4,
        7,
        150,
        (__int64)&WPP_5203336677413a97442e065d09735669_Traceguids);
    }
  }
  else
  {
    v11 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
       && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x40) != 0
       && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
    v12 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v11 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v13 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v10);
      LOBYTE(v14) = v12;
      LOBYTE(v15) = v11;
      WPP_RECORDER_AND_TRACE_SF_(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v15,
        v14,
        *(_QWORD *)(v13 + 69160),
        4,
        7,
        151,
        (__int64)&WPP_5203336677413a97442e065d09735669_Traceguids);
    }
    v16 = CRapidHpdInfo::Cancel();
    v18 = v16;
    if ( v16 )
      a2 = v16;
    DesktopRecalc::StartRecalc(this, a2, v8, v17);
    if ( v18 )
      CMonitorTopology::Release(v18);
  }
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v25);
}
