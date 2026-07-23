/*
 * XREFs of MiWakeFileOnlyReaper @ 0x140524C90
 * Callers:
 *     MiRetryFileOnlyFailedReapPages @ 0x1402A53D0 (MiRetryFileOnlyFailedReapPages.c)
 *     MiClearFileOnlyPfn @ 0x140524B44 (MiClearFileOnlyPfn.c)
 * Callees:
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 */

LONG MiWakeFileOnlyReaper()
{
  LONG result; // eax

  if ( !BYTE1(stru_140E2D2D0.ThreadLock) )
  {
    BYTE1(stru_140E2D2D0.ThreadLock) = 1;
    return KeSetEvent((PRKEVENT)&stru_140E2D2D0.QuantumTarget, 0, 0);
  }
  return result;
}
