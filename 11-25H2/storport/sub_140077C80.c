/*
 * XREFs of sub_140077C80 @ 0x140077C80
 * Callers:
 *     <none>
 * Callees:
 *     sub_14000CCB0 @ 0x14000CCB0 (sub_14000CCB0.c)
 *     sub_14000CE18 @ 0x14000CE18 (sub_14000CE18.c)
 *     sub_1400556F8 @ 0x1400556F8 (sub_1400556F8.c)
 */

void __fastcall sub_140077C80(PDEVICE_OBJECT DeviceObject, struct _IO_WORKITEM **Context)
{
  _QWORD *DeviceExtension; // rdi
  IRP *v4; // rsi
  struct _IO_WORKITEM *v5; // rbx
  int v6; // eax
  int v7; // r8d

  DeviceExtension = DeviceObject->DeviceExtension;
  v4 = (IRP *)Context[1];
  v5 = *Context;
  v6 = sub_14000CCB0(DeviceExtension, (__int64)v4);
  v7 = v6;
  if ( v6 == -2147483631 )
  {
    v7 = -1073741823;
  }
  else if ( v6 >= 0 )
  {
    goto LABEL_8;
  }
  if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120
    && (HIDWORD(off_140168120->Timer) & 4) != 0
    && BYTE1(off_140168120->Timer) >= 4u )
  {
    sub_1400556F8((__int64)off_140168120->AttachedDevice, 0x1Du, (__int64)&unk_14014C778, DeviceExtension, v4, v7);
  }
LABEL_8:
  sub_14000CE18(v4, (__int64)DeviceExtension);
  if ( v5 )
    IoFreeWorkItem(v5);
  ExFreePoolWithTag(Context, 0x49576152u);
}
