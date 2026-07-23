/*
 * XREFs of PopFastS4Check @ 0x140B3EE64
 * Callers:
 *     PopActionRetrieveInitialState @ 0x1404E99E4 (PopActionRetrieveInitialState.c)
 *     PopTransitionSystemPowerStateEx @ 0x140C112B0 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     <none>
 */

bool PopFastS4Check()
{
  return dword_140F1044C == 4
      && !PpmIdlePolicyLock.PriorityFloorCounts[4]
      && byte_140F10509 == 1
      && byte_140F10500 == 1
      && byte_140F1050E == 2;
}
