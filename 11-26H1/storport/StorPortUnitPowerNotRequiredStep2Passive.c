/*
 * XREFs of StorPortUnitPowerNotRequiredStep2Passive @ 0x1400826C0
 * Callers:
 *     <none>
 * Callees:
 *     StorPortUnitPowerNotRequiredStep2 @ 0x140033AB0 (StorPortUnitPowerNotRequiredStep2.c)
 */

void __fastcall StorPortUnitPowerNotRequiredStep2Passive(PDEVICE_OBJECT DeviceObject, volatile __int32 *Context)
{
  _InterlockedExchange(Context + 508, 0);
  StorPortUnitPowerNotRequiredStep2((char *)Context);
}
