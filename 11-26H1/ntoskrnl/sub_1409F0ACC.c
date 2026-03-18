/*
 * XREFs of sub_1409F0ACC @ 0x1409F0ACC
 * Callers:
 *     sub_1408807A8 @ 0x1408807A8 (sub_1408807A8.c)
 *     sub_1409F0198 @ 0x1409F0198 (sub_1409F0198.c)
 *     sub_1409F05F8 @ 0x1409F05F8 (sub_1409F05F8.c)
 *     sub_1409F0918 @ 0x1409F0918 (sub_1409F0918.c)
 *     sub_1409F0E8C @ 0x1409F0E8C (sub_1409F0E8C.c)
 * Callees:
 *     IoFreeMdl @ 0x14039F190 (IoFreeMdl.c)
 *     MmUnlockPages @ 0x140410C10 (MmUnlockPages.c)
 */

void __fastcall sub_1409F0ACC(PMDL Mdl)
{
  if ( Mdl )
  {
    MmUnlockPages(Mdl);
    IoFreeMdl(Mdl);
  }
}
