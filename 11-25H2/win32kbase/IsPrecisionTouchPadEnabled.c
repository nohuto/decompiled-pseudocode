/*
 * XREFs of IsPrecisionTouchPadEnabled @ 0x140151830
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IsPrecisionTouchPadEnabled(__int64 a1, __int64 a2)
{
  return *(unsigned int *)(W32GetUserSessionState(a1, a2) + 328);
}
