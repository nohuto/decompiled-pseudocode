/*
 * XREFs of ViDeadlockKeReleaseSpinLockFromDpcLevel_Entry @ 0x140B89840
 * Callers:
 *     <none>
 * Callees:
 *     VfDeadlockReleaseResource @ 0x140B975CC (VfDeadlockReleaseResource.c)
 */

__int64 __fastcall ViDeadlockKeReleaseSpinLockFromDpcLevel_Entry(__int64 a1)
{
  return VfDeadlockReleaseResource(*(_QWORD *)(a1 + 8));
}
