/*
 * XREFs of PoDeletePowerLimitRequest @ 0x1407CA380
 * Callers:
 *     <none>
 * Callees:
 *     PopFreePowerLimitRequest @ 0x1407CADDC (PopFreePowerLimitRequest.c)
 */

__int64 __fastcall PoDeletePowerLimitRequest(void *a1)
{
  if ( !a1 )
    return 3221225485LL;
  PopFreePowerLimitRequest(a1);
  return 0LL;
}
