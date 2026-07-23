/*
 * XREFs of CarInit @ 0x14064D6BC
 * Callers:
 *     VfVolatileSetDifRuleClass @ 0x14064B744 (VfVolatileSetDifRuleClass.c)
 *     Phase1InitializationIoReady @ 0x140CB3060 (Phase1InitializationIoReady.c)
 *     VfInitBootDriversLoaded @ 0x140CE4CB4 (VfInitBootDriversLoaded.c)
 * Callees:
 *     KeRegisterBugCheckReasonCallback @ 0x14024F100 (KeRegisterBugCheckReasonCallback.c)
 *     CarInitLogging @ 0x14064CD54 (CarInitLogging.c)
 *     CarLoadFromDV @ 0x14065052C (CarLoadFromDV.c)
 *     CarReadRegistry @ 0x140650580 (CarReadRegistry.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 CarInit()
{
  _RTL_AVL_TABLE *Pool2; // rax
  _RTL_AVL_TABLE *v2; // rbx
  __int64 v3; // rcx

  if ( CarInitialized )
    return 0LL;
  Pool2 = (_RTL_AVL_TABLE *)ExAllocatePool2(0x40uLL);
  CarDb = Pool2;
  v2 = Pool2;
  if ( Pool2 )
  {
    memset_0(Pool2, 0, sizeof(_RTL_AVL_TABLE));
    v2->BalancedRoot.Parent = &v2->BalancedRoot;
    v2->CompareRoutine = (_RTL_GENERIC_COMPARE_RESULTS (__fastcall *)(_RTL_AVL_TABLE *, void *, void *))CarComparRuleViolation;
    v2->AllocateRoutine = (void *(__fastcall *)(_RTL_AVL_TABLE *, unsigned int))CarAllocDbNode;
    v2->FreeRoutine = (void (__fastcall *)(_RTL_AVL_TABLE *, void *))&CarFreeDbNode;
    _InterlockedExchange(&CarDbInitialized, 1);
    qword_140F084C8 = (__int64)&CarConfigurationEntries;
    CarConfigurationEntries = (__int64)&CarConfigurationEntries;
    memset_0(&stru_140F06A28.WaitBlockFill11[56], 0, 0x1800uLL);
    CarTipTag = 0;
    CarXdvOptions = 0;
    *(_DWORD *)&stru_140F06A28.WaitBlockFill11[24] = 1;
    CarRuleClasses = 0LL;
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
    stru_140F06A28.Timer.Header.SignalState = CarTipTag;
    LODWORD(stru_140F06A28.Timer.Header.WaitListHead.Flink) = *(_DWORD *)&stru_140F06A28.WaitBlockFill11[24];
    stru_140F06A28.Timer.Header.LockNV = (unsigned __int16)NtBuildNumber;
    stru_140F06A28.WaitListEntry.Flink = (struct _LIST_ENTRY *)0x8000000001LL;
    *(struct _LIST_ENTRY **)((char *)&stru_140F06A28.Timer.Header.WaitListHead.Flink + 4) = (struct _LIST_ENTRY *)CarRuleClasses;
    LOBYTE(stru_140F06A28.UserIdealProcessor) = 0;
    KeRegisterBugCheckReasonCallback(
      (PKBUGCHECK_REASON_CALLBACK_RECORD)&stru_140F06A28.152,
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
