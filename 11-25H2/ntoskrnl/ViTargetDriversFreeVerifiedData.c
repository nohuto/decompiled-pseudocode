/*
 * XREFs of ViTargetDriversFreeVerifiedData @ 0x140605384
 * Callers:
 *     VfTargetDriversAdd @ 0x1403EA6B8 (VfTargetDriversAdd.c)
 *     VfTargetDriversRemove @ 0x1403EB31C (VfTargetDriversRemove.c)
 *     VfTargetDriversDisableVerifier @ 0x140B7B2FC (VfTargetDriversDisableVerifier.c)
 *     VfTargetDriversEnableVerifier @ 0x140B7B384 (VfTargetDriversEnableVerifier.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall ViTargetDriversFreeVerifiedData(void *a1)
{
  if ( a1 )
    ExFreePoolWithTag(a1, 0x44566656u);
}
