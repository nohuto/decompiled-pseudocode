/*
 * XREFs of ?ImeCheckTopmost@@YAXPEAUtagWND@@@Z @ 0x14017A93C
 * Callers:
 *     NtUserSetImeOwnerWindow @ 0x140179ED0 (NtUserSetImeOwnerWindow.c)
 *     ?zzzImeCanDestroyDefIME@@YAHPEAUtagWND@@0@Z @ 0x14017AD20 (-zzzImeCanDestroyDefIME@@YAHPEAUtagWND@@0@Z.c)
 * Callees:
 *     ?ImeSetTopmost@@YAXPEAUtagWND@@H0@Z @ 0x14012C99C (-ImeSetTopmost@@YAXPEAUtagWND@@H0@Z.c)
 */

void __fastcall ImeCheckTopmost(struct tagWND **a1, __int64 a2)
{
  unsigned int v2; // edi
  __int64 UserSessionState; // rax
  struct tagWND *v5; // r8

  v2 = 0;
  if ( a1[15] )
  {
    UserSessionState = W32GetUserSessionState(a1, a2);
    v5 = 0LL;
    if ( a1[2] != *(struct tagWND **)(UserSessionState + 18944) )
      v5 = a1[15];
    if ( (*(_BYTE *)(*((_QWORD *)a1[15] + 5) + 24LL) & 8) != 0 || *((_DWORD *)a1[5] + 59) != 1 )
      v2 = 1;
    ImeSetTopmost((struct tagWND *)a1, (struct tagWND *)v2, v5);
  }
}
