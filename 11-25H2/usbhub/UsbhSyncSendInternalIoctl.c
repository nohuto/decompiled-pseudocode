/*
 * XREFs of UsbhSyncSendInternalIoctl @ 0x14000A740
 * Callers:
 *     UsbhConfigureUsbHub @ 0x14003B208 (UsbhConfigureUsbHub.c)
 *     UsbhGetTopOfBusStack @ 0x14003D5A0 (UsbhGetTopOfBusStack.c)
 *     UsbhInitialize @ 0x14003D6A0 (UsbhInitialize.c)
 *     UsbhLogStartFailure @ 0x14003DDC8 (UsbhLogStartFailure.c)
 *     UsbhResetIrqPipe @ 0x1400483F4 (UsbhResetIrqPipe.c)
 *     UsbhResetHubUpstreamPort @ 0x14004C8C0 (UsbhResetHubUpstreamPort.c)
 * Callees:
 *     FdoExt @ 0x140009560 (FdoExt.c)
 */

NTSTATUS __fastcall UsbhSyncSendInternalIoctl(__int64 a1, ULONG a2, unsigned __int64 a3, _UNICODE_STRING *a4)
{
  PDEVICE_OBJECT *v7; // rdi
  PIRP v8; // rax
  IRP *v9; // rdx
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  NTSTATUS result; // eax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-38h] BYREF
  struct _KEVENT Event; // [rsp+60h] [rbp-28h] BYREF

  memset(&Event, 0, sizeof(Event));
  IoStatusBlock = 0LL;
  v7 = (PDEVICE_OBJECT *)FdoExt(a1);
  KeInitializeEvent(&Event, NotificationEvent, 0);
  v8 = IoBuildDeviceIoControlRequest(a2, v7[151], 0LL, 0, 0LL, 0, 1u, &Event, &IoStatusBlock);
  v9 = v8;
  if ( !v8 )
    return -1073741670;
  CurrentStackLocation = v8->Tail.Overlay.CurrentStackLocation;
  CurrentStackLocation[-1].Parameters.WMI.ProviderId = a3;
  CurrentStackLocation[-1].Parameters.QueryDirectory.FileName = a4;
  result = IofCallDriver(v7[151], v9);
  if ( result == 259 )
  {
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    return IoStatusBlock.Status;
  }
  return result;
}
