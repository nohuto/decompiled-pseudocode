/*
 * XREFs of sub_140129500 @ 0x140129500
 * Callers:
 *     <none>
 * Callees:
 *     sub_140128F6C @ 0x140128F6C (sub_140128F6C.c)
 *     sub_14012A2CC @ 0x14012A2CC (sub_14012A2CC.c)
 */

void __fastcall sub_140129500(PDEVICE_OBJECT DeviceObject, __int64 Context)
{
  PVOID DeviceExtension; // rdi
  union _LARGE_INTEGER Interval; // [rsp+30h] [rbp+8h] BYREF

  DeviceExtension = DeviceObject->DeviceExtension;
  Interval.QuadPart = 0LL;
  if ( (unsigned int)sub_14012A2CC(DeviceExtension) == -2147483631 )
  {
    Interval.QuadPart = -1000000LL;
    KeDelayExecutionThread(0, 0, &Interval);
    sub_14012A2CC(DeviceExtension);
  }
  sub_140128F6C((__int64)DeviceExtension, Context);
}
