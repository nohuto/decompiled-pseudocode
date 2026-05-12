/*
 * XREFs of CsqAcquireLock @ 0x1401311A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CsqAcquireLock(char *Csq, PKIRQL Irql)
{
  KSPIN_LOCK *v2; // rcx

  if ( Csq )
  {
    v2 = (KSPIN_LOCK *)(Csq - 80);
    if ( v2 )
      *Irql = KeAcquireSpinLockRaiseToDpc(v2 + 18);
  }
}
