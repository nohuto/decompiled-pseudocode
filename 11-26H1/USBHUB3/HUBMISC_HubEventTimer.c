/*
 * XREFs of HUBMISC_HubEventTimer @ 0x140030660
 * Callers:
 *     <none>
 * Callees:
 *     HUBSM_AddEvent @ 0x14000A81C (HUBSM_AddEvent.c)
 */

__int64 __fastcall HUBMISC_HubEventTimer(__int64 a1, __int64 a2)
{
  return HUBSM_AddEvent(a2 + 1280, 1002);
}
