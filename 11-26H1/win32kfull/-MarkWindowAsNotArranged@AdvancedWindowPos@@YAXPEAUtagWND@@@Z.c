/*
 * XREFs of ?MarkWindowAsNotArranged@AdvancedWindowPos@@YAXPEAUtagWND@@@Z @ 0x1402386CC
 * Callers:
 *     ?xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z @ 0x140164D34 (-xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z.c)
 *     ?AddWFFULLSCREEN@@YAXPEAUtagWND@@@Z @ 0x1402386A4 (-AddWFFULLSCREEN@@YAXPEAUtagWND@@@Z.c)
 * Callees:
 *     Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline @ 0x1400494F0 (Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline.c)
 *     SetOrClrWF @ 0x14004EE90 (SetOrClrWF.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x14019025C (WPP_RECORDER_AND_TRACE_SF_q.c)
 */

void __fastcall AdvancedWindowPos::MarkWindowAsNotArranged(AdvancedWindowPos *this, struct tagWND *a2)
{
  char v3; // di
  __int64 v4; // rcx
  char v5; // bp
  __int64 v6; // rbx
  __int64 UserSessionState; // rax
  int v8; // r8d
  int v9; // edx

  v3 = 1;
  SetOrClrWF(0, this, 0xD910u, 1);
  if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
    || (v5 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    v5 = 0;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
    v3 = 0;
  if ( v5 || v3 )
  {
    v6 = *(_QWORD *)this;
    UserSessionState = W32GetUserSessionState(v4, WPP_GLOBAL_Control);
    LOBYTE(v8) = v3;
    LOBYTE(v9) = v5;
    WPP_RECORDER_AND_TRACE_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v9,
      v8,
      *(_QWORD *)(UserSessionState + 69152),
      5,
      4,
      42,
      (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids,
      v6);
  }
  if ( !(unsigned int)Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline() )
    *((_DWORD *)this + 95) &= ~0x4000000u;
}
