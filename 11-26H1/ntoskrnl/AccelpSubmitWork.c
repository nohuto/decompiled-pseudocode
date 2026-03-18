/*
 * XREFs of AccelpSubmitWork @ 0x1402A1EE4
 * Callers:
 *     AccelFillMemory @ 0x1402A19C4 (AccelFillMemory.c)
 *     AccelCompressBuffer @ 0x1406DEB60 (AccelCompressBuffer.c)
 *     AccelDecompressBuffer @ 0x1406DED18 (AccelDecompressBuffer.c)
 *     AccelpComputeHistogram @ 0x1406DF580 (AccelpComputeHistogram.c)
 * Callees:
 *     AccelWaitForWorkCompletion @ 0x1402A1F3C (AccelWaitForWorkCompletion.c)
 *     AccelGetStatusFromCompletionRecord @ 0x1402A20AC (AccelGetStatusFromCompletionRecord.c)
 *     AccelSubmitWorkAsync @ 0x140530C4C (AccelSubmitWorkAsync.c)
 */

__int64 __fastcall AccelpSubmitWork(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // rdx

  if ( (a2 & 0xFFFFFFFFFFFFFFF0uLL) != 0 )
    return 3221225485LL;
  if ( (a2 & 4) != 0 )
    return AccelSubmitWorkAsync();
  if ( !a1 )
    return 3221225485LL;
  result = AccelSubmitWorkAsync();
  if ( (int)result >= 0 )
  {
    result = AccelWaitForWorkCompletion(a1, v4, 0LL);
    if ( (int)result >= 0 )
      return AccelGetStatusFromCompletionRecord(a1);
  }
  return result;
}
