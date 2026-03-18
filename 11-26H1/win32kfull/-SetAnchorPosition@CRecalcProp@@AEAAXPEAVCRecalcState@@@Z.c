/*
 * XREFs of ?SetAnchorPosition@CRecalcProp@@AEAAXPEAVCRecalcState@@@Z @ 0x14027CAFC
 * Callers:
 *     ?UpdateActionForAnchor@CRecalcProp@@AEAAXPEAVCWindowAction@AdvancedWindowPos@@PEAPEBUMonitorData@CMonitorTopology@@PEAW4Result@CRecalcContext@@PEAVCRecalcState@@_N@Z @ 0x1402DE810 (-UpdateActionForAnchor@CRecalcProp@@AEAAXPEAVCWindowAction@AdvancedWindowPos@@PEAPEBUMonitorData.c)
 *     ?xxxProcessPendingRecalcStateOld@CRecalcProp@@AEAAXPEAUtagWND@@PEAVCRecalcState@@_NPEAVCRecalcContext@@@Z @ 0x1402E01BC (-xxxProcessPendingRecalcStateOld@CRecalcProp@@AEAAXPEAUtagWND@@PEAVCRecalcState@@_NPEAVCRecalcCo.c)
 * Callees:
 *     ?GetRestoreRect@CRecalcState@@SA?AUtagRECT@@PEBUtagWND@@@Z @ 0x1401604A0 (-GetRestoreRect@CRecalcState@@SA-AUtagRECT@@PEBUtagWND@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_dddddd @ 0x140160DC8 (WPP_RECORDER_AND_TRACE_SF_dddddd.c)
 *     ?ClearAnchorPosition@CRecalcProp@@AEAAXXZ @ 0x140210358 (-ClearAnchorPosition@CRecalcProp@@AEAAXXZ.c)
 */

void __fastcall CRecalcProp::SetAnchorPosition(CRecalcProp *this, volatile signed __int32 **a2)
{
  char v4; // r14
  const struct tagWND *v5; // rdx
  __int64 v6; // rdx
  char v7; // r15
  int v8; // ebp
  int v9; // edi
  int v10; // esi
  int v11; // ebx
  __int64 UserSessionState; // rax
  struct tagRECT v13; // [rsp+70h] [rbp-28h] BYREF

  CRecalcProp::ClearAnchorPosition(this);
  v4 = 1;
  _InterlockedAdd(a2[2], 1u);
  v5 = (const struct tagWND *)*((_QWORD *)this + 2);
  *((_QWORD *)this + 10) = a2[2];
  *(struct tagRECT *)((char *)this + 60) = *CRecalcState::GetRestoreRect(&v13, v5);
  if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x40) == 0
    || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
  {
    v4 = 0;
  }
  v7 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v4 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v8 = *((_DWORD *)this + 16);
    v9 = *((_DWORD *)this + 18);
    v10 = *((_DWORD *)this + 15);
    v11 = *((_DWORD *)this + 17);
    UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v6);
    WPP_RECORDER_AND_TRACE_SF_dddddd(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v4,
      v7,
      *(_QWORD *)(UserSessionState + 69152),
      4u,
      7u,
      0x6Fu,
      (__int64)&WPP_78206adbc0fc3667085fdf33c34682f8_Traceguids,
      v10,
      v8,
      v11,
      v9,
      v11 - v10,
      v9 - v8);
  }
}
