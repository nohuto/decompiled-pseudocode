/*
 * XREFs of HamConnectToServer @ 0x180011A80
 * Callers:
 *     <none>
 * Callees:
 *     HamConnectToServerEx @ 0x180011AB0 (HamConnectToServerEx.c)
 */

__int64 __fastcall HamConnectToServer(int a1, __int64 a2)
{
  return HamConnectToServerEx(a1, 0, 0, 0, 0LL, a2);
}
