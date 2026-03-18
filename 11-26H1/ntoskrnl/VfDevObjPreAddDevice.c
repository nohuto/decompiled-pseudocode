/*
 * XREFs of VfDevObjPreAddDevice @ 0x140C48024
 * Callers:
 *     PpvUtilCallAddDevice @ 0x1404E7F24 (PpvUtilCallAddDevice.c)
 * Callees:
 *     MmIsDriverVerifying @ 0x1403B79E0 (MmIsDriverVerifying.c)
 *     VfFilterAttach @ 0x140C3BD80 (VfFilterAttach.c)
 */

void __fastcall VfDevObjPreAddDevice(
        PDEVICE_OBJECT TargetDevice,
        struct _DRIVER_OBJECT *DriverObject,
        __int64 a3,
        int a4)
{
  int v6; // edx

  if ( MmIsDriverVerifying(DriverObject) && (MmVerifierData & 0x10) != 0 )
  {
    v6 = 3;
    if ( a4 != 4 )
      v6 = a4;
    VfFilterAttach(TargetDevice, v6);
  }
}
