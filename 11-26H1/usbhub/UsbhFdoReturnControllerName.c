/*
 * XREFs of UsbhFdoReturnControllerName @ 0x140040A5C
 * Callers:
 *     UsbhPdoInternalDeviceControl @ 0x140018B20 (UsbhPdoInternalDeviceControl.c)
 * Callees:
 *     UsbhDecPdoIoCount @ 0x140007EA0 (UsbhDecPdoIoCount.c)
 *     UsbhGetControllerName @ 0x14003BE1C (UsbhGetControllerName.c)
 */

__int64 __fastcall UsbhFdoReturnControllerName(__int64 a1, ULONG_PTR a2, IRP *a3)
{
  int ControllerName; // eax
  unsigned int v6; // ebx

  ControllerName = UsbhGetControllerName(
                     a1,
                     a3->Tail.Overlay.CurrentStackLocation->Parameters.Create.SecurityContext,
                     a3->Tail.Overlay.CurrentStackLocation->Parameters.Create.Options);
  a3->IoStatus.Status = ControllerName;
  v6 = ControllerName;
  IofCompleteRequest(a3, 0);
  UsbhDecPdoIoCount(a2, (ULONG_PTR)a3);
  return v6;
}
