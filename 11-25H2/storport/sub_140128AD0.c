/*
 * XREFs of sub_140128AD0 @ 0x140128AD0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1401288E4 @ 0x1401288E4 (sub_1401288E4.c)
 */

void __fastcall sub_140128AD0(PDEVICE_OBJECT DeviceObject, _QWORD *Context)
{
  _InterlockedExchange((volatile __int32 *)(Context[20] + 232LL), 0);
  sub_1401288E4(Context);
}
