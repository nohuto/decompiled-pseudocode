/*
 * XREFs of ?ResetWindowKeyProcessing@@YAXPEAUtagDESKTOP@@@Z @ 0x140269E94
 * Callers:
 *     EditionKeyEventLLHook @ 0x140172CB0 (EditionKeyEventLLHook.c)
 *     ?xxxDoHotKeyStuff@@YA_NE_NKPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1401E3D68 (-xxxDoHotKeyStuff@@YA_NE_NKPEAUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 *     ?HotKey_InputDesktopSwitching@@YAXPEAUtagDESKTOP@@0@Z @ 0x1402A7868 (-HotKey_InputDesktopSwitching@@YAXPEAUtagDESKTOP@@0@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1401913D0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1401A4EE4 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     ?UpdateWindowKeyWindowCloak@@YA_NPEAUtagDESKTOP@@W4CloakingOperation@@@Z @ 0x1402A7964 (-UpdateWindowKeyWindowCloak@@YA_NPEAUtagDESKTOP@@W4CloakingOperation@@@Z.c)
 */

void __fastcall ResetWindowKeyProcessing(struct tagDESKTOP *a1, __int64 a2)
{
  struct tagDESKTOP *v2; // rbp
  __int64 v3; // rdx
  __int64 UserSessionState; // rsi
  int v5; // r15d
  struct MOVESIZEDATA *v6; // rcx
  char v7; // bl
  bool v8; // di
  bool v9; // r14
  __int64 v10; // rax
  int v11; // r8d
  int v12; // edx
  bool v13; // di
  __int64 v14; // rax
  int v15; // r8d
  int v16; // edx

  v2 = a1;
  UserSessionState = W32GetUserSessionState(a1, a2);
  v5 = *(_DWORD *)(UserSessionState + 14040);
  if ( v5 )
  {
    v6 = WPP_GLOBAL_Control;
    v7 = 1;
    v8 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x20) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v9 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v8 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v10 = W32GetUserSessionState(WPP_GLOBAL_Control, v3);
      LOBYTE(v11) = v9;
      LOBYTE(v12) = v8;
      WPP_RECORDER_AND_TRACE_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v12,
        v11,
        *(_QWORD *)(v10 + 69152),
        4,
        6,
        11,
        (__int64)&WPP_e7b0edddbde9378c4e0e63fd92a79a5b_Traceguids,
        v5);
    }
    if ( *(_DWORD *)(UserSessionState + 14040) == 1 )
    {
      if ( !v2 )
        v2 = *(struct tagDESKTOP **)(W32GetUserSessionState(v6, v3) + 19176);
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x20) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
      {
        v7 = 0;
      }
      v13 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v7 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v14 = W32GetUserSessionState(WPP_GLOBAL_Control, v3);
        LOBYTE(v15) = v13;
        LOBYTE(v16) = v7;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v16,
          v15,
          *(_QWORD *)(v14 + 69152),
          4,
          6,
          12,
          (__int64)&WPP_e7b0edddbde9378c4e0e63fd92a79a5b_Traceguids);
      }
      UpdateWindowKeyWindowCloak(v2, 0LL);
    }
    *(_DWORD *)(UserSessionState + 14040) = 0;
  }
}
