/*
 * XREFs of StorPortUnitDirectedPowerDownRequestD3Passive @ 0x1400821E0
 * Callers:
 *     <none>
 * Callees:
 *     StorPortUnitDirectedPowerDownRequestD3 @ 0x140081FAC (StorPortUnitDirectedPowerDownRequestD3.c)
 */

void __fastcall StorPortUnitDirectedPowerDownRequestD3Passive(PDEVICE_OBJECT DeviceObject, volatile __int32 *Context)
{
  _InterlockedExchange(Context + 508, 0);
  StorPortUnitDirectedPowerDownRequestD3((PVOID)Context);
}
