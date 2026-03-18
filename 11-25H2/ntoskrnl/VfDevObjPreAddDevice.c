/*
 * XREFs of VfDevObjPreAddDevice @ 0x140B99678
 * Callers:
 *     PpvUtilCallAddDevice @ 0x1404A8D58 (PpvUtilCallAddDevice.c)
 * Callees:
 *     MmIsDriverVerifying @ 0x14049F5C0 (MmIsDriverVerifying.c)
 *     VfFilterAttach @ 0x140B8CDB0 (VfFilterAttach.c)
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
