/*
 * XREFs of VfDevObjPostAddDevice @ 0x140B996C4
 * Callers:
 *     PpvUtilCallAddDevice @ 0x1404A8D58 (PpvUtilCallAddDevice.c)
 * Callees:
 *     MmIsDriverVerifying @ 0x14049F5C0 (MmIsDriverVerifying.c)
 *     VfFilterAttach @ 0x140B8CDB0 (VfFilterAttach.c)
 */

void __fastcall VfDevObjPostAddDevice(
        PDEVICE_OBJECT TargetDevice,
        struct _DRIVER_OBJECT *DriverObject,
        __int64 a3,
        int a4,
        int a5)
{
  int v7; // edx

  if ( a5 >= 0 && (MmVerifierData & 0x10) != 0 && MmIsDriverVerifying(DriverObject) )
  {
    v7 = 5;
    if ( a4 != 4 )
      v7 = a4;
    VfFilterAttach(TargetDevice, v7);
  }
}
