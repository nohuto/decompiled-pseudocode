/*
 * XREFs of sub_14000CB10 @ 0x14000CB10
 * Callers:
 *     <none>
 * Callees:
 *     sub_14000C348 @ 0x14000C348 (sub_14000C348.c)
 *     sub_14000CCB0 @ 0x14000CCB0 (sub_14000CCB0.c)
 *     sub_14000CE18 @ 0x14000CE18 (sub_14000CE18.c)
 *     sub_1400143E0 @ 0x1400143E0 (sub_1400143E0.c)
 *     sub_140020090 @ 0x140020090 (sub_140020090.c)
 *     sub_1400556F8 @ 0x1400556F8 (sub_1400556F8.c)
 *     sub_1400680F0 @ 0x1400680F0 (sub_1400680F0.c)
 *     sub_1400771C8 @ 0x1400771C8 (sub_1400771C8.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

__int64 __fastcall sub_14000CB10(PDEVICE_OBJECT DeviceObject, IRP *a2)
{
  _QWORD *DeviceExtension; // rsi
  int Status; // edi
  int v6; // eax
  struct _IO_WORKITEM *WorkItem; // rbp
  struct _IO_WORKITEM **v9; // rax
  struct _IO_WORKITEM **v10; // r14
  int v11; // edx
  __int128 v12; // [rsp+40h] [rbp-48h] BYREF

  DeviceExtension = DeviceObject->DeviceExtension;
  if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120
    && (HIDWORD(off_140168120->Timer) & 4) != 0
    && BYTE1(off_140168120->Timer) >= 4u )
  {
    sub_1400680F0(off_140168120->AttachedDevice, 30LL, &unk_14014C778, DeviceExtension, a2);
  }
  if ( a2->PendingReturned )
    a2->Tail.Overlay.CurrentStackLocation->Control |= 1u;
  Status = a2->IoStatus.Status;
  if ( Status < 0 )
    goto LABEL_11;
  if ( (unsigned __int8)sub_140020090(DeviceExtension + 47, 6LL) )
  {
    v6 = sub_14000CCB0(DeviceExtension, a2);
    Status = v6;
    if ( v6 != -2147483631 )
    {
      if ( v6 >= 0 )
      {
LABEL_8:
        sub_14000CE18(a2);
        return 3221225494LL;
      }
LABEL_11:
      if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120
        && (HIDWORD(off_140168120->Timer) & 4) != 0
        && BYTE1(off_140168120->Timer) >= 4u )
      {
        sub_1400556F8(off_140168120->AttachedDevice, 31LL, &unk_14014C778, DeviceExtension, a2, Status);
      }
      goto LABEL_8;
    }
    WorkItem = IoAllocateWorkItem(DeviceObject);
    v9 = (struct _IO_WORKITEM **)sub_1400143E0(64LL, 16LL, 1230463314LL, DeviceObject);
    v10 = v9;
    if ( !WorkItem || !v9 )
    {
      Status = -1073741670;
      if ( WorkItem )
        IoFreeWorkItem(WorkItem);
      if ( v10 )
        ExFreePoolWithTag(v10, 0x49576152u);
      goto LABEL_11;
    }
    *v9 = WorkItem;
    v9[1] = (struct _IO_WORKITEM *)a2;
    IoQueueWorkItem(WorkItem, sub_140077C80, NormalWorkQueue, v9);
    if ( byte_140168DAA )
    {
      v12 = 0LL;
      IoGetActivityIdIrp(a2, &v12);
      if ( (byte_1401694F6 & 0x40) != 0 )
        sub_1400771C8(
          (unsigned int)L"PowerUp",
          v11,
          (unsigned int)&v12,
          DeviceExtension[590],
          *((_DWORD *)DeviceExtension + 14),
          (__int64)(DeviceExtension + 633),
          17,
          (__int64)L"PowerUp");
    }
  }
  else
  {
    Status = sub_14000C348((__int64)DeviceObject, (__int64)a2, (__int64)sub_14000BF40);
    if ( Status < 0 )
      goto LABEL_11;
  }
  if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120
    && (HIDWORD(off_140168120->Timer) & 4) != 0
    && BYTE1(off_140168120->Timer) >= 4u )
  {
    sub_1400556F8(off_140168120->AttachedDevice, 32LL, &unk_14014C778, DeviceExtension, a2, Status);
  }
  return 3221225494LL;
}
