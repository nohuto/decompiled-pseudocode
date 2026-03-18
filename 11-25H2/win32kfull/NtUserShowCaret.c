/*
 * XREFs of NtUserShowCaret @ 0x1401581E0
 * Callers:
 *     <none>
 * Callees:
 *     zzzShowCaret @ 0x140158430 (zzzShowCaret.c)
 */

__int64 __fastcall NtUserShowCaret(__int64 a1)
{
  int v2; // ebx
  __int64 v3; // rax
  __int64 v4; // rcx

  EnterCrit(0LL, 0LL);
  v2 = 0;
  if ( !a1 )
  {
    v3 = 0LL;
    goto LABEL_5;
  }
  v3 = ValidateHwnd(a1);
  if ( v3 )
LABEL_5:
    v2 = zzzShowCaret(v3);
  UserSessionSwitchLeaveCrit(v4);
  return v2;
}
