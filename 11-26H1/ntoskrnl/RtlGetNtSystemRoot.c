/*
 * XREFs of RtlGetNtSystemRoot @ 0x140A79090
 * Callers:
 *     SdbpGetManifestedMergeStubAlloc @ 0x140881180 (SdbpGetManifestedMergeStubAlloc.c)
 *     AslEnvVarQuery @ 0x14088B668 (AslEnvVarQuery.c)
 *     ObpLookupObjectName @ 0x1408FE2F0 (ObpLookupObjectName.c)
 *     MiCacheImageSymbols @ 0x140A78F14 (MiCacheImageSymbols.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402150C0 (PsGetCurrentServerSiloGlobals.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140450FF0 (PsIsCurrentThreadInServerSilo.c)
 */

char *RtlGetNtSystemRoot()
{
  if ( PsIsCurrentThreadInServerSilo() )
    return (char *)&PsGetCurrentServerSiloGlobals()[80].Blink[1].Blink + 6;
  else
    return (char *)0xFFFFF78000000030LL;
}
