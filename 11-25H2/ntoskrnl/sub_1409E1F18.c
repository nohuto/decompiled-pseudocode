/*
 * XREFs of sub_1409E1F18 @ 0x1409E1F18
 * Callers:
 *     sub_1407F0D20 @ 0x1407F0D20 (sub_1407F0D20.c)
 *     sub_1409E1778 @ 0x1409E1778 (sub_1409E1778.c)
 *     sub_1409E1A4C @ 0x1409E1A4C (sub_1409E1A4C.c)
 *     sub_1409E1D68 @ 0x1409E1D68 (sub_1409E1D68.c)
 *     sub_1409E2780 @ 0x1409E2780 (sub_1409E2780.c)
 * Callees:
 *     MmUnlockPages @ 0x1402D4670 (MmUnlockPages.c)
 *     IoFreeMdl @ 0x1402D5960 (IoFreeMdl.c)
 */

void __fastcall sub_1409E1F18(PMDL Mdl)
{
  if ( Mdl )
  {
    MmUnlockPages(Mdl);
    IoFreeMdl(Mdl);
  }
}
