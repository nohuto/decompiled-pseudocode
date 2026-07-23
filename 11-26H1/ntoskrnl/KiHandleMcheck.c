/*
 * XREFs of KiHandleMcheck @ 0x1405EE370
 * Callers:
 *     KxMcheckAbort @ 0x14073D300 (KxMcheckAbort.c)
 * Callees:
 *     HalHandleMcheck @ 0x1405805D0 (HalHandleMcheck.c)
 *     KiFlushCurrentRsb @ 0x140741D80 (KiFlushCurrentRsb.c)
 */

__int64 __fastcall KiHandleMcheck(__int64 a1, __int64 a2, int *a3)
{
  int v3; // edx
  int v4; // ecx
  int v5; // r8d
  int v6; // r9d
  __int64 result; // rax

  HalHandleMcheck(a1, a2, a3);
  result = KiSpeculationFeatures;
  if ( (KiSpeculationFeatures & 0x20000000000LL) != 0 )
    result = KiFlushCurrentRsb(v4, v3, v5, v6);
  _mm_lfence();
  return result;
}
