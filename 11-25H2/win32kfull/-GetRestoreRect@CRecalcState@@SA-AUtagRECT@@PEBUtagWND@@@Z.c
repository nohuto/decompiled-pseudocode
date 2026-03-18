/*
 * XREFs of ?GetRestoreRect@CRecalcState@@SA?AUtagRECT@@PEBUtagWND@@@Z @ 0x140025FCC
 * Callers:
 *     ??0CRecalcState@@AEAA@PEBUtagWND@@PEAVCMonitorTopology@@W4StartRecalcReason@@@Z @ 0x140025B6C (--0CRecalcState@@AEAA@PEBUtagWND@@PEAVCMonitorTopology@@W4StartRecalcReason@@@Z.c)
 *     ?SetAnchorPosition@CRecalcProp@@AEAAXPEAVCRecalcState@@@Z @ 0x1402C57B8 (-SetAnchorPosition@CRecalcProp@@AEAAXPEAVCRecalcState@@@Z.c)
 *     ?SetLastMoveRect@CRecalcProp@@AEAAXXZ @ 0x1402C59A4 (-SetLastMoveRect@CRecalcProp@@AEAAXXZ.c)
 *     ?ShouldMigrateFromAnchor@CRecalcProp@@AEAA_NXZ @ 0x1402C5E5C (-ShouldMigrateFromAnchor@CRecalcProp@@AEAA_NXZ.c)
 * Callees:
 *     ?GetWindowState@AdvancedWindowPos@@YA?AW4State@1@PEBUtagWND@@@Z @ 0x140026190 (-GetWindowState@AdvancedWindowPos@@YA-AW4State@1@PEBUtagWND@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1400D99FC (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     GetNormalRect @ 0x1401A86B0 (GetNormalRect.c)
 */

struct tagRECT *__fastcall CRecalcState::GetRestoreRect(struct tagRECT *__return_ptr retstr, const struct tagWND *a2)
{
  __int64 v4; // rdx
  struct tagRECT v5; // xmm0
  bool v6; // bp
  bool v7; // r14
  __int64 v8; // rbx
  __int64 UserSessionState; // rax
  int v10; // r8d
  int v11; // edx
  struct tagRECT *result; // rax
  struct tagRECT v13; // [rsp+50h] [rbp-18h] BYREF

  if ( !(unsigned int)AdvancedWindowPos::GetWindowState(a2) )
  {
LABEL_12:
    v5 = *(struct tagRECT *)(*((_QWORD *)a2 + 5) + 88LL);
    goto LABEL_13;
  }
  v13 = 0LL;
  if ( !(unsigned int)GetNormalRect(a2, &v13) )
  {
    v6 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x40) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 2u;
    v7 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v6 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v8 = *(_QWORD *)a2;
      UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v4);
      LOBYTE(v10) = v7;
      LOBYTE(v11) = v6;
      WPP_RECORDER_AND_TRACE_SF_q(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v11,
        v10,
        *(_QWORD *)(UserSessionState + 69160),
        2,
        7,
        11,
        (__int64)&WPP_5203336677413a97442e065d09735669_Traceguids,
        v8);
    }
    goto LABEL_12;
  }
  v5 = v13;
LABEL_13:
  result = retstr;
  *retstr = v5;
  return result;
}
