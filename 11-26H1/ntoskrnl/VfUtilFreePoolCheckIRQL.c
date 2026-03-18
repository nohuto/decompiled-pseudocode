/*
 * XREFs of VfUtilFreePoolCheckIRQL @ 0x1403B7740
 * Callers:
 *     VfAvlFreeNodeNoLock @ 0x1403B7710 (VfAvlFreeNodeNoLock.c)
 *     VfTargetDriversRemove @ 0x1403B7C48 (VfTargetDriversRemove.c)
 *     ViFreeMapRegisterFile @ 0x140C26C90 (ViFreeMapRegisterFile.c)
 *     ViSpIoSetCompletionRoutineEx_Exit @ 0x140C439D0 (ViSpIoSetCompletionRoutineEx_Exit.c)
 * Callees:
 *     VfPoolDelayFreeIfPossible @ 0x1403B7760 (VfPoolDelayFreeIfPossible.c)
 */

__int64 __fastcall VfUtilFreePoolCheckIRQL(struct _SLIST_ENTRY *a1)
{
  KeGetCurrentIrql();
  return VfPoolDelayFreeIfPossible(a1);
}
