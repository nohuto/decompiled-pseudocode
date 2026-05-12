/*
 * XREFs of sub_14008A0F4 @ 0x14008A0F4
 * Callers:
 *     sub_140008EE0 @ 0x140008EE0 (sub_140008EE0.c)
 *     sub_1400D30D4 @ 0x1400D30D4 (sub_1400D30D4.c)
 * Callees:
 *     sub_14001B0D0 @ 0x14001B0D0 (sub_14001B0D0.c)
 */

NTSTATUS __fastcall sub_14008A0F4(struct _DEVICE_OBJECT *a1, IRP *a2)
{
  PoStartNextPowerIrp(a2);
  return sub_14001B0D0(a1, a2);
}
