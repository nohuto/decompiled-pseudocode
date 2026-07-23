/*
 * XREFs of ViRlrsUnload @ 0x14064C2B0
 * Callers:
 *     <none>
 * Callees:
 *     PsSetCreateProcessNotifyRoutine @ 0x1408026F0 (PsSetCreateProcessNotifyRoutine.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 *     VfFaultsRemoveAllApps @ 0x140C3A978 (VfFaultsRemoveAllApps.c)
 *     VfFaultsRemoveAllTags @ 0x140C3AA10 (VfFaultsRemoveAllTags.c)
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
