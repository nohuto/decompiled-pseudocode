/*
 * XREFs of AccelpComputeHistogram @ 0x1406DF580
 * Callers:
 *     AccelCompressBuffer @ 0x1406DEB60 (AccelCompressBuffer.c)
 * Callees:
 *     AccelpSubmitWork @ 0x1402A1EE4 (AccelpSubmitWork.c)
 *     AccelpBuildDescriptorComputeHistogram @ 0x1406DF1B4 (AccelpBuildDescriptorComputeHistogram.c)
 */

__int64 __fastcall AccelpComputeHistogram(__int64 *a1, __int64 a2, int a3, __int64 a4, __int64 a5)
{
  __int64 result; // rax

  result = AccelpBuildDescriptorComputeHistogram(a1, a2, a3, a4, a5);
  if ( (int)result >= 0 )
    return AccelpSubmitWork((__int64)a1, a5);
  return result;
}
