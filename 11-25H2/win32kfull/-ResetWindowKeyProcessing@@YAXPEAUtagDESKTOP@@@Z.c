/*
 * XREFs of ?ResetWindowKeyProcessing@@YAXPEAUtagDESKTOP@@@Z @ 0x14028A92C
 * Callers:
 *     ?xxxDoHotKeyStuff@@YA_NE_NKPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1401B2F08 (-xxxDoHotKeyStuff@@YA_NE_NKPEAUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 *     EditionKeyEventLLHook @ 0x14024FFF0 (EditionKeyEventLLHook.c)
 *     ?HotKey_InputDesktopSwitching@@YAXPEAUtagDESKTOP@@0@Z @ 0x14028A838 (-HotKey_InputDesktopSwitching@@YAXPEAUtagDESKTOP@@0@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400D9978 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x14018EC58 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     ?UpdateWindowKeyWindowCloak@@YA_NPEAUtagDESKTOP@@W4CloakingOperation@@@Z @ 0x14028AAD4 (-UpdateWindowKeyWindowCloak@@YA_NPEAUtagDESKTOP@@W4CloakingOperation@@@Z.c)
 */

void __fastcall ResetWindowKeyProcessing(struct tagDESKTOP *a1, __int64 a2)
{
  struct tagDESKTOP *v2; // rbp
  __int64 v3; // rdx
  __int64 UserSessionState; // rdi
  int v5; // r14d
  __int64 v6; // rcx
  char v7; // bl
  bool v8; // si
  bool v9; // r15
  __int64 v10; // rax
  int v11; // r8d
  int v12; // edx
  bool v13; // si
  __int64 v14; // rax
  int v15; // r8d
  int v16; // edx

  v2 = a1;
  UserSessionState = W32GetUserSessionState(a1, a2);
  v5 = *(_DWORD *)(UserSessionState + 14048);
  if ( v5 )
  {
    v6 = *(_QWORD *)&WPP_GLOBAL_Control;
    v7 = 1;
    v8 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x20) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
    v9 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v8 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v10 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v3);
      LOBYTE(v11) = v9;
      LOBYTE(v12) = v8;
      WPP_RECORDER_AND_TRACE_SF_d(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v12,
        v11,
        *(_QWORD *)(v10 + 69160),
        4,
        6,
        11,
        (__int64)&WPP_432efc7bf3b536e41dd1d6a6b78a846f_Traceguids,
        v5);
    }
    if ( *(_DWORD *)(UserSessionState + 14048) == 1 )
    {
      if ( !v2 )
        v2 = *(struct tagDESKTOP **)(W32GetUserSessionState(v6, v3) + 19144);
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x20) == 0
        || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u )
      {
        v7 = 0;
      }
      v13 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v7 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v14 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v3);
        LOBYTE(v15) = v13;
        LOBYTE(v16) = v7;
        WPP_RECORDER_AND_TRACE_SF_(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v16,
          v15,
          *(_QWORD *)(v14 + 69160),
          4,
          6,
          12,
          (__int64)&WPP_432efc7bf3b536e41dd1d6a6b78a846f_Traceguids);
      }
      UpdateWindowKeyWindowCloak(v2, 0LL);
    }
    *(_DWORD *)(UserSessionState + 14048) = 0;
  }
}
