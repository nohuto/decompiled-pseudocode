/*
 * XREFs of CsqReleaseLock @ 0x140131670
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CsqReleaseLock(char *Csq, KIRQL Irql)
{
  KSPIN_LOCK *v2; // rcx

  if ( Csq )
  {
    v2 = (KSPIN_LOCK *)(Csq - 80);
    if ( v2 )
      KeReleaseSpinLock(v2 + 18, Irql);
  }
}
