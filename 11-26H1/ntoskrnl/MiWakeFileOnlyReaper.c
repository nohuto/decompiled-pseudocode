/*
 * XREFs of MiWakeFileOnlyReaper @ 0x140522624
 * Callers:
 *     MiRetryFileOnlyFailedReapPages @ 0x1402A5FD8 (MiRetryFileOnlyFailedReapPages.c)
 *     MiClearFileOnlyPfn @ 0x1405224D8 (MiClearFileOnlyPfn.c)
 * Callees:
 *     KeSetEvent @ 0x1402DE9C0 (KeSetEvent.c)
 */

LONG MiWakeFileOnlyReaper()
{
  LONG result; // eax

  if ( !BYTE1(stru_140E2D150.ThreadLock) )
  {
    BYTE1(stru_140E2D150.ThreadLock) = 1;
    return KeSetEvent((PRKEVENT)&stru_140E2D150.QuantumTarget, 0, 0);
  }
  return result;
}
