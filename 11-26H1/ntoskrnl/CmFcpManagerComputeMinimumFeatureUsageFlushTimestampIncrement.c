/*
 * XREFs of CmFcpManagerComputeMinimumFeatureUsageFlushTimestampIncrement @ 0x140B33EEC
 * Callers:
 *     CmFcManagerFlushFeatureUsage @ 0x140B33E0C (CmFcManagerFlushFeatureUsage.c)
 * Callees:
 *     <none>
 */

char __fastcall CmFcpManagerComputeMinimumFeatureUsageFlushTimestampIncrement(char a1, char a2)
{
  if ( a1 )
    return (a2 != 0) + 2;
  else
    return a2 != 0;
}
