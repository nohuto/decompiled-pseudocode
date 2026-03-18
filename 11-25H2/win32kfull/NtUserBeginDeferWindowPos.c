/*
 * XREFs of NtUserBeginDeferWindowPos @ 0x14004E2A0
 * Callers:
 *     <none>
 * Callees:
 *     _BeginDeferWindowPos @ 0x14004E2E8 (_BeginDeferWindowPos.c)
 */

__int64 __fastcall NtUserBeginDeferWindowPos(unsigned int a1)
{
  __int64 *v2; // rax
  __int64 v3; // rbx

  EnterCrit(0LL, 0LL);
  v2 = (__int64 *)BeginDeferWindowPos(a1);
  v3 = 0LL;
  if ( v2 )
    v3 = *v2;
  UserSessionSwitchLeaveCrit();
  return v3;
}
