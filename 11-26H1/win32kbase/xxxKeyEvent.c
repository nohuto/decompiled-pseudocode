/*
 * XREFs of xxxKeyEvent @ 0x140122E60
 * Callers:
 *     <none>
 * Callees:
 *     xxxKeyEventEx @ 0x140123104 (xxxKeyEventEx.c)
 */

__int64 __fastcall xxxKeyEvent(int a1, int a2, int a3, int a4, __int64 a5, __int64 a6, char a7, char a8)
{
  return xxxKeyEventEx(a1, a2, a3, a4, a5, a6, a7, a8, 0LL, 0LL);
}
