/*
 * XREFs of sub_14007A790 @ 0x14007A790
 * Callers:
 *     <none>
 * Callees:
 *     sub_14007A550 @ 0x14007A550 (sub_14007A550.c)
 */

void __fastcall sub_14007A790(PDEVICE_OBJECT DeviceObject, volatile __int32 *Context)
{
  _InterlockedExchange(Context + 508, 0);
  sub_14007A550((char *)Context);
}
