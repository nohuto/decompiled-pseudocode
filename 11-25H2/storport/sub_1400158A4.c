/*
 * XREFs of sub_1400158A4 @ 0x1400158A4
 * Callers:
 *     sub_1400153FC @ 0x1400153FC (sub_1400153FC.c)
 *     sub_14008562C @ 0x14008562C (sub_14008562C.c)
 *     sub_140098900 @ 0x140098900 (sub_140098900.c)
 *     sub_140099180 @ 0x140099180 (sub_140099180.c)
 *     sub_14009DFB0 @ 0x14009DFB0 (sub_14009DFB0.c)
 *     sub_14009F87C @ 0x14009F87C (sub_14009F87C.c)
 *     sub_14009FFCC @ 0x14009FFCC (sub_14009FFCC.c)
 *     DoScreenSave_0 @ 0x1400A0338 (DoScreenSave_0.c)
 *     sub_1400A070C @ 0x1400A070C (sub_1400A070C.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_1400158A4(PIRP Irp)
{
  struct _MDL *MdlAddress; // rcx

  MdlAddress = Irp->MdlAddress;
  if ( MdlAddress )
  {
    MmUnlockPages(MdlAddress);
    IoFreeMdl(Irp->MdlAddress);
  }
  IoFreeIrp(Irp);
}
