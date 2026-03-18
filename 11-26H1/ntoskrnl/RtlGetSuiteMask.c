/*
 * XREFs of RtlGetSuiteMask @ 0x140A92CC0
 * Callers:
 *     RtlGetVersion @ 0x140A92BE0 (RtlGetVersion.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402150C0 (PsGetCurrentServerSiloGlobals.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140450FF0 (PsIsCurrentThreadInServerSilo.c)
 */

__int64 RtlGetSuiteMask()
{
  if ( PsIsCurrentThreadInServerSilo() )
    return HIDWORD(PsGetCurrentServerSiloGlobals()[80].Blink[1].Flink);
  else
    return MEMORY[0xFFFFF780000002D0];
}
