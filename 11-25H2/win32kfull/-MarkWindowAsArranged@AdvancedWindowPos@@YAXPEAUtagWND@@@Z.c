/*
 * XREFs of ?MarkWindowAsArranged@AdvancedWindowPos@@YAXPEAUtagWND@@@Z @ 0x1402D4CF4
 * Callers:
 *     ?xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z @ 0x1400268FC (-xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z.c)
 *     ?xxxCommitMoveSizeOld@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@@Z @ 0x1402A9840 (-xxxCommitMoveSizeOld@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@@Z.c)
 *     ?xxxSetSnapArrangementPos@WindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOptions@1@K@Z @ 0x1402AB3F4 (-xxxSetSnapArrangementPos@WindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOption.c)
 *     ?xxxUpdatePosAndStateForAction@AdvancedWindowPos@@YAXPEAUtagWND@@W4State@1@1IW4MinMaxOptions@@_NPEAUtagRECT@@3AEBU5@PEAUWindowAction@1@@Z @ 0x1402DA4C0 (-xxxUpdatePosAndStateForAction@AdvancedWindowPos@@YAXPEAUtagWND@@W4State@1@1IW4MinMaxOptions@@_N.c)
 * Callees:
 *     SetOrClrWF @ 0x1400373A0 (SetOrClrWF.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1400D99FC (WPP_RECORDER_AND_TRACE_SF_q.c)
 */

void __fastcall AdvancedWindowPos::MarkWindowAsArranged(AdvancedWindowPos *this, struct tagWND *a2)
{
  char v2; // di
  __int64 v4; // rcx
  bool v5; // si
  __int64 v6; // rbx
  __int64 UserSessionState; // rax
  int v8; // r8d
  int v9; // edx

  v2 = 1;
  SetOrClrWF(1, this, 0xD910u, 1);
  v5 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 5u;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL) )
  {
    v2 = 0;
  }
  if ( v5 || v2 )
  {
    v6 = *(_QWORD *)this;
    UserSessionState = W32GetUserSessionState(v4, *(_QWORD *)&WPP_GLOBAL_Control);
    LOBYTE(v8) = v2;
    LOBYTE(v9) = v5;
    WPP_RECORDER_AND_TRACE_SF_q(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v9,
      v8,
      *(_QWORD *)(UserSessionState + 69160),
      5,
      4,
      41,
      (__int64)&WPP_465f200ce2533ca40a0cb60e63eb1667_Traceguids,
      v6);
  }
}
