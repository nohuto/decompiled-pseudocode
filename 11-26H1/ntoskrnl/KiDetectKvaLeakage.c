/*
 * XREFs of KiDetectKvaLeakage @ 0x1405F7100
 * Callers:
 *     KiSetFeatureBits @ 0x140BF74E8 (KiSetFeatureBits.c)
 * Callees:
 *     KiDetectHardwareSpecControlFeatures @ 0x1405F1AD8 (KiDetectHardwareSpecControlFeatures.c)
 *     KiIsBranchConfusionMitigationDesired @ 0x1405F2158 (KiIsBranchConfusionMitigationDesired.c)
 *     KiIsBranchConfusionMitigationSupported @ 0x1405F2198 (KiIsBranchConfusionMitigationSupported.c)
 *     KiIsTsaMitigationDesired @ 0x1405F23A0 (KiIsTsaMitigationDesired.c)
 *     KiIsTsaMitigationSupported @ 0x1405F23BC (KiIsTsaMitigationSupported.c)
 *     SpcDetectKvaLeakage @ 0x140C01E7C (SpcDetectKvaLeakage.c)
 */

__int64 __fastcall KiDetectKvaLeakage(__int64 a1)
{
  __int64 v2; // rcx
  __int128 v4; // [rsp+20h] [rbp-20h] BYREF
  __int64 v5; // [rsp+30h] [rbp-10h]

  v5 = 0LL;
  v4 = 0LL;
  KiDetectHardwareSpecControlFeatures(a1, 0LL, &v4, 0LL);
  if ( (v4 & 0x8000) != 0 && (unsigned int)KiIsBranchConfusionMitigationDesired(a1, &v4) )
    KiIsBranchConfusionMitigationSupported(v2, &v4);
  v5 = 0LL;
  v4 = 0LL;
  KiDetectHardwareSpecControlFeatures(a1, 0LL, &v4, 0LL);
  if ( (v4 & 0x8000000) != 0 && (unsigned int)KiIsTsaMitigationDesired() )
    KiIsTsaMitigationSupported(a1);
  return SpcDetectKvaLeakage(*(unsigned int *)(a1 + 36));
}
