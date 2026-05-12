/*
 * XREFs of sub_14012D270 @ 0x14012D270
 * Callers:
 *     <none>
 * Callees:
 *     sub_14012D03C @ 0x14012D03C (sub_14012D03C.c)
 */

void __fastcall sub_14012D270(PDEVICE_OBJECT DeviceObject, _QWORD *Context)
{
  _InterlockedExchange((volatile __int32 *)(Context[16] + 160LL), 0);
  sub_14012D03C(Context);
}
