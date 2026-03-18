/*
 * XREFs of ExReleaseResourceAndLeavePriorityRegion @ 0x1406CE870
 * Callers:
 *     DifExReleaseResourceAndLeavePriorityRegionWrapper @ 0x1406546B0 (DifExReleaseResourceAndLeavePriorityRegionWrapper.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x1402B4CF0 (ExReleaseResourceLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402BA1B0 (KiLeaveCriticalRegionUnsafe.c)
 *     PsBoostThreadIo @ 0x1402BA700 (PsBoostThreadIo.c)
 */

_QWORD *__fastcall ExReleaseResourceAndLeavePriorityRegion(struct _ERESOURCE *a1)
{
  LegacyAutoBoost *CurrentThread; // rbx
  __int64 v2; // rdx
  __int64 v3; // r8
  struct _SINGLE_LIST_ENTRY *v4; // r9
  __int64 v5; // rdx

  ExReleaseResourceLite(a1);
  CurrentThread = (LegacyAutoBoost *)KeGetCurrentThread();
  LOBYTE(v2) = 1;
  PsBoostThreadIo(CurrentThread, v2, v3, v4);
  return KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v5);
}
