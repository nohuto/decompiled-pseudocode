/*
 * XREFs of NdisDprReleaseSpinLock @ 0x1400D9560
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall NdisDprReleaseSpinLock(KSPIN_LOCK *a1)
{
  KeReleaseSpinLockFromDpcLevel(a1);
}
