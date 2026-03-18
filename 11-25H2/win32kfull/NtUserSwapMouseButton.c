/*
 * XREFs of NtUserSwapMouseButton @ 0x140203D90
 * Callers:
 *     <none>
 * Callees:
 *     ?_SwapMouseButton@@YAHH@Z @ 0x140203DD0 (-_SwapMouseButton@@YAHH@Z.c)
 */

__int64 __fastcall NtUserSwapMouseButton(int a1)
{
  __int64 v2; // rbx
  __int64 v3; // rcx

  EnterCrit(0LL, 0LL);
  v2 = (int)_SwapMouseButton(a1);
  UserSessionSwitchLeaveCrit(v3);
  return v2;
}
