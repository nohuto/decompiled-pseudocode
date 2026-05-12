/*
 * XREFs of sub_1401273C0 @ 0x1401273C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1401271C0 @ 0x1401271C0 (sub_1401271C0.c)
 */

void __fastcall sub_1401273C0(PDEVICE_OBJECT DeviceObject, _QWORD *Context)
{
  _InterlockedExchange((volatile __int32 *)(Context[20] + 232LL), 0);
  sub_1401271C0(Context);
}
