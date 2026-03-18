/*
 * XREFs of ViTargetDriversFreeVerifiedData @ 0x140641790
 * Callers:
 *     VfTargetDriversAdd @ 0x1403B7B18 (VfTargetDriversAdd.c)
 *     VfTargetDriversRemove @ 0x1403B7C48 (VfTargetDriversRemove.c)
 *     VfTargetDriversDisableVerifier @ 0x140C28F0C (VfTargetDriversDisableVerifier.c)
 *     VfTargetDriversEnableVerifier @ 0x140C28F98 (VfTargetDriversEnableVerifier.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall ViTargetDriversFreeVerifiedData(void *a1)
{
  if ( a1 )
    ExFreePoolWithTag(a1, 0x44566656u);
}
