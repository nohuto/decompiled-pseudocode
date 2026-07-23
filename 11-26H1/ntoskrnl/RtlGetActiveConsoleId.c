/*
 * XREFs of RtlGetActiveConsoleId @ 0x140449060
 * Callers:
 *     PoBlockConsoleSwitchEx @ 0x140448F98 (PoBlockConsoleSwitchEx.c)
 *     IopParseDevice @ 0x140930850 (IopParseDevice.c)
 *     PopNotifyConsoleUserPresent @ 0x1409F9560 (PopNotifyConsoleUserPresent.c)
 *     PfpProcessScenarioPhase @ 0x140B1F0C8 (PfpProcessScenarioPhase.c)
 *     PiCMQueryRemove @ 0x140B2F2FC (PiCMQueryRemove.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402153F0 (PsGetCurrentServerSiloGlobals.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140449120 (PsIsCurrentThreadInServerSilo.c)
 */

ULONG RtlGetActiveConsoleId(void)
{
  if ( (unsigned __int8)PsIsCurrentThreadInServerSilo() )
    return HIDWORD(PsGetCurrentServerSiloGlobals()[80].Blink->Flink);
  else
    return MEMORY[0xFFFFF780000002D8];
}
