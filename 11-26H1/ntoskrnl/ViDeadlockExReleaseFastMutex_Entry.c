/*
 * XREFs of ViDeadlockExReleaseFastMutex_Entry @ 0x140C37790
 * Callers:
 *     <none>
 * Callees:
 *     VfDeadlockReleaseResource @ 0x140C4493C (VfDeadlockReleaseResource.c)
 */

__int64 __fastcall ViDeadlockExReleaseFastMutex_Entry(__int64 a1)
{
  return VfDeadlockReleaseResource(*(_QWORD *)(a1 + 8));
}
