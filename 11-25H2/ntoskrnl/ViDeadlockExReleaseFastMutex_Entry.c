/*
 * XREFs of ViDeadlockExReleaseFastMutex_Entry @ 0x140B89520
 * Callers:
 *     <none>
 * Callees:
 *     VfDeadlockReleaseResource @ 0x140B975CC (VfDeadlockReleaseResource.c)
 */

__int64 __fastcall ViDeadlockExReleaseFastMutex_Entry(__int64 a1)
{
  return VfDeadlockReleaseResource(*(_QWORD *)(a1 + 8));
}
