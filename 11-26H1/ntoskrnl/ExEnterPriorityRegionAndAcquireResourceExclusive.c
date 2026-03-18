/*
 * XREFs of ExEnterPriorityRegionAndAcquireResourceExclusive @ 0x1406CE6E0
 * Callers:
 *     DifExEnterPriorityRegionAndAcquireResourceExclusiveWrapper @ 0x140651600 (DifExEnterPriorityRegionAndAcquireResourceExclusiveWrapper.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140275200 (ExAcquireResourceExclusiveLite.c)
 *     PsBoostThreadIo @ 0x1402BA700 (PsBoostThreadIo.c)
 */

PVOID __fastcall ExEnterPriorityRegionAndAcquireResourceExclusive(
        PERESOURCE Resource,
        __int64 a2,
        __int64 a3,
        struct _SINGLE_LIST_ENTRY *a4)
{
  struct _KTHREAD *CurrentThread; // rdi

  CurrentThread = KeGetCurrentThread();
  PsBoostThreadIo((LegacyAutoBoost *)CurrentThread, 0LL, a3, a4);
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(Resource, 1u);
  return CurrentThread->WaitBlock[2].SparePtr;
}
