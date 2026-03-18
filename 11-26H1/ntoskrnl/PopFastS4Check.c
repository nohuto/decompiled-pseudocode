/*
 * XREFs of PopFastS4Check @ 0x140B3CBE4
 * Callers:
 *     PopActionRetrieveInitialState @ 0x1404F0404 (PopActionRetrieveInitialState.c)
 *     PopTransitionSystemPowerStateEx @ 0x140C0B0A0 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     <none>
 */

bool PopFastS4Check()
{
  return dword_140F0FB8C == 4 && !byte_140F106DC && byte_140F0FC49 == 1 && byte_140F0FC40 == 1 && byte_140F0FC4E == 2;
}
