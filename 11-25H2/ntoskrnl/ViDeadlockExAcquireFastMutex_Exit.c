/*
 * XREFs of ViDeadlockExAcquireFastMutex_Exit @ 0x140B89430
 * Callers:
 *     <none>
 * Callees:
 *     VfDeadlockAcquireResource @ 0x140B983E4 (VfDeadlockAcquireResource.c)
 */

__int64 __fastcall ViDeadlockExAcquireFastMutex_Exit(__int64 *a1)
{
  return VfDeadlockAcquireResource(a1[1], *a1);
}
