/*
 * XREFs of sub_1400781F4 @ 0x1400781F4
 * Callers:
 *     sub_14009641C @ 0x14009641C (sub_14009641C.c)
 *     sub_140196914 @ 0x140196914 (sub_140196914.c)
 *     sub_1401AFF24 @ 0x1401AFF24 (sub_1401AFF24.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall sub_1400781F4(PDEVICE_OBJECT DeviceObject, LARGE_INTEGER a2)
{
  PIRP v4; // rax
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  NTSTATUS result; // eax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+40h] [rbp-38h] BYREF
  struct _KEVENT Event; // [rsp+50h] [rbp-28h] BYREF

  *(_OWORD *)a2.QuadPart = 0LL;
  *(_OWORD *)(a2.QuadPart + 16) = 0LL;
  *(_QWORD *)(a2.QuadPart + 32) = 0LL;
  memset(&Event, 0, sizeof(Event));
  IoStatusBlock = 0LL;
  KeInitializeEvent(&Event, NotificationEvent, 0);
  v4 = IoBuildSynchronousFsdRequest(0x1Bu, DeviceObject, 0LL, 0, 0LL, &Event, &IoStatusBlock);
  if ( !v4 )
    return -1073741670;
  CurrentStackLocation = v4->Tail.Overlay.CurrentStackLocation;
  v4->IoStatus.Information = 0LL;
  v4->IoStatus.Status = -1073741637;
  CurrentStackLocation[-1].Parameters.CreatePipe.Parameters = 0LL;
  CurrentStackLocation[-1].Parameters.WMI.ProviderId = (ULONG_PTR)&unk_14014C518;
  CurrentStackLocation[-1].MinorFunction = 8;
  CurrentStackLocation[-1].Parameters.Create.Options = 65576;
  CurrentStackLocation[-1].Parameters.Read.ByteOffset = a2;
  result = IofCallDriver(DeviceObject, v4);
  if ( result == 259 )
  {
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    return IoStatusBlock.Status;
  }
  return result;
}
