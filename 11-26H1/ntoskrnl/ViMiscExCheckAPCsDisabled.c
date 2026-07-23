/*
 * XREFs of ViMiscExCheckAPCsDisabled @ 0x140C444A8
 * Callers:
 *     VfMiscExAcquireFastMutexUnsafe_Entry @ 0x140C42850 (VfMiscExAcquireFastMutexUnsafe_Entry.c)
 *     VfMiscExReleaseFastMutexUnsafe_Entry @ 0x140C42A80 (VfMiscExReleaseFastMutexUnsafe_Entry.c)
 *     VfMiscExReleaseFastMutex_Entry @ 0x140C42AB0 (VfMiscExReleaseFastMutex_Entry.c)
 *     VfMiscExfAcquirePushLockExclusive_Entry @ 0x140C42B20 (VfMiscExfAcquirePushLockExclusive_Entry.c)
 *     VfMiscExfReleasePushLockShared_Entry @ 0x140C42B50 (VfMiscExfReleasePushLockShared_Entry.c)
 * Callees:
 *     CarReportRuleViolationFromNt @ 0x140C31F2C (CarReportRuleViolationFromNt.c)
 */

unsigned __int8 __fastcall ViMiscExCheckAPCsDisabled(ULONG_PTR BugCheckParameter1, __int64 a2, __int64 a3)
{
  unsigned __int8 CurrentIrql; // bl

  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 1
    && (KeGetCurrentThread()->MiscFlags & 0x400) == 0
    && !KeGetCurrentThread()->WaitBlock[3].SpareLong )
  {
    CarReportRuleViolationFromNt(
      196,
      (unsigned int)BugCheckParameter1,
      CurrentIrql,
      KeGetCurrentThread()->CombinedApcDisable,
      a2,
      0xBu,
      a3);
  }
  return CurrentIrql;
}
