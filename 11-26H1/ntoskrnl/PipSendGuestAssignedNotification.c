/*
 * XREFs of PipSendGuestAssignedNotification @ 0x1407B7B78
 * Callers:
 *     PiUpdateGuestAssignedState @ 0x1409B0A78 (PiUpdateGuestAssignedState.c)
 *     PnpDeleteLockedDeviceNodes @ 0x1409B6D78 (PnpDeleteLockedDeviceNodes.c)
 * Callees:
 *     IofCallDriver @ 0x140264B10 (IofCallDriver.c)
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     IoGetAttachedDevice @ 0x1404472B0 (IoGetAttachedDevice.c)
 *     IoQueueThreadIrp @ 0x1404E9F20 (IoQueueThreadIrp.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     PpIrpAllocateDeviceUsageNotification @ 0x1407B5B94 (PpIrpAllocateDeviceUsageNotification.c)
 */

NTSTATUS __fastcall PipSendGuestAssignedNotification(__int64 a1, char a2)
{
  IRP *DeviceUsageNotification; // rax
  IRP *v5; // rbx
  NTSTATUS result; // eax
  PDEVICE_OBJECT DeviceObject; // [rsp+30h] [rbp-48h] BYREF
  int v8; // [rsp+38h] [rbp-40h]
  char v9; // [rsp+3Ch] [rbp-3Ch]
  int v10; // [rsp+48h] [rbp-30h]
  _BYTE Object[32]; // [rsp+58h] [rbp-20h] BYREF

  memset_0(&DeviceObject, 0, 0x40uLL);
  DeviceObject = IoGetAttachedDevice(*(PDEVICE_OBJECT *)(a1 + 32));
  v8 = 6;
  v9 = a2;
  DeviceUsageNotification = PpIrpAllocateDeviceUsageNotification((__int64)&DeviceObject);
  v5 = DeviceUsageNotification;
  if ( !DeviceUsageNotification )
    return -1073741801;
  IoQueueThreadIrp(DeviceUsageNotification);
  result = IofCallDriver(DeviceObject, v5);
  if ( result == 259 )
  {
    KeWaitForSingleObject(Object, Executive, 0, 0, 0LL);
    return v10;
  }
  return result;
}
