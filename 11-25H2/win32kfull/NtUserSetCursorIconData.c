/*
 * XREFs of NtUserSetCursorIconData @ 0x14029E9A0
 * Callers:
 *     <none>
 * Callees:
 *     NtUserSetCursorIconDataEx @ 0x14029E9C0 (NtUserSetCursorIconDataEx.c)
 */

__int64 __fastcall NtUserSetCursorIconData(int a1, int a2, int a3, int a4)
{
  return NtUserSetCursorIconDataEx(a1, a2, a3, a4, 0);
}
