/*
 * XREFs of PsTerminateServerSilo @ 0x1407EE820
 * Callers:
 *     PspInitializeServerSiloDeferred @ 0x1407EF070 (PspInitializeServerSiloDeferred.c)
 *     PsShutdownSystem @ 0x1407FA284 (PsShutdownSystem.c)
 *     PspCatchCriticalBreak @ 0x1407FA818 (PspCatchCriticalBreak.c)
 *     NtSetSystemPowerState @ 0x140BFD2E0 (NtSetSystemPowerState.c)
 *     ExpSystemErrorHandler2 @ 0x140BFF4E0 (ExpSystemErrorHandler2.c)
 * Callees:
 *     PsIsServerSilo @ 0x140216838 (PsIsServerSilo.c)
 *     PspTerminateAllProcessesInJobHierarchy @ 0x140958CB0 (PspTerminateAllProcessesInJobHierarchy.c)
 */

void __fastcall PsTerminateServerSilo(__int64 a1)
{
  void *v1; // rcx

  if ( a1 )
  {
    if ( PsIsServerSilo(a1) )
      PspTerminateAllProcessesInJobHierarchy(v1);
  }
}
