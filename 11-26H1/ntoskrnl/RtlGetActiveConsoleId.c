/*
 * XREFs of RtlGetActiveConsoleId @ 0x140450F30
 * Callers:
 *     PoBlockConsoleSwitchEx @ 0x140450E68 (PoBlockConsoleSwitchEx.c)
 *     IopParseDevice @ 0x1409008C0 (IopParseDevice.c)
 *     PopNotifyConsoleUserPresent @ 0x140A3DB40 (PopNotifyConsoleUserPresent.c)
 *     PfpProcessScenarioPhase @ 0x140B1CEB8 (PfpProcessScenarioPhase.c)
 *     PiCMQueryRemove @ 0x140B2D27C (PiCMQueryRemove.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402150C0 (PsGetCurrentServerSiloGlobals.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140450FF0 (PsIsCurrentThreadInServerSilo.c)
 */

__int64 RtlGetActiveConsoleId()
{
  if ( (unsigned __int8)PsIsCurrentThreadInServerSilo() )
    return HIDWORD(PsGetCurrentServerSiloGlobals()[80].Blink->Flink);
  else
    return MEMORY[0xFFFFF780000002D8];
}
