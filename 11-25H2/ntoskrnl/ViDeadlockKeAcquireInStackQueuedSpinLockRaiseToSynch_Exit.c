/*
 * XREFs of ViDeadlockKeAcquireInStackQueuedSpinLockRaiseToSynch_Exit @ 0x140B896F0
 * Callers:
 *     <none>
 * Callees:
 *     VfDeadlockAcquireResource @ 0x140B983E4 (VfDeadlockAcquireResource.c)
 */

__int64 __fastcall ViDeadlockKeAcquireInStackQueuedSpinLockRaiseToSynch_Exit(__int64 *a1)
{
  return VfDeadlockAcquireResource(a1[2], *a1);
}
