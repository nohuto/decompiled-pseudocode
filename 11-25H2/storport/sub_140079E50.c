/*
 * XREFs of sub_140079E50 @ 0x140079E50
 * Callers:
 *     <none>
 * Callees:
 *     sub_140079C30 @ 0x140079C30 (sub_140079C30.c)
 */

void __fastcall sub_140079E50(PDEVICE_OBJECT DeviceObject, volatile __int32 *Context)
{
  _InterlockedExchange(Context + 1424, 0);
  sub_140079C30((char *)Context);
}
