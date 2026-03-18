/*
 * XREFs of CarDeleteRuleViolationDB @ 0x14064C4F0
 * Callers:
 *     CarCleanup @ 0x1406495F0 (CarCleanup.c)
 * Callees:
 *     RtlEnumerateGenericTableAvl @ 0x1403B8060 (RtlEnumerateGenericTableAvl.c)
 *     RtlDeleteElementGenericTableAvl @ 0x1403B8A60 (RtlDeleteElementGenericTableAvl.c)
 *     ViPtRaiseIrqlSafe @ 0x140641D9C (ViPtRaiseIrqlSafe.c)
 *     CarAcquireDbLockAtDpcLevelSafe @ 0x14064C038 (CarAcquireDbLockAtDpcLevelSafe.c)
 *     CarCleanDbLockContext @ 0x14064C304 (CarCleanDbLockContext.c)
 *     CarReleaseDbLockFromDpcLevel @ 0x14064C5FC (CarReleaseDbLockFromDpcLevel.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void CarDeleteRuleViolationDB()
{
  BOOLEAN i; // dl
  RTL_AVL_TABLE *v1; // rbx
  PVOID v2; // rax
  __int128 v3; // [rsp+20h] [rbp-18h] BYREF

  if ( CarDb )
  {
    v3 = 0LL;
    BYTE9(v3) = 4;
    ViPtRaiseIrqlSafe((__int64)&v3);
    CarAcquireDbLockAtDpcLevelSafe((__int64)&v3);
    if ( CarDbInitialized )
    {
      for ( i = 1; ; i = 0 )
      {
        v1 = CarDb;
        v2 = RtlEnumerateGenericTableAvl(CarDb, i);
        if ( !v2 )
          break;
        RtlDeleteElementGenericTableAvl(v1, v2);
      }
      CarDbInitialized = 0;
    }
    CarReleaseDbLockFromDpcLevel(&v3);
    CarCleanDbLockContext((__int64)&v3);
    if ( CarDb )
    {
      ExFreePoolWithTag(CarDb, 0x4E726143u);
      CarDb = 0LL;
    }
  }
}
