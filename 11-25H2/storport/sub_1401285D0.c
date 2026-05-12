/*
 * XREFs of sub_1401285D0 @ 0x1401285D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14012702C @ 0x14012702C (sub_14012702C.c)
 *     sub_14012A2CC @ 0x14012A2CC (sub_14012A2CC.c)
 *     sub_14012AF50 @ 0x14012AF50 (sub_14012AF50.c)
 */

void __fastcall sub_1401285D0(PDEVICE_OBJECT DeviceObject, IRP *Context)
{
  PVOID DeviceExtension; // rbx
  union _LARGE_INTEGER Interval; // [rsp+30h] [rbp+8h] BYREF

  DeviceExtension = DeviceObject->DeviceExtension;
  Interval.QuadPart = 0LL;
  if ( (unsigned int)sub_14012A2CC(DeviceExtension) == -2147483631 )
  {
    Interval.QuadPart = -1000000LL;
    KeDelayExecutionThread(0, 0, &Interval);
    sub_14012A2CC(DeviceExtension);
  }
  sub_14012AF50(DeviceExtension);
  sub_14012702C((__int64)DeviceExtension, Context);
}
