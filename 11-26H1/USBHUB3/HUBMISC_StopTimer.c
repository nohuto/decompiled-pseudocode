/*
 * XREFs of HUBMISC_StopTimer @ 0x140033D1C
 * Callers:
 *     HUBDSM_StoppingTimerOnHubSuspendInSettingAddress @ 0x14001FF90 (HUBDSM_StoppingTimerOnHubSuspendInSettingAddress.c)
 *     HUBDSM_StoppingTimerAndRequestingCycleOnStopSuspend @ 0x140024D10 (HUBDSM_StoppingTimerAndRequestingCycleOnStopSuspend.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBMISC_StopTimer(__int64 a1)
{
  char v1; // al
  unsigned int v2; // ecx

  v1 = ExCancelTimer(*(_QWORD *)(a1 + 1552), 0LL);
  v2 = 4077;
  if ( v1 != 1 )
    return 4065;
  return v2;
}
