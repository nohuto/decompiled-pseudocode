/*
 * XREFs of RtlGetSuiteMask @ 0x140A97810
 * Callers:
 *     RtlGetVersion @ 0x140A97730 (RtlGetVersion.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402153F0 (PsGetCurrentServerSiloGlobals.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140449120 (PsIsCurrentThreadInServerSilo.c)
 */

ULONG RtlGetSuiteMask(void)
{
  if ( PsIsCurrentThreadInServerSilo() )
    return HIDWORD(PsGetCurrentServerSiloGlobals()[80].Blink[1].Flink);
  else
    return MEMORY[0xFFFFF780000002D0];
}
