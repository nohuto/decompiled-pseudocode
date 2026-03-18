/*
 * XREFs of ViRlrsUnload @ 0x1406486D0
 * Callers:
 *     <none>
 * Callees:
 *     PsSetCreateProcessNotifyRoutine @ 0x1407FCCC0 (PsSetCreateProcessNotifyRoutine.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 *     VfFaultsRemoveAllApps @ 0x140C34968 (VfFaultsRemoveAllApps.c)
 *     VfFaultsRemoveAllTags @ 0x140C34A00 (VfFaultsRemoveAllTags.c)
 */

__int64 ViRlrsUnload()
{
  __int64 result; // rax

  if ( ViFaultTraces )
  {
    ExFreePoolWithTag(ViFaultTraces, 0);
    ViFaultTraces = 0LL;
  }
  if ( ViFaultsProcessNotifyRoutineSet )
  {
    PsSetCreateProcessNotifyRoutine((PCREATE_PROCESS_NOTIFY_ROUTINE)VfCreateProcessCallback, 1u);
    ViFaultsProcessNotifyRoutineSet = 0;
  }
  VfFaultInjectionMaxProbability = 10000;
  VfFaultInjectionProbability = 600;
  VfFaultsRemoveAllTags();
  result = VfFaultsRemoveAllApps();
  ViFaultsInitialized = 0;
  return result;
}
