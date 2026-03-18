/*
 * XREFs of RtlpCountLeadingZeroes64 @ 0x140620198
 * Callers:
 *     RtlpComputeFraction @ 0x1405330F0 (RtlpComputeFraction.c)
 * Callees:
 *     <none>
 */

char __fastcall RtlpCountLeadingZeroes64(unsigned __int64 a1)
{
  __int64 v2; // rdx

  if ( !_BitScanReverse64((unsigned __int64 *)&v2, a1) )
    return 64;
  else
    return 63 - v2;
}
