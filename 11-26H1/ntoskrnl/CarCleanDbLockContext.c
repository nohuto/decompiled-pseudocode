/*
 * XREFs of CarCleanDbLockContext @ 0x14064FEE4
 * Callers:
 *     CarAddUniqueViolation @ 0x14064FC9C (CarAddUniqueViolation.c)
 *     CarDeleteDriverRuleViolations @ 0x14064FF90 (CarDeleteDriverRuleViolations.c)
 *     CarDeletePluginRuleViolations @ 0x140650040 (CarDeletePluginRuleViolations.c)
 *     CarDeleteRuleViolationDB @ 0x1406500D0 (CarDeleteRuleViolationDB.c)
 *     CarWriteEarlyRuleViolationEvents @ 0x140650230 (CarWriteEarlyRuleViolationEvents.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     CarReleaseDbLockFromDpcLevel @ 0x1406501DC (CarReleaseDbLockFromDpcLevel.c)
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
