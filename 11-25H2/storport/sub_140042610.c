/*
 * XREFs of sub_140042610 @ 0x140042610
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall sub_140042610(PDEVICE_OBJECT DeviceObject, UCHAR MinorFunction, POWER_STATE PowerState, _BYTE *Context)
{
  Context[504] &= ~0x80u;
}
