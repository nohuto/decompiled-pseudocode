/*
 * XREFs of ?ImeCheckTopmost@@YAXPEAUtagWND@@@Z @ 0x14004E07C
 * Callers:
 *     ?zzzImeCanDestroyDefIME@@YAHPEAUtagWND@@0@Z @ 0x14017E968 (-zzzImeCanDestroyDefIME@@YAHPEAUtagWND@@0@Z.c)
 *     NtUserSetImeOwnerWindow @ 0x14024DCA0 (NtUserSetImeOwnerWindow.c)
 * Callees:
 *     ?ImeSetTopmost@@YAXPEAUtagWND@@H0@Z @ 0x14004DAC8 (-ImeSetTopmost@@YAXPEAUtagWND@@H0@Z.c)
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
    if ( a1[2] != *(struct tagWND **)(UserSessionState + 18904) )
      v5 = a1[15];
    if ( (*(_BYTE *)(*((_QWORD *)a1[15] + 5) + 24LL) & 8) != 0 || *((_DWORD *)a1[5] + 59) != 1 )
      v2 = 1;
    ImeSetTopmost((struct tagWND *)a1, (struct tagWND *)v2, v5);
  }
}
