/*
 * XREFs of PoUserShutdownInitiated @ 0x140B48F60
 * Callers:
 *     PopPowerInformationInternal @ 0x140B73EF0 (PopPowerInformationInternal.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x140449120 (PsIsCurrentThreadInServerSilo.c)
 *     PopSwitchUpdateUserShutdownScenarioState @ 0x1407D46D4 (PopSwitchUpdateUserShutdownScenarioState.c)
 */

char PoUserShutdownInitiated()
{
  char result; // al

  result = PsIsCurrentThreadInServerSilo();
  if ( !result )
    return PopSwitchUpdateUserShutdownScenarioState(3LL);
  return result;
}
