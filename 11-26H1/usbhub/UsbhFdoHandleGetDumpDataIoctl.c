/*
 * XREFs of UsbhFdoHandleGetDumpDataIoctl @ 0x14004026C
 * Callers:
 *     UsbhPdoInternalDeviceControl @ 0x140018B20 (UsbhPdoInternalDeviceControl.c)
 * Callees:
 *     UsbhDecPdoIoCount @ 0x140007EA0 (UsbhDecPdoIoCount.c)
 *     PdoExt @ 0x140016350 (PdoExt.c)
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     Usbh_HubDerefDeviceHandle @ 0x140030108 (Usbh_HubDerefDeviceHandle.c)
 *     UsbhGetDeviceHandle @ 0x140038888 (UsbhGetDeviceHandle.c)
 */

__int64 __fastcall UsbhFdoHandleGetDumpDataIoctl(_UNICODE_STRING *a1, ULONG_PTR a2, IRP *a3)
{
  _DWORD *v6; // rax
  unsigned int v7; // ebx
  _IRP *MasterIrp; // rbx
  PDEVICE_OBJECT *v9; // rax
  __int64 v11; // [rsp+20h] [rbp-18h] BYREF
  __int64 DeviceHandle; // [rsp+28h] [rbp-10h]

  v6 = PdoExt(a2);
  if ( a3->Tail.Overlay.CurrentStackLocation->Parameters.Create.Options >= 0x20 )
  {
    MasterIrp = a3->AssociatedIrp.MasterIrp;
    v11 = *((_QWORD *)v6 + 145);
    DeviceHandle = UsbhGetDeviceHandle((__int64)a1, a1);
    if ( DeviceHandle )
    {
      MasterIrp->AssociatedIrp.MasterIrp = (_IRP *)&v11;
      v9 = (PDEVICE_OBJECT *)FdoExt((__int64)a1);
      ++a3->CurrentLocation;
      ++a3->Tail.Overlay.CurrentStackLocation;
      v7 = IofCallDriver(v9[152], a3);
      Usbh_HubDerefDeviceHandle((__int64)a1, DeviceHandle, (__int64)a1, 0x48447472u);
      goto LABEL_7;
    }
    v7 = -1073741823;
  }
  else
  {
    v7 = -1073741789;
  }
  a3->IoStatus.Status = v7;
  IofCompleteRequest(a3, 0);
LABEL_7:
  UsbhDecPdoIoCount(a2, (ULONG_PTR)a3);
  return v7;
}
