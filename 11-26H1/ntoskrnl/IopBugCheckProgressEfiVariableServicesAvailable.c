/*
 * XREFs of IopBugCheckProgressEfiVariableServicesAvailable @ 0x1405CB1F8
 * Callers:
 *     IoSetBugCheckProgressFlag @ 0x1405350D0 (IoSetBugCheckProgressFlag.c)
 *     IoSaveBugCheckProgress @ 0x1405C9E10 (IoSaveBugCheckProgress.c)
 *     IoSaveInitialBugCheckProgress @ 0x1405CA0B0 (IoSaveInitialBugCheckProgress.c)
 *     IoSetBugCheckProgressAndFlag @ 0x1405CA25C (IoSetBugCheckProgressAndFlag.c)
 * Callees:
 *     KeFrozenProcessorCount @ 0x1405F87B0 (KeFrozenProcessorCount.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
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
