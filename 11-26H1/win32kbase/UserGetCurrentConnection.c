/*
 * XREFs of UserGetCurrentConnection @ 0x14014E350
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall UserGetCurrentConnection(int a1, int a2, int a3)
{
  return *(unsigned __int16 *)(W32GetUserSessionState(a1, a2, a3) + 68744);
}
