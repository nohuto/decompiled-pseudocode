/*
 * XREFs of Interrupter_SetSecondaryInterrupterCount @ 0x1400499B0
 * Callers:
 *     Interrupter_DetermineSecondaryInterrupterCount @ 0x14007B29C (Interrupter_DetermineSecondaryInterrupterCount.c)
 *     Interrupter_FilterRemoveResourceRequirements @ 0x14007B6A4 (Interrupter_FilterRemoveResourceRequirements.c)
 *     Interrupter_PrepareHardware @ 0x14007B9B8 (Interrupter_PrepareHardware.c)
 * Callees:
 *     <none>
 */

void __fastcall Interrupter_SetSecondaryInterrupterCount(__int64 a1, int a2)
{
  *(_DWORD *)(a1 + 20) = a2;
}
