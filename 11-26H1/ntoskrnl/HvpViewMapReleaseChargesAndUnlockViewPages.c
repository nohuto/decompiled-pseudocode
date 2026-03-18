/*
 * XREFs of HvpViewMapReleaseChargesAndUnlockViewPages @ 0x1408B95E4
 * Callers:
 *     HvpViewMapMakeViewRangeInvalid @ 0x1408B7714 (HvpViewMapMakeViewRangeInvalid.c)
 *     HvpViewMapMakeViewRangeCOWByCaller @ 0x1408B93E8 (HvpViewMapMakeViewRangeCOWByCaller.c)
 *     HvpMappedViewConvertRegionFromLockedToCOWByPolicy @ 0x140AD65B8 (HvpMappedViewConvertRegionFromLockedToCOWByPolicy.c)
 *     HvpViewMapMakeViewRangeUnCOWByPolicy @ 0x140B0A1AC (HvpViewMapMakeViewRangeUnCOWByPolicy.c)
 * Callees:
 *     CmSiReleaseProcessLockedPagesCharge @ 0x1403BC32C (CmSiReleaseProcessLockedPagesCharge.c)
 *     CmSiUnlockViewOfSection @ 0x1404CE338 (CmSiUnlockViewOfSection.c)
 */

$7A85BAF4F1FA08634C1C4A3E45B775B3 *__fastcall HvpViewMapReleaseChargesAndUnlockViewPages(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        __int64 a4)
{
  CmSiUnlockViewOfSection(a1, a2, a3, a4);
  return CmSiReleaseProcessLockedPagesCharge((__int64)a2, a4);
}
