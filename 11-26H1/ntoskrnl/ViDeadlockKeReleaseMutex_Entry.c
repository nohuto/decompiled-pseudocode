/*
 * XREFs of ViDeadlockKeReleaseMutex_Entry @ 0x140C37A80
 * Callers:
 *     <none>
 * Callees:
 *     VfDeadlockReleaseResource @ 0x140C4493C (VfDeadlockReleaseResource.c)
 */

__int64 __fastcall ViDeadlockKeReleaseMutex_Entry(__int64 a1)
{
  return VfDeadlockReleaseResource(*(_QWORD *)(a1 + 16));
}
