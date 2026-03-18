/*
 * XREFs of CarReleaseDbLockFromDpcLevel @ 0x14064C5FC
 * Callers:
 *     CarAddUniqueViolation @ 0x14064C0BC (CarAddUniqueViolation.c)
 *     CarCleanDbLockContext @ 0x14064C304 (CarCleanDbLockContext.c)
 *     CarDeleteDriverRuleViolations @ 0x14064C3B0 (CarDeleteDriverRuleViolations.c)
 *     CarDeletePluginRuleViolations @ 0x14064C460 (CarDeletePluginRuleViolations.c)
 *     CarDeleteRuleViolationDB @ 0x14064C4F0 (CarDeleteRuleViolationDB.c)
 *     CarWriteEarlyRuleViolationEvents @ 0x14064C650 (CarWriteEarlyRuleViolationEvents.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402DC6D0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402DECD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 */

void __fastcall CarReleaseDbLockFromDpcLevel(__int64 a1)
{
  char v1; // al
  PRTL_AVL_TABLE v3; // rcx

  v1 = *(_BYTE *)(a1 + 9);
  if ( (v1 & 2) != 0 )
  {
    v3 = CarDb;
    if ( (v1 & 4) != 0 )
    {
      CarDb[1].OrderedPointer = 0LL;
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)&v3[1].BalancedRoot.Balance);
    }
    else
    {
      ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)&CarDb[1].BalancedRoot.Balance);
    }
    *(_BYTE *)(a1 + 9) &= ~2u;
    *(_QWORD *)a1 = 0LL;
  }
}
