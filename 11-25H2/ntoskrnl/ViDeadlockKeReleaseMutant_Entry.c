/*
 * XREFs of ViDeadlockKeReleaseMutant_Entry @ 0x140B897E0
 * Callers:
 *     <none>
 * Callees:
 *     VfDeadlockReleaseResource @ 0x140B975CC (VfDeadlockReleaseResource.c)
 */

__int64 __fastcall ViDeadlockKeReleaseMutant_Entry(__int64 a1)
{
  return VfDeadlockReleaseResource(*(_QWORD *)(a1 + 16));
}
