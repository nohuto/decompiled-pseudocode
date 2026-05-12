/*
 * XREFs of sub_14007A950 @ 0x14007A950
 * Callers:
 *     <none>
 * Callees:
 *     sub_14006C334 @ 0x14006C334 (sub_14006C334.c)
 */

void __fastcall sub_14007A950(
        PDEVICE_OBJECT DeviceObject,
        UCHAR MinorFunction,
        POWER_STATE PowerState,
        struct _DEVICE_OBJECT **Context)
{
  *((_BYTE *)Context + 504) &= ~0x80u;
  if ( Context[436] == (struct _DEVICE_OBJECT *)(Context + 436) )
    *((_BYTE *)Context + 507) &= ~2u;
  else
    sub_14006C334(Context[1]);
}
