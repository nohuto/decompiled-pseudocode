/*
 * XREFs of sub_140051AC8 @ 0x140051AC8
 * Callers:
 *     sub_14003B590 @ 0x14003B590 (sub_14003B590.c)
 *     sub_1400B7E68 @ 0x1400B7E68 (sub_1400B7E68.c)
 *     sub_1400B9DF0 @ 0x1400B9DF0 (sub_1400B9DF0.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall sub_140051AC8(
        PDEVICE_OBJECT DeviceObject,
        int a2,
        unsigned int a3,
        int *a4,
        ULONG InputBufferLength)
{
  int v6; // r9d
  NTSTATUS result; // eax
  int v9; // ecx
  PIRP v10; // rax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-38h] BYREF
  struct _KEVENT Event; // [rsp+60h] [rbp-28h] BYREF

  v6 = 49;
  IoStatusBlock = 0LL;
  memset(&Event, 0, sizeof(Event));
  if ( InputBufferLength < (unsigned __int64)a3 + 48 )
    return -1073741789;
  v9 = *(_DWORD *)DeviceObject->DeviceExtension;
  if ( v9 == 1431193940 || v9 == 1314278989 )
    v6 = 50;
  a4[1] = 0;
  *a4 = v6;
  a4[5] = 0;
  a4[4] = a2;
  a4[7] = a3;
  a4[2] = 3;
  a4[3] = 2;
  a4[6] = 40;
  KeInitializeEvent(&Event, NotificationEvent, 0);
  v10 = IoBuildDeviceIoControlRequest(
          0x2D1400u,
          DeviceObject,
          a4,
          InputBufferLength,
          a4,
          InputBufferLength,
          0,
          &Event,
          &IoStatusBlock);
  if ( !v10 )
    return -1073741670;
  v10->IoStatus.Status = -1073741637;
  result = IofCallDriver(DeviceObject, v10);
  if ( result == 259 )
  {
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    result = IoStatusBlock.Status;
  }
  if ( result >= 0 && (*a4 != 48 || a4[1] != 48 || (unsigned int)a4[6] < 0x28) )
    return -1073741637;
  return result;
}
