/*
 * XREFs of RtlGetConsoleSessionForegroundProcessId @ 0x140800340
 * Callers:
 *     <none>
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402150C0 (PsGetCurrentServerSiloGlobals.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140450FF0 (PsIsCurrentThreadInServerSilo.c)
 */

struct _LIST_ENTRY *RtlGetConsoleSessionForegroundProcessId()
{
  if ( PsIsCurrentThreadInServerSilo() )
    return PsGetCurrentServerSiloGlobals()[80].Blink->Blink;
  else
    return (struct _LIST_ENTRY *)MEMORY[0xFFFFF78000000338];
}
