/*
 * XREFs of StorPortAdapterPowerNotRequiredStep2Passive @ 0x140081D10
 * Callers:
 *     <none>
 * Callees:
 *     StorPortAdapterPowerNotRequiredStep2 @ 0x14000FB18 (StorPortAdapterPowerNotRequiredStep2.c)
 */

void __fastcall StorPortAdapterPowerNotRequiredStep2Passive(PDEVICE_OBJECT DeviceObject, volatile __int32 *Context)
{
  _InterlockedExchange(Context + 1440, 0);
  StorPortAdapterPowerNotRequiredStep2((PVOID)Context);
}
