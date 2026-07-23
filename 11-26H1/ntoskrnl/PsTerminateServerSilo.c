/*
 * XREFs of PsTerminateServerSilo @ 0x1407F4380
 * Callers:
 *     PspInitializeServerSiloDeferred @ 0x1407F4BD0 (PspInitializeServerSiloDeferred.c)
 *     PsShutdownSystem @ 0x1407FFCB4 (PsShutdownSystem.c)
 *     PspCatchCriticalBreak @ 0x140800248 (PspCatchCriticalBreak.c)
 *     NtSetSystemPowerState @ 0x140C032E0 (NtSetSystemPowerState.c)
 *     ExpSystemErrorHandler2 @ 0x140C056F0 (ExpSystemErrorHandler2.c)
 * Callees:
 *     PsIsServerSilo @ 0x140216B68 (PsIsServerSilo.c)
 *     PspTerminateAllProcessesInJobHierarchy @ 0x140A0717C (PspTerminateAllProcessesInJobHierarchy.c)
 */

void __fastcall PsTerminateServerSilo(__int64 a1)
{
  struct _KEVENT *v1; // rcx

  if ( a1 )
  {
    if ( PsIsServerSilo(a1) )
      PspTerminateAllProcessesInJobHierarchy(v1);
  }
}
