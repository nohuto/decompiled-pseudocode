/*
 * XREFs of IsPrecisionTouchPadEnabled @ 0x14018DBD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IsPrecisionTouchPadEnabled(int a1, int a2, int a3)
{
  return *(unsigned int *)(W32GetUserSessionState(a1, a2, a3) + 328);
}
