/*
 * XREFs of NtUserInitAnsiOem @ 0x140299FC0
 * Callers:
 *     <none>
 * Callees:
 *     InitAnsiOem @ 0x140285624 (InitAnsiOem.c)
 */

__int64 __fastcall NtUserInitAnsiOem(_OWORD *a1, ULONG64 a2)
{
  __int64 inited; // rbx
  __int64 v5; // rcx

  EnterCrit(0LL, 0LL);
  inited = (int)InitAnsiOem(a1, a2);
  UserSessionSwitchLeaveCrit(v5);
  return inited;
}
