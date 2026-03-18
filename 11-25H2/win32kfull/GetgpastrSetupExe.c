/*
 * XREFs of GetgpastrSetupExe @ 0x140283710
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall GetgpastrSetupExe(__int64 *a1, __int64 a2)
{
  __int64 result; // rax

  result = W32GetUserSessionState(a1, a2) + 68424;
  *a1 = result;
  return result;
}
