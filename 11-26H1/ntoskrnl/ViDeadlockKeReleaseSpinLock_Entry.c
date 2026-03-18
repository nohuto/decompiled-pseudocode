/*
 * XREFs of ViDeadlockKeReleaseSpinLock_Entry @ 0x140C44910
 * Callers:
 *     <none>
 * Callees:
 *     VfDeadlockReleaseResource @ 0x140C4493C (VfDeadlockReleaseResource.c)
 */

__int64 __fastcall ViDeadlockKeReleaseSpinLock_Entry(__int64 a1)
{
  return VfDeadlockReleaseResource(*(_QWORD *)(a1 + 16));
}
