/*
 * XREFs of PopSetPowerActionState @ 0x1404F4374
 * Callers:
 *     PopPolicyWorkerAction @ 0x140A37680 (PopPolicyWorkerAction.c)
 *     PopExecutePowerAction @ 0x140A37D58 (PopExecutePowerAction.c)
 *     PopPolicyWorkerActionPromote @ 0x140B3D020 (PopPolicyWorkerActionPromote.c)
 *     PopTransitionSystemPowerStateEx @ 0x140C0B0A0 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PopDeepSleepSetDisengageReason @ 0x1403B40FC (PopDeepSleepSetDisengageReason.c)
 *     PopDeepSleepClearDisengageReason @ 0x1403B42F8 (PopDeepSleepClearDisengageReason.c)
 */

void __fastcall PopSetPowerActionState(char a1)
{
  if ( byte_140F0FB61 != a1 )
  {
    byte_140F0FB61 = a1;
    if ( a1 )
      PopDeepSleepSetDisengageReason(5u);
    else
      PopDeepSleepClearDisengageReason(5u);
  }
}
