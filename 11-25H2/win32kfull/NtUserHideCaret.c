/*
 * XREFs of NtUserHideCaret @ 0x140158110
 * Callers:
 *     <none>
 * Callees:
 *     zzzInternalHideCaret @ 0x140052D7C (zzzInternalHideCaret.c)
 *     ?UT_CaretSet@@YAHPEAUtagWND@@@Z @ 0x140158458 (-UT_CaretSet@@YAHPEAUtagWND@@@Z.c)
 */

__int64 __fastcall NtUserHideCaret(__int64 a1)
{
  __int64 v2; // rbx
  struct tagWND *v3; // rax
  __int64 v4; // rcx
  __int64 v6; // rdx

  EnterCrit(0LL, 0LL);
  v2 = 0LL;
  if ( a1 )
  {
    v3 = (struct tagWND *)ValidateHwnd(a1);
    if ( !v3 )
      goto LABEL_3;
  }
  else
  {
    v3 = 0LL;
  }
  if ( (unsigned int)UT_CaretSet(v3) )
  {
    zzzInternalHideCaret(v4, v6);
    v2 = 1LL;
  }
LABEL_3:
  UserSessionSwitchLeaveCrit(v4);
  return v2;
}
