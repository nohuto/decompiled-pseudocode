/*
 * XREFs of RIMComputePower @ 0x140195224
 * Callers:
 *     RIMComputeSpecificHighMetricValue @ 0x140192F2C (RIMComputeSpecificHighMetricValue.c)
 *     RIMRetrieveRealAngularPhysicalValues @ 0x140210B84 (RIMRetrieveRealAngularPhysicalValues.c)
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
