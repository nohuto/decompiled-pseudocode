/*
 * XREFs of ?GetRestoreRect@CRecalcState@@SA?AUtagRECT@@PEBUtagWND@@@Z @ 0x1401604A0
 * Callers:
 *     ??0CRecalcState@@AEAA@PEBUtagWND@@PEAVCMonitorTopology@@W4StartRecalcReason@@@Z @ 0x14015E4E4 (--0CRecalcState@@AEAA@PEBUtagWND@@PEAVCMonitorTopology@@W4StartRecalcReason@@@Z.c)
 *     ?SetLastMoveRect@CRecalcProp@@AEAAXXZ @ 0x140263754 (-SetLastMoveRect@CRecalcProp@@AEAAXXZ.c)
 *     ?SetAnchorPosition@CRecalcProp@@AEAAXPEAVCRecalcState@@@Z @ 0x14027CAFC (-SetAnchorPosition@CRecalcProp@@AEAAXPEAVCRecalcState@@@Z.c)
 *     ?ShouldMigrateFromAnchor@CRecalcProp@@AEAA_NXZ @ 0x14027CC38 (-ShouldMigrateFromAnchor@CRecalcProp@@AEAA_NXZ.c)
 * Callees:
 *     ?GetWindowState@AdvancedWindowPos@@YA?AW4State@1@PEBUtagWND@@@Z @ 0x14015E71C (-GetWindowState@AdvancedWindowPos@@YA-AW4State@1@PEBUtagWND@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x14019025C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     GetNormalRect @ 0x14024BFD0 (GetNormalRect.c)
 */

struct tagRECT *__fastcall CRecalcState::GetRestoreRect(struct tagRECT *__return_ptr retstr, const struct tagWND *a2)
{
  struct tagRECT v4; // xmm0
  struct tagRECT *result; // rax
  __int64 v6; // rdx
  bool v7; // bp
  bool v8; // r14
  __int64 v9; // rbx
  __int64 UserSessionState; // rax
  int v11; // r8d
  int v12; // edx
  struct tagRECT v13; // [rsp+50h] [rbp-18h] BYREF

  if ( (unsigned int)AdvancedWindowPos::GetWindowState(a2) )
  {
    v13 = 0LL;
    if ( (unsigned int)GetNormalRect(a2, &v13) )
    {
      v4 = v13;
      goto LABEL_3;
    }
    v7 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
    v8 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v7 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v9 = *(_QWORD *)a2;
      UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v6);
      LOBYTE(v11) = v8;
      LOBYTE(v12) = v7;
      WPP_RECORDER_AND_TRACE_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v12,
        v11,
        *(_QWORD *)(UserSessionState + 69152),
        2,
        7,
        11,
        (__int64)&WPP_78206adbc0fc3667085fdf33c34682f8_Traceguids,
        v9);
    }
  }
  v4 = *(struct tagRECT *)(*((_QWORD *)a2 + 5) + 88LL);
LABEL_3:
  result = retstr;
  *retstr = v4;
  return result;
}
