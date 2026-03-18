/*
 * XREFs of HUBPSM30_ReleasingResetReferenceOnDeviceRemoval @ 0x1400144D0
 * Callers:
 *     <none>
 * Callees:
 *     HUBMUX_ReleaseResetReference @ 0x14001210C (HUBMUX_ReleaseResetReference.c)
 *     HUBMISC_DetachDevice @ 0x14002FD00 (HUBMISC_DetachDevice.c)
 */

__int64 __fastcall HUBPSM30_ReleasingResetReferenceOnDeviceRemoval(__int64 a1)
{
  volatile signed __int32 *v1; // rbx

  v1 = *(volatile signed __int32 **)(a1 + 960);
  HUBMISC_DetachDevice(v1);
  HUBMUX_ReleaseResetReference(v1);
  return 3013LL;
}
