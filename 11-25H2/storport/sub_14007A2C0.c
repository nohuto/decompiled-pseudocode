/*
 * XREFs of sub_14007A2C0 @ 0x14007A2C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140039F08 @ 0x140039F08 (sub_140039F08.c)
 */

void __fastcall sub_14007A2C0(PDEVICE_OBJECT DeviceObject, volatile __int32 *Context)
{
  _InterlockedExchange(Context + 1424, 0);
  sub_140039F08((PVOID)Context);
}
