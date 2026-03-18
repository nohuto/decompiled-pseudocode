/*
 * XREFs of CarInit @ 0x140649ADC
 * Callers:
 *     VfVolatileSetDifRuleClass @ 0x140647B64 (VfVolatileSetDifRuleClass.c)
 *     Phase1InitializationIoReady @ 0x140CAD020 (Phase1InitializationIoReady.c)
 *     VfInitBootDriversLoaded @ 0x140CDE91C (VfInitBootDriversLoaded.c)
 * Callees:
 *     KeRegisterBugCheckReasonCallback @ 0x14024D7A0 (KeRegisterBugCheckReasonCallback.c)
 *     CarInitLogging @ 0x140649174 (CarInitLogging.c)
 *     CarLoadFromDV @ 0x14064C94C (CarLoadFromDV.c)
 *     CarReadRegistry @ 0x14064C9A0 (CarReadRegistry.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 */

__int64 CarInit()
{
  RTL_AVL_TABLE *Pool2; // rax
  RTL_AVL_TABLE *v2; // rbx
  __int64 v3; // rcx

  if ( CarInitialized )
    return 0LL;
  Pool2 = (RTL_AVL_TABLE *)ExAllocatePool2(0x40uLL);
  CarDb = Pool2;
  v2 = Pool2;
  if ( Pool2 )
  {
    memset_0(Pool2, 0, sizeof(RTL_AVL_TABLE));
    v2->BalancedRoot.Parent = &v2->BalancedRoot;
    v2->CompareRoutine = (_RTL_GENERIC_COMPARE_RESULTS (__fastcall *)(_RTL_AVL_TABLE *, void *, void *))CarComparRuleViolation;
    v2->AllocateRoutine = (void *(__fastcall *)(_RTL_AVL_TABLE *, unsigned int))CarAllocDbNode;
    v2->FreeRoutine = (void (__fastcall *)(_RTL_AVL_TABLE *, void *))&CarFreeDbNode;
    _InterlockedExchange(&CarDbInitialized, 1);
    qword_140F08168 = (__int64)&CarConfigurationEntries;
    CarConfigurationEntries = (__int64)&CarConfigurationEntries;
    memset_0(&stru_140F066E8.WaitBlockFill11[56], 0, 0x1800uLL);
    *(_DWORD *)&stru_140F066E8.WaitBlockFill11[24] = 1;
    *(_OWORD *)&stru_140F066E8.WaitBlockFill11[32] = 0uLL;
    if ( (_DWORD)InitializationPhase )
    {
      LOBYTE(v3) = 1;
      CarLoadFromDV(v3);
      CarReadRegistry();
    }
    else
    {
      CarLoadFromDV(0LL);
    }
    stru_140F066E8.Timer.Header.SignalState = *(_DWORD *)&stru_140F066E8.WaitBlockFill11[40];
    LODWORD(stru_140F066E8.Timer.Header.WaitListHead.Flink) = *(_DWORD *)&stru_140F066E8.WaitBlockFill11[24];
    stru_140F066E8.Timer.Header.LockNV = (unsigned __int16)NtBuildNumber;
    stru_140F066E8.WaitListEntry.Flink = (struct _LIST_ENTRY *)0x8000000001LL;
    *(struct _LIST_ENTRY **)((char *)&stru_140F066E8.Timer.Header.WaitListHead.Flink + 4) = (struct _LIST_ENTRY *)stru_140F066E8.WaitBlock[0].Object;
    LOBYTE(stru_140F066E8.UserIdealProcessor) = 0;
    KeRegisterBugCheckReasonCallback(
      (PKBUGCHECK_REASON_CALLBACK_RECORD)&stru_140F066E8.152,
      CarpSecondaryDataCallback,
      KbCallbackSecondaryDumpData,
      &CarComponentName);
    if ( DifIsVolatileMode )
      CarInitLogging();
    CarInitialized = 1;
    return 0LL;
  }
  return 3221225495LL;
}
