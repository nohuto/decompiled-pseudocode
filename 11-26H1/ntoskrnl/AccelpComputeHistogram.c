/*
 * XREFs of AccelpComputeHistogram @ 0x1406E3800
 * Callers:
 *     AccelCompressBuffer @ 0x1406E2E00 (AccelCompressBuffer.c)
 * Callees:
 *     AccelpSubmitWork @ 0x1402A1434 (AccelpSubmitWork.c)
 *     AccelpBuildDescriptorComputeHistogram @ 0x1406E3454 (AccelpBuildDescriptorComputeHistogram.c)
 */

__int64 __fastcall AccelpComputeHistogram(__int64 *a1, __int64 a2, int a3, __int64 a4, __int64 a5)
{
  __int64 result; // rax

  result = AccelpBuildDescriptorComputeHistogram(a1, a2, a3, a4, a5);
  if ( (int)result >= 0 )
    return AccelpSubmitWork((__int64)a1, a5);
  return result;
}
