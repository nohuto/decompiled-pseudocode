/*
 * XREFs of PoFxIdleComponent @ 0x140394FE0
 * Callers:
 *     PoFxIdleDevice @ 0x1404B2604 (PoFxIdleDevice.c)
 *     PopFxHandleReportDevicePoweredOn @ 0x1404DAFA0 (PopFxHandleReportDevicePoweredOn.c)
 *     PoFxStartDevicePowerManagement @ 0x1404EAC40 (PoFxStartDevicePowerManagement.c)
 *     DifPoFxIdleComponentWrapper @ 0x1406932F0 (DifPoFxIdleComponentWrapper.c)
 * Callees:
 *     PopFxIdleComponent @ 0x140395020 (PopFxIdleComponent.c)
 */

__int64 __fastcall PoFxIdleComponent(ULONG_PTR a1, ULONG_PTR a2)
{
  return PopFxIdleComponent(a1, a2);
}
