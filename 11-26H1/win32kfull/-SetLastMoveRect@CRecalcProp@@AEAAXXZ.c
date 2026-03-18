/*
 * XREFs of ?SetLastMoveRect@CRecalcProp@@AEAAXXZ @ 0x140263754
 * Callers:
 *     ?SetStateAfterProcessing@CRecalcProp@@AEAAXPEAVCMonitorTopology@@@Z @ 0x140261090 (-SetStateAfterProcessing@CRecalcProp@@AEAAXPEAVCMonitorTopology@@@Z.c)
 *     ?EndApplyWindowAction@CRecalcProp@@QEAAXPEAUtagWND@@PEBVCMonitorTopology@@_N@Z @ 0x1402DD64C (-EndApplyWindowAction@CRecalcProp@@QEAAXPEAUtagWND@@PEBVCMonitorTopology@@_N@Z.c)
 *     ?xxxEndApplyWindowActionOld@CRecalcProp@@QEAAXPEAUtagWND@@PEAVCMonitorTopology@@@Z @ 0x1402DF288 (-xxxEndApplyWindowActionOld@CRecalcProp@@QEAAXPEAUtagWND@@PEAVCMonitorTopology@@@Z.c)
 * Callees:
 *     ?GetRestoreRect@CRecalcState@@SA?AUtagRECT@@PEBUtagWND@@@Z @ 0x1401604A0 (-GetRestoreRect@CRecalcState@@SA-AUtagRECT@@PEBUtagWND@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_qdddddd @ 0x1402DAF4C (WPP_RECORDER_AND_TRACE_SF_qdddddd.c)
 */

void __fastcall CRecalcProp::SetLastMoveRect(CRecalcProp *this)
{
  __int64 v1; // rdx
  char v2; // r15
  bool v3; // r12
  __int64 UserSessionState; // rax
  int v5; // r8d
  int v6; // edx
  struct tagRECT v7; // [rsp+80h] [rbp-28h] BYREF

  *(struct tagRECT *)((char *)this + 88) = *CRecalcState::GetRestoreRect(&v7, *((const struct tagWND **)this + 2));
  v2 = 1;
  v3 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 5u;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
    v2 = 0;
  if ( v3 || v2 )
  {
    UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v1);
    LOBYTE(v5) = v2;
    LOBYTE(v6) = v3;
    WPP_RECORDER_AND_TRACE_SF_qdddddd(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v6,
      v5,
      *(_QWORD *)(UserSessionState + 69152));
  }
}
