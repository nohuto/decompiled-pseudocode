/*
 * XREFs of NtUserSetImeOwnerWindow @ 0x14024DCA0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     ?ImeCheckTopmost@@YAXPEAUtagWND@@@Z @ 0x14004E07C (-ImeCheckTopmost@@YAXPEAUtagWND@@@Z.c)
 *     ?zzzImeSetFutureOwner@@YAXPEAUtagWND@@0@Z @ 0x14005E1E4 (-zzzImeSetFutureOwner@@YAXPEAUtagWND@@0@Z.c)
 *     ?zzzImeSetOwnerWindow@@YAXPEAUtagWND@@0@Z @ 0x14005E600 (-zzzImeSetOwnerWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?zzzEndDeferWinEventNotify@@YAXXZ @ 0x14005F888 (-zzzEndDeferWinEventNotify@@YAXXZ.c)
 */

__int64 __fastcall NtUserSetImeOwnerWindow(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rbx
  __int64 v8; // rdi
  __int64 v9; // rdx
  struct tagWND *v10; // rsi
  __int64 UserSessionState; // rax
  __int64 v12; // rdx
  __int64 v13; // rbp
  __int16 *v14; // rcx
  __int16 v15; // bx
  __int64 v16; // rdx

  EnterCrit(0LL, 0LL);
  v4 = ValidateHwnd(a1);
  v7 = 0LL;
  v8 = v4;
  if ( v4 )
  {
    if ( (**(_DWORD **)(W32GetUserSessionState(v6, v5) + 19872) & 4) == 0 )
    {
      UserSetLastError(120);
      goto LABEL_19;
    }
    v6 = *(_WORD *)(*(_QWORD *)(v8 + 40) + 42LL) & 0x2FFF;
    if ( (_DWORD)v6 != 681 )
      goto LABEL_19;
    if ( a2 )
    {
      v10 = (struct tagWND *)ValidateHwnd(a2);
      if ( !v10 )
        goto LABEL_19;
    }
    else
    {
      v10 = 0LL;
    }
    UserSessionState = W32GetUserSessionState(v6, v9);
    ++*(_DWORD *)(UserSessionState + 70600);
    if ( v10 )
      goto LABEL_15;
    v13 = *(_QWORD *)(v8 + 16);
    v10 = *(struct tagWND **)(*(_QWORD *)(v13 + 472) + 128LL);
    if ( !v10 )
      goto LABEL_16;
    if ( v10 == *(struct tagWND **)(v8 + 120) )
    {
LABEL_18:
      zzzEndDeferWinEventNotify();
      v7 = 1LL;
      goto LABEL_19;
    }
    v14 = *(__int16 **)(*((_QWORD *)v10 + 17) + 8LL);
    v15 = *v14;
    if ( v15 != *(_WORD *)(*(_QWORD *)(W32GetUserSessionState(v14, v12) + 19872) + 898LL)
      && (*(_BYTE *)(*(_QWORD *)(*((_QWORD *)v10 + 17) + 8LL) + 10LL) & 1) == 0
      && v13 == *((_QWORD *)v10 + 2) )
    {
LABEL_15:
      zzzImeSetOwnerWindow((struct tagWND *)v8, v10);
    }
    else
    {
LABEL_16:
      zzzImeSetFutureOwner((struct tagWND *)v8, *(struct tagWND **)(v8 + 120));
    }
    ImeCheckTopmost((struct tagWND **)v8, v16);
    goto LABEL_18;
  }
LABEL_19:
  UserSessionSwitchLeaveCrit(v6);
  return v7;
}
