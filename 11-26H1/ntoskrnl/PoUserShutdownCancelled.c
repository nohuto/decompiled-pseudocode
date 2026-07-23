/*
 * XREFs of PoUserShutdownCancelled @ 0x14077E5A0
 * Callers:
 *     PopPowerInformationInternal @ 0x140B73EF0 (PopPowerInformationInternal.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x140449120 (PsIsCurrentThreadInServerSilo.c)
 *     PopSwitchUpdateUserShutdownScenarioState @ 0x1407D46D4 (PopSwitchUpdateUserShutdownScenarioState.c)
 */

char PoUserShutdownCancelled()
{
  char result; // al

  result = PsIsCurrentThreadInServerSilo();
  if ( !result )
    return PopSwitchUpdateUserShutdownScenarioState(1LL);
  return result;
}
