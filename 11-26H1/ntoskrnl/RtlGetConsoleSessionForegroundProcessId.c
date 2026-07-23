/*
 * XREFs of RtlGetConsoleSessionForegroundProcessId @ 0x140805DE0
 * Callers:
 *     <none>
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402153F0 (PsGetCurrentServerSiloGlobals.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140449120 (PsIsCurrentThreadInServerSilo.c)
 */

ULONGLONG RtlGetConsoleSessionForegroundProcessId(void)
{
  if ( PsIsCurrentThreadInServerSilo() )
    return (ULONGLONG)PsGetCurrentServerSiloGlobals()[80].Blink->Blink;
  else
    return MEMORY[0xFFFFF78000000338];
}
