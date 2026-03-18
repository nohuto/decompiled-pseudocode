/*
 * XREFs of HUBPSM30_IssuingAttachDeviceWithResetToDsm @ 0x1400140A0
 * Callers:
 *     <none>
 * Callees:
 *     HUBMISC_AttachDevice @ 0x14002E44C (HUBMISC_AttachDevice.c)
 *     HUBMISC_SetPortAndSpeedFlagsFor30Device @ 0x1400339F4 (HUBMISC_SetPortAndSpeedFlagsFor30Device.c)
 */

__int64 __fastcall HUBPSM30_IssuingAttachDeviceWithResetToDsm(__int64 a1)
{
  __int64 v1; // rbx

  v1 = *(_QWORD *)(a1 + 960);
  _InterlockedOr((volatile signed __int32 *)(*(_QWORD *)(v1 + 1328) + 1644LL), 8u);
  HUBMISC_SetPortAndSpeedFlagsFor30Device(v1);
  return HUBMISC_AttachDevice(v1);
}
