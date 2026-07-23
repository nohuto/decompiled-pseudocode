/*
 * XREFs of CarCleanup @ 0x14064D1D0
 * Callers:
 *     VfVolatileClearDifRuleClass @ 0x14064B544 (VfVolatileClearDifRuleClass.c)
 *     VfVolatileSetDifRuleClass @ 0x14064B744 (VfVolatileSetDifRuleClass.c)
 *     Phase1InitializationIoReady @ 0x140CB3060 (Phase1InitializationIoReady.c)
 * Callees:
 *     KeDeregisterBugCheckReasonCallback @ 0x1404D5620 (KeDeregisterBugCheckReasonCallback.c)
 *     McGenEventUnregister_EtwUnregister @ 0x14064D090 (McGenEventUnregister_EtwUnregister.c)
 *     CarDeleteRuleViolationDB @ 0x1406500D0 (CarDeleteRuleViolationDB.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     EtwUnregister @ 0x1409BE550 (EtwUnregister.c)
 */

unsigned __int64 CarCleanup()
{
  unsigned __int64 result; // rax
  REGHANDLE v1; // rcx

  result = (unsigned int)CarInitialized;
  if ( CarInitialized )
  {
    CarDeleteRuleViolationDB();
    if ( CarLogInitialized )
    {
      v1 = qword_140E08E70;
      qword_140E08E70 = 0LL;
      dword_140E08E50 = 0;
      EtwUnregister(v1);
      CarLogInitialized = 0;
      McGenEventUnregister_EtwUnregister();
    }
    KeDeregisterBugCheckReasonCallback((PKBUGCHECK_REASON_CALLBACK_RECORD)&stru_140F06A28.152);
    stru_140F06A28.ApcState.ApcListHead[1].Flink = 0LL;
    result = (unsigned __int64)memset_0(&stru_140F06A28.216, 0, 0x80uLL);
    _InterlockedExchange(&CarInitialized, 0);
  }
  return result;
}
