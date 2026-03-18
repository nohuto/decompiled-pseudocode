/*
 * XREFs of CmSiProtectViewOfSection @ 0x1404A2CD4
 * Callers:
 *     HvpViewMapMigrateCOWData @ 0x14085C9CC (HvpViewMapMigrateCOWData.c)
 *     HvpViewMapMakeViewRangeInvalid @ 0x1408B7714 (HvpViewMapMakeViewRangeInvalid.c)
 *     HvpViewMapCreateView @ 0x1408B868C (HvpViewMapCreateView.c)
 *     HvpViewMapMakeViewRangeUnCOWByCaller @ 0x1408B88B4 (HvpViewMapMakeViewRangeUnCOWByCaller.c)
 *     HvpViewMapMakeViewRangeReadOnly @ 0x1408B92F8 (HvpViewMapMakeViewRangeReadOnly.c)
 *     HvpViewMapMakeViewRangeCOWByCaller @ 0x1408B93E8 (HvpViewMapMakeViewRangeCOWByCaller.c)
 *     HvpViewMapMakeViewRangeValid @ 0x1408B9648 (HvpViewMapMakeViewRangeValid.c)
 *     HvpMappedViewConvertRegionFromLockedToCOWByPolicy @ 0x140AD65B8 (HvpMappedViewConvertRegionFromLockedToCOWByPolicy.c)
 *     HvpViewMapMakeViewRangeUnCOWByPolicy @ 0x140B0A1AC (HvpViewMapMakeViewRangeUnCOWByPolicy.c)
 * Callees:
 *     ZwProtectVirtualMemory @ 0x140723DF0 (ZwProtectVirtualMemory.c)
 */

__int64 __fastcall CmSiProtectViewOfSection(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        __int64 a6)
{
  __int64 v6; // rcx
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF
  __int64 v9; // [rsp+48h] [rbp+10h] BYREF

  v8 = a1;
  v6 = *a2;
  v9 = a3;
  v8 = a4;
  return ZwProtectVirtualMemory(v6, &v9, &v8, a5, a6);
}
