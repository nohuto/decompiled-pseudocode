/*
 * XREFs of sub_14003EBFC @ 0x14003EBFC
 * Callers:
 *     sub_14000BD54 @ 0x14000BD54 (sub_14000BD54.c)
 *     sub_14012702C @ 0x14012702C (sub_14012702C.c)
 *     sub_140128F6C @ 0x140128F6C (sub_140128F6C.c)
 *     sub_14012D7EC @ 0x14012D7EC (sub_14012D7EC.c)
 * Callees:
 *     <none>
 */

POWER_STATE __fastcall sub_14003EBFC(struct _DEVICE_OBJECT *a1, POWER_STATE a2)
{
  return PoSetPowerState(a1, DevicePowerState, a2);
}
