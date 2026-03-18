/*
 * XREFs of HUBPSM20_WaitingForPortPowerOnTimerOnResume @ 0x1400137E0
 * Callers:
 *     <none>
 * Callees:
 *     HUBMISC_StartPortPowerOnTimer @ 0x140033C38 (HUBMISC_StartPortPowerOnTimer.c)
 */

__int64 __fastcall HUBPSM20_WaitingForPortPowerOnTimerOnResume(__int64 a1)
{
  HUBMISC_StartPortPowerOnTimer(*(_QWORD *)(a1 + 960));
  return 1000LL;
}
