/*
 * XREFs of PoDeletePowerLimitRequest @ 0x1407CD420
 * Callers:
 *     <none>
 * Callees:
 *     PopFreePowerLimitRequest @ 0x1407CDE7C (PopFreePowerLimitRequest.c)
 */

__int64 __fastcall PoDeletePowerLimitRequest(void *a1)
{
  if ( !a1 )
    return 3221225485LL;
  PopFreePowerLimitRequest(a1);
  return 0LL;
}
