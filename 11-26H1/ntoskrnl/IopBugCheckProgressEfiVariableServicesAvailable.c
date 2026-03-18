/*
 * XREFs of IopBugCheckProgressEfiVariableServicesAvailable @ 0x1405C8928
 * Callers:
 *     IoSetBugCheckProgressFlag @ 0x140532C30 (IoSetBugCheckProgressFlag.c)
 *     IoSaveBugCheckProgress @ 0x1405C7540 (IoSaveBugCheckProgress.c)
 *     IoSaveInitialBugCheckProgress @ 0x1405C77E0 (IoSaveInitialBugCheckProgress.c)
 *     IoSetBugCheckProgressAndFlag @ 0x1405C798C (IoSetBugCheckProgressAndFlag.c)
 * Callees:
 *     KeFrozenProcessorCount @ 0x1405F5DF4 (KeFrozenProcessorCount.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

bool IopBugCheckProgressEfiVariableServicesAvailable()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  bool result; // al

  result = BugCheckProgressEfiSafeToCall
        && (v1 = (unsigned int)KeNumberProcessors_0 - (unsigned int)KeFrozenProcessorCount(), (unsigned int)v1 <= 1)
        && !BugCheckProgressEfiCalled
        && (unsigned __int8)guard_dispatch_icall_no_overrides(v1, v0) == 0;
  return result;
}
