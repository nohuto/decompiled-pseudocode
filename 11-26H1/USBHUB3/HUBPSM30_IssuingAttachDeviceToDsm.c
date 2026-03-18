/*
 * XREFs of HUBPSM30_IssuingAttachDeviceToDsm @ 0x140014070
 * Callers:
 *     <none>
 * Callees:
 *     HUBMISC_AttachDevice @ 0x14002E44C (HUBMISC_AttachDevice.c)
 *     HUBMISC_SetPortAndSpeedFlagsFor30Device @ 0x1400339F4 (HUBMISC_SetPortAndSpeedFlagsFor30Device.c)
 */

__int64 __fastcall HUBPSM30_IssuingAttachDeviceToDsm(__int64 a1)
{
  __int64 v1; // rbx

  v1 = *(_QWORD *)(a1 + 960);
  HUBMISC_SetPortAndSpeedFlagsFor30Device(v1);
  return HUBMISC_AttachDevice(v1);
}
