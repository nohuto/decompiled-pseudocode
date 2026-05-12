/*
 * XREFs of StorPortUnitDirectedPowerUpCompletion @ 0x140082390
 * Callers:
 *     <none>
 * Callees:
 *     RaFlushDFxQueue @ 0x1400731D4 (RaFlushDFxQueue.c)
 */

void __fastcall StorPortUnitDirectedPowerUpCompletion(
        PDEVICE_OBJECT DeviceObject,
        UCHAR MinorFunction,
        POWER_STATE PowerState,
        struct _DEVICE_OBJECT **Context)
{
  *((_BYTE *)Context + 504) &= ~0x80u;
  if ( Context[437] == (struct _DEVICE_OBJECT *)(Context + 437) )
    *((_BYTE *)Context + 507) &= ~2u;
  else
    RaFlushDFxQueue(Context[1]);
}
