/*
 * XREFs of CarCleanup @ 0x1406495F0
 * Callers:
 *     VfVolatileClearDifRuleClass @ 0x140647964 (VfVolatileClearDifRuleClass.c)
 *     VfVolatileSetDifRuleClass @ 0x140647B64 (VfVolatileSetDifRuleClass.c)
 *     Phase1InitializationIoReady @ 0x140CAD020 (Phase1InitializationIoReady.c)
 * Callees:
 *     KeDeregisterBugCheckReasonCallback @ 0x1404DBF40 (KeDeregisterBugCheckReasonCallback.c)
 *     McGenEventUnregister_EtwUnregister @ 0x1406494B0 (McGenEventUnregister_EtwUnregister.c)
 *     CarDeleteRuleViolationDB @ 0x14064C4F0 (CarDeleteRuleViolationDB.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     EtwUnregister @ 0x140A84ED0 (EtwUnregister.c)
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
      v1 = qword_140E08EC8;
      qword_140E08EC8 = 0LL;
      dword_140E08EA8 = 0;
      EtwUnregister(v1);
      CarLogInitialized = 0;
      McGenEventUnregister_EtwUnregister();
    }
    KeDeregisterBugCheckReasonCallback((PKBUGCHECK_REASON_CALLBACK_RECORD)&stru_140F066E8.152);
    stru_140F066E8.ApcState.ApcListHead[1].Flink = 0LL;
    result = (unsigned __int64)memset_0(&stru_140F066E8.216, 0, 0x80uLL);
    _InterlockedExchange(&CarInitialized, 0);
  }
  return result;
}
