/*
 * XREFs of sub_14007AC90 @ 0x14007AC90
 * Callers:
 *     <none>
 * Callees:
 *     sub_1400308A8 @ 0x1400308A8 (sub_1400308A8.c)
 */

void __fastcall sub_14007AC90(PDEVICE_OBJECT DeviceObject, volatile __int32 *Context)
{
  _InterlockedExchange(Context + 508, 0);
  sub_1400308A8((char *)Context);
}
