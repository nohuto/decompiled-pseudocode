/*
 * XREFs of ViDeadlockExReleaseFastMutexUnsafe_Entry @ 0x140B894F0
 * Callers:
 *     <none>
 * Callees:
 *     VfDeadlockReleaseResource @ 0x140B975CC (VfDeadlockReleaseResource.c)
 */

__int64 __fastcall ViDeadlockExReleaseFastMutexUnsafe_Entry(__int64 a1)
{
  return VfDeadlockReleaseResource(*(_QWORD *)(a1 + 8));
}
