/*
 * XREFs of ?MarkWindowAsNotArranged@AdvancedWindowPos@@YAXPEAUtagWND@@@Z @ 0x1402D4DD4
 * Callers:
 *     ?xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z @ 0x1400268FC (-xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z.c)
 *     ?AddWFFULLSCREEN@@YAXPEAUtagWND@@@Z @ 0x140208DA8 (-AddWFFULLSCREEN@@YAXPEAUtagWND@@@Z.c)
 * Callees:
 *     SetOrClrWF @ 0x1400373A0 (SetOrClrWF.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1400D99FC (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline @ 0x1402720AC (Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline.c)
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
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
    || (v5 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
  {
    v5 = 0;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL) )
  {
    v3 = 0;
  }
  if ( v5 || v3 )
  {
    v6 = *(_QWORD *)this;
    UserSessionState = W32GetUserSessionState(v4, *(_QWORD *)&WPP_GLOBAL_Control);
    LOBYTE(v8) = v3;
    LOBYTE(v9) = v5;
    WPP_RECORDER_AND_TRACE_SF_q(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v9,
      v8,
      *(_QWORD *)(UserSessionState + 69160),
      5,
      4,
      42,
      (__int64)&WPP_465f200ce2533ca40a0cb60e63eb1667_Traceguids,
      v6);
  }
  if ( !(unsigned int)Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline() )
    *((_DWORD *)this + 95) &= ~0x4000000u;
}
