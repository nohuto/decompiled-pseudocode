/*
 * XREFs of SetFFHThrottleState @ 0x140005BA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall SetFFHThrottleState(__int64 a1, unsigned __int64 a2)
{
  __writemsr(0x19Au, a2);
  return 0LL;
}
