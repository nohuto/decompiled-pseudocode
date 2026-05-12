/*
 * XREFs of StorPortAdapterDirectedPowerDownRequestD3Passive @ 0x140081880
 * Callers:
 *     <none>
 * Callees:
 *     StorPortAdapterDirectedPowerDownRequestD3 @ 0x140081664 (StorPortAdapterDirectedPowerDownRequestD3.c)
 */

void __fastcall StorPortAdapterDirectedPowerDownRequestD3Passive(
        PDEVICE_OBJECT DeviceObject,
        volatile __int32 *Context)
{
  _InterlockedExchange(Context + 1440, 0);
  StorPortAdapterDirectedPowerDownRequestD3((char *)Context);
}
