/*
 * XREFs of ExEnterPriorityRegionAndAcquireResourceExclusive @ 0x1406D2710
 * Callers:
 *     DifExEnterPriorityRegionAndAcquireResourceExclusiveWrapper @ 0x1406551E0 (DifExEnterPriorityRegionAndAcquireResourceExclusiveWrapper.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140274770 (ExAcquireResourceExclusiveLite.c)
 *     PsBoostThreadIo @ 0x1403053C0 (PsBoostThreadIo.c)
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
