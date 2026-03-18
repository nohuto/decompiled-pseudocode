/*
 * XREFs of UserGetCurrentConnection @ 0x140118250
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall UserGetCurrentConnection(__int64 a1, __int64 a2)
{
  return *(unsigned __int16 *)(W32GetUserSessionState(a1, a2) + 68752);
}
