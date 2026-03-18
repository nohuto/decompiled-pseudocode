/*
 * XREFs of RIMComputePower @ 0x1401577FC
 * Callers:
 *     RIMComputeSpecificHighMetricValue @ 0x1401555B0 (RIMComputeSpecificHighMetricValue.c)
 *     RIMRetrieveRealAngularPhysicalValues @ 0x1401F5AF4 (RIMRetrieveRealAngularPhysicalValues.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RIMComputePower(__int16 a1)
{
  __int64 result; // rax
  __int16 v2; // dx
  int i; // r8d

  result = 1LL;
  v2 = -a1;
  if ( a1 > 0 )
    v2 = a1;
  for ( i = 10; v2; v2 >>= 1 )
  {
    if ( (v2 & 1) != 0 )
      result = (unsigned int)(i * result);
    i *= i;
  }
  return result;
}
