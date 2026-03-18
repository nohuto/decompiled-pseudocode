/*
 * XREFs of PoUserShutdownInitiated @ 0x140B46F30
 * Callers:
 *     PopPowerInformationInternal @ 0x140B6F6FC (PopPowerInformationInternal.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x140450FF0 (PsIsCurrentThreadInServerSilo.c)
 *     PopSwitchUpdateUserShutdownScenarioState @ 0x1407D1634 (PopSwitchUpdateUserShutdownScenarioState.c)
 */

char PoUserShutdownInitiated()
{
  char result; // al

  result = PsIsCurrentThreadInServerSilo();
  if ( !result )
    return PopSwitchUpdateUserShutdownScenarioState(3LL);
  return result;
}
