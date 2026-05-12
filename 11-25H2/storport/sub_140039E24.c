/*
 * XREFs of sub_140039E24 @ 0x140039E24
 * Callers:
 *     sub_14004E0E8 @ 0x14004E0E8 (sub_14004E0E8.c)
 *     sub_1401AAA18 @ 0x1401AAA18 (sub_1401AAA18.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_140039E24(PIRP Irp)
{
  struct _MDL *MdlAddress; // rcx

  MdlAddress = Irp->MdlAddress;
  if ( MdlAddress )
  {
    MmUnlockPages(MdlAddress);
    IoFreeMdl(Irp->MdlAddress);
    Irp->MdlAddress = 0LL;
  }
  IoFreeIrp(Irp);
}
