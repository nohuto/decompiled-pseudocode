/*
 * XREFs of HamTerminateActivityHost @ 0x180010080
 * Callers:
 *     <none>
 * Callees:
 *     HamTerminateActivityHostEx @ 0x1800100B0 (HamTerminateActivityHostEx.c)
 */

__int64 __fastcall HamTerminateActivityHost(int a1, int a2, int a3, int a4)
{
  return HamTerminateActivityHostEx(a1, a2, a3, a4, 0LL, 0, 0);
}
