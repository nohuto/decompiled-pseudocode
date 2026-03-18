/*
 * XREFs of CarCleanDbLockContext @ 0x14064C304
 * Callers:
 *     CarAddUniqueViolation @ 0x14064C0BC (CarAddUniqueViolation.c)
 *     CarDeleteDriverRuleViolations @ 0x14064C3B0 (CarDeleteDriverRuleViolations.c)
 *     CarDeletePluginRuleViolations @ 0x14064C460 (CarDeletePluginRuleViolations.c)
 *     CarDeleteRuleViolationDB @ 0x14064C4F0 (CarDeleteRuleViolationDB.c)
 *     CarWriteEarlyRuleViolationEvents @ 0x14064C650 (CarWriteEarlyRuleViolationEvents.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     CarReleaseDbLockFromDpcLevel @ 0x14064C5FC (CarReleaseDbLockFromDpcLevel.c)
 */

__int64 __fastcall CarCleanDbLockContext(__int64 a1)
{
  __int64 result; // rax
  unsigned __int64 v3; // rdi

  if ( (*(_BYTE *)(a1 + 9) & 2) != 0 )
    result = CarReleaseDbLockFromDpcLevel(a1);
  if ( (*(_BYTE *)(a1 + 9) & 1) != 0 )
  {
    v3 = *(unsigned __int8 *)(a1 + 8);
    if ( KiIrqlFlags )
      result = KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), *(_BYTE *)(a1 + 8));
    __writecr8(v3);
    *(_BYTE *)(a1 + 9) &= ~1u;
    *(_BYTE *)(a1 + 8) = 0;
  }
  return result;
}
