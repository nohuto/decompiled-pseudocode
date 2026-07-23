/*
 * XREFs of HvpViewMapReleaseChargesAndUnlockViewPages @ 0x1408BFBB4
 * Callers:
 *     HvpMappedViewConvertRegionFromLockedToCOWByPolicy @ 0x1408B5B6C (HvpMappedViewConvertRegionFromLockedToCOWByPolicy.c)
 *     HvpViewMapMakeViewRangeInvalid @ 0x1408BDCE4 (HvpViewMapMakeViewRangeInvalid.c)
 *     HvpViewMapMakeViewRangeCOWByCaller @ 0x1408BF9B8 (HvpViewMapMakeViewRangeCOWByCaller.c)
 *     HvpViewMapMakeViewRangeUnCOWByPolicy @ 0x140B0BF6C (HvpViewMapMakeViewRangeUnCOWByPolicy.c)
 * Callees:
 *     CmSiReleaseProcessLockedPagesCharge @ 0x1403C619C (CmSiReleaseProcessLockedPagesCharge.c)
 *     CmSiUnlockViewOfSection @ 0x1404C7D68 (CmSiUnlockViewOfSection.c)
 */

$241382875694CED3D471BC5892DE3337 *__fastcall HvpViewMapReleaseChargesAndUnlockViewPages(
        ULONG_PTR a1,
        void **a2,
        void *a3,
        ULONG_PTR a4)
{
  CmSiUnlockViewOfSection(a1, a2, a3, a4);
  return CmSiReleaseProcessLockedPagesCharge((__int64)a2, a4);
}
