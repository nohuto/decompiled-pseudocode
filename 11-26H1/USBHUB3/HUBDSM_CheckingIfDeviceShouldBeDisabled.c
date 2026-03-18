/*
 * XREFs of HUBDSM_CheckingIfDeviceShouldBeDisabled @ 0x14001FFB0
 * Callers:
 *     <none>
 * Callees:
 *     HUBMISC_CheckIfDeviceShouldBeDisabledOnRemove @ 0x14002E5E0 (HUBMISC_CheckIfDeviceShouldBeDisabledOnRemove.c)
 */

__int64 __fastcall HUBDSM_CheckingIfDeviceShouldBeDisabled(__int64 a1)
{
  return HUBMISC_CheckIfDeviceShouldBeDisabledOnRemove(*(_QWORD *)(a1 + 960));
}
