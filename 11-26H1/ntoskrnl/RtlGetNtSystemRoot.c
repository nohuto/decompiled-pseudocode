/*
 * XREFs of RtlGetNtSystemRoot @ 0x1409E50B0
 * Callers:
 *     SdbpGetManifestedMergeStubAlloc @ 0x140887580 (SdbpGetManifestedMergeStubAlloc.c)
 *     AslEnvVarQuery @ 0x140891A64 (AslEnvVarQuery.c)
 *     ObpLookupObjectName @ 0x14092E280 (ObpLookupObjectName.c)
 *     MiCacheImageSymbols @ 0x1409E4F28 (MiCacheImageSymbols.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402153F0 (PsGetCurrentServerSiloGlobals.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140449120 (PsIsCurrentThreadInServerSilo.c)
 */

PWSTR RtlGetNtSystemRoot(void)
{
  if ( PsIsCurrentThreadInServerSilo() )
    return (PWSTR)&PsGetCurrentServerSiloGlobals()[80].Blink[1].Blink + 3;
  else
    return (PWSTR)0xFFFFF78000000030LL;
}
