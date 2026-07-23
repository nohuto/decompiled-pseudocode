/*
 * XREFs of ViTargetDriversFreeVerifiedData @ 0x140645370
 * Callers:
 *     VfTargetDriversAdd @ 0x1403C1A18 (VfTargetDriversAdd.c)
 *     VfTargetDriversRemove @ 0x1403C1B48 (VfTargetDriversRemove.c)
 *     VfTargetDriversDisableVerifier @ 0x140C2EF1C (VfTargetDriversDisableVerifier.c)
 *     VfTargetDriversEnableVerifier @ 0x140C2EFA8 (VfTargetDriversEnableVerifier.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall ViTargetDriversFreeVerifiedData(void *a1)
{
  if ( a1 )
    ExFreePoolWithTag(a1, 0x44566656u);
}
