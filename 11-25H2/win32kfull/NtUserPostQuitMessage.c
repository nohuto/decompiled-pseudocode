/*
 * XREFs of NtUserPostQuitMessage @ 0x1401C7D60
 * Callers:
 *     <none>
 * Callees:
 *     _PostQuitMessage @ 0x1401C7DA0 (_PostQuitMessage.c)
 */

__int64 __fastcall NtUserPostQuitMessage(unsigned int a1)
{
  __int64 v2; // rbx
  __int64 v3; // rcx

  EnterCrit(0LL, 0LL);
  v2 = (int)PostQuitMessage(a1);
  UserSessionSwitchLeaveCrit(v3);
  return v2;
}
