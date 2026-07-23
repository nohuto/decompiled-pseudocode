/*
 * XREFs of sub_1409ED29C @ 0x1409ED29C
 * Callers:
 *     sub_140886BA8 @ 0x140886BA8 (sub_140886BA8.c)
 *     sub_1409EC968 @ 0x1409EC968 (sub_1409EC968.c)
 *     sub_1409ECDC8 @ 0x1409ECDC8 (sub_1409ECDC8.c)
 *     sub_1409ED0E8 @ 0x1409ED0E8 (sub_1409ED0E8.c)
 *     sub_1409ED65C @ 0x1409ED65C (sub_1409ED65C.c)
 * Callees:
 *     IoFreeMdl @ 0x1403A0EF0 (IoFreeMdl.c)
 *     MmUnlockPages @ 0x140410330 (MmUnlockPages.c)
 */

void __fastcall sub_1409ED29C(PMDL Mdl)
{
  if ( Mdl )
  {
    MmUnlockPages(Mdl);
    IoFreeMdl(Mdl);
  }
}
