/*
 * XREFs of ViDeadlockKeAcquireSpinLockRaiseToDpc_Exit @ 0x140C4D2F0
 * Callers:
 *     <none>
 * Callees:
 *     VfDeadlockAcquireResource @ 0x140C4D324 (VfDeadlockAcquireResource.c)
 */

__int64 __fastcall ViDeadlockKeAcquireSpinLockRaiseToDpc_Exit(__int64 *a1)
{
  return VfDeadlockAcquireResource(a1[1], *a1);
}
