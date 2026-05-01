/*
 * XREFs of HamTerminateActivityHost @ 0x18000F3C0
 * Callers:
 *     <none>
 * Callees:
 *     HamTerminateActivityHostEx @ 0x18000F3F0 (HamTerminateActivityHostEx.c)
 */

__int64 __fastcall HamTerminateActivityHost(int a1, int a2, int a3, int a4)
{
  return HamTerminateActivityHostEx(a1, a2, a3, a4, 0LL, 0, 0);
}
