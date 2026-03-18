/*
 * XREFs of HUBPSM30_CheckingIfDeviceIsConnectedOnPortChangeInD3Cold @ 0x1400138E0
 * Callers:
 *     <none>
 * Callees:
 *     HUBMISC_Is30DevicePresent @ 0x140030A10 (HUBMISC_Is30DevicePresent.c)
 */

__int64 __fastcall HUBPSM30_CheckingIfDeviceIsConnectedOnPortChangeInD3Cold(__int64 a1)
{
  return HUBMISC_Is30DevicePresent(*(_QWORD *)(a1 + 960));
}
