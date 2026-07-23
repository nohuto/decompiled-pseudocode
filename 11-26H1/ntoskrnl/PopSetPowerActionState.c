/*
 * XREFs of PopSetPowerActionState @ 0x1404ED954
 * Callers:
 *     PopPolicyWorkerAction @ 0x1409F3240 (PopPolicyWorkerAction.c)
 *     PopExecutePowerAction @ 0x1409F3918 (PopExecutePowerAction.c)
 *     PopPolicyWorkerActionPromote @ 0x140B3F1F0 (PopPolicyWorkerActionPromote.c)
 *     PopTransitionSystemPowerStateEx @ 0x140C112B0 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PopDeepSleepSetDisengageReason @ 0x1403BE008 (PopDeepSleepSetDisengageReason.c)
 *     PopDeepSleepClearDisengageReason @ 0x1403BE204 (PopDeepSleepClearDisengageReason.c)
 */

void __fastcall PopSetPowerActionState(char a1)
{
  if ( byte_140F10421 != a1 )
  {
    byte_140F10421 = a1;
    if ( a1 )
      PopDeepSleepSetDisengageReason(5u);
    else
      PopDeepSleepClearDisengageReason(5u);
  }
}
