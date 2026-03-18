/*
 * XREFs of ?SetNormalRect@CHECKPOINT@@QEAAXPEBUtagWND@@AEBUtagRECT@@G@Z @ 0x140032708
 * Callers:
 *     ?Update@CHECKPOINT@@AEAAXPEBUtagWND@@AEBUtagRECT@@@Z @ 0x1400312B0 (-Update@CHECKPOINT@@AEAAXPEBUtagWND@@AEBUtagRECT@@@Z.c)
 *     _anonymous_namespace_::xxxMigrateWindowCheckpoint @ 0x140162C0C (_anonymous_namespace_--xxxMigrateWindowCheckpoint.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1401B8F18 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     xxxSetWindowPlacement @ 0x1401FBF30 (xxxSetWindowPlacement.c)
 *     ?Init@CHECKPOINT@@AEAAXPEBUtagWND@@AEBUtagRECT@@@Z @ 0x140213468 (-Init@CHECKPOINT@@AEAAXPEBUtagWND@@AEBUtagRECT@@@Z.c)
 *     ?xxxRestoreToPosAndState@AdvancedWindowPos@@YA_NPEAUtagWND@@AEBUMonitorData@CMonitorTopology@@W4State@1@UtagRECT@@3W4ApplyOption@1@PEAK@Z @ 0x140229DF0 (-xxxRestoreToPosAndState@AdvancedWindowPos@@YA_NPEAUtagWND@@AEBUMonitorData@CMonitorTopology@@W4.c)
 *     ?xxxApplyWindowPos@AdvancedWindowPos@@YAXPEAUtagWND@@AEBUWINDOWPOSANDSTATE@1@@Z @ 0x14022A8E4 (-xxxApplyWindowPos@AdvancedWindowPos@@YAXPEAUtagWND@@AEBUWINDOWPOSANDSTATE@1@@Z.c)
 *     xxxMetricsRecalc @ 0x14023D32C (xxxMetricsRecalc.c)
 *     ??1CSaveRestoreCheckPoint@@QEAA@XZ @ 0x14025C7C4 (--1CSaveRestoreCheckPoint@@QEAA@XZ.c)
 *     ?xxxCommitMoveSizeOld@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@@Z @ 0x1402C65EC (-xxxCommitMoveSizeOld@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@@Z.c)
 *     xxxSetInternalWindowPos @ 0x1402C8BFC (xxxSetInternalWindowPos.c)
 *     ?xxxSetWindowShowState@@YA_NPEAUtagWND@@EPEAUtagRECT@@@Z @ 0x1402E7150 (-xxxSetWindowShowState@@YA_NPEAUtagWND@@EPEAUtagRECT@@@Z.c)
 *     ?xxxApplyWindowAction@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@W4ApplyReason@1@@Z @ 0x1402EAA34 (-xxxApplyWindowAction@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@W4ApplyReason@1@@Z.c)
 * Callees:
 *     ?SendNormalToDwm@CHECKPOINT@@QEAAXPEBUtagWND@@@Z @ 0x140290E10 (-SendNormalToDwm@CHECKPOINT@@QEAAXPEBUtagWND@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_qdddddd @ 0x1402DAF4C (WPP_RECORDER_AND_TRACE_SF_qdddddd.c)
 */

void __fastcall CHECKPOINT::SetNormalRect(
        CHECKPOINT *this,
        const struct tagWND *a2,
        const struct tagRECT *a3,
        __int16 a4)
{
  __int64 v5; // r9
  char v6; // r12
  char v7; // r13
  __int64 UserSessionState; // rax
  int v9; // r8d
  int v10; // edx
  const struct tagWND *v11; // [rsp+B8h] [rbp+10h]

  v11 = a2;
  *((_WORD *)this + 26) = a4;
  v5 = *(_QWORD *)((char *)this + 20) - *(_QWORD *)&a3->left;
  if ( !v5 )
    v5 = *(_QWORD *)((char *)this + 28) - *(_QWORD *)&a3->right;
  if ( v5 )
  {
    *(struct tagRECT *)((char *)this + 20) = *a3;
    v6 = 1;
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (v7 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      v7 = 0;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || !*((_WORD *)WPP_GLOBAL_Control + 36) )
    {
      v6 = 0;
    }
    if ( v7 || v6 )
    {
      UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, a2);
      LOBYTE(v9) = v6;
      LOBYTE(v10) = v7;
      WPP_RECORDER_AND_TRACE_SF_qdddddd(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v10,
        v9,
        *(_QWORD *)(UserSessionState + 69152));
      a2 = v11;
    }
    CHECKPOINT::SendNormalToDwm(this, a2);
  }
}
