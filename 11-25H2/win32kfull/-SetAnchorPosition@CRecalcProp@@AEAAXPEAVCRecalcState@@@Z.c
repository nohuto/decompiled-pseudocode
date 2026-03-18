/*
 * XREFs of ?SetAnchorPosition@CRecalcProp@@AEAAXPEAVCRecalcState@@@Z @ 0x1402C57B8
 * Callers:
 *     ?UpdateActionForAnchor@CRecalcProp@@AEAAXPEAVCWindowAction@AdvancedWindowPos@@PEAPEBUMonitorData@CMonitorTopology@@PEAW4Result@CRecalcContext@@PEAVCRecalcState@@_N@Z @ 0x1402C6604 (-UpdateActionForAnchor@CRecalcProp@@AEAAXPEAVCWindowAction@AdvancedWindowPos@@PEAPEBUMonitorData.c)
 *     ?xxxProcessPendingRecalcStateOld@CRecalcProp@@AEAAXPEAUtagWND@@PEAVCRecalcState@@_NPEAVCRecalcContext@@@Z @ 0x1402C8868 (-xxxProcessPendingRecalcStateOld@CRecalcProp@@AEAAXPEAUtagWND@@PEAVCRecalcState@@_NPEAVCRecalcCo.c)
 * Callees:
 *     ?GetRestoreRect@CRecalcState@@SA?AUtagRECT@@PEBUtagWND@@@Z @ 0x140025FCC (-GetRestoreRect@CRecalcState@@SA-AUtagRECT@@PEBUtagWND@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400D9978 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?ClearAnchorPosition@CRecalcProp@@AEAAXXZ @ 0x140206524 (-ClearAnchorPosition@CRecalcProp@@AEAAXXZ.c)
 */

void __fastcall CRecalcProp::SetAnchorPosition(CRecalcProp *this, volatile signed __int32 **a2)
{
  char v4; // si
  const struct tagWND *v5; // rdx
  __int64 v6; // rdx
  bool v7; // bl
  __int64 UserSessionState; // rax
  int v9; // r8d
  int v10; // edx
  struct tagRECT v11; // [rsp+40h] [rbp-18h] BYREF

  CRecalcProp::ClearAnchorPosition(this);
  v4 = 1;
  _InterlockedAdd(a2[2], 1u);
  v5 = (const struct tagWND *)*((_QWORD *)this + 2);
  *((_QWORD *)this + 10) = a2[2];
  *(struct tagRECT *)((char *)this + 60) = *CRecalcState::GetRestoreRect(&v11, v5);
  v7 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x40) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 5u;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL) )
  {
    v4 = 0;
  }
  if ( v7 || v4 )
  {
    UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v6);
    LOBYTE(v9) = v4;
    LOBYTE(v10) = v7;
    WPP_RECORDER_AND_TRACE_SF_(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v10,
      v9,
      *(_QWORD *)(UserSessionState + 69160),
      5,
      7,
      112,
      (__int64)&WPP_5203336677413a97442e065d09735669_Traceguids);
  }
}
