/*
 * XREFs of ViPtRaiseIrqlSafe @ 0x14060599C
 * Callers:
 *     CarAddUniqueViolation @ 0x14060D0BC (CarAddUniqueViolation.c)
 *     CarDeleteDriverRuleViolations @ 0x14060D3BC (CarDeleteDriverRuleViolations.c)
 *     CarDeletePluginRuleViolations @ 0x14060D470 (CarDeletePluginRuleViolations.c)
 *     CarDeleteRuleViolationDB @ 0x14060D500 (CarDeleteRuleViolationDB.c)
 *     CarWriteEarlyRuleViolationEvents @ 0x14060D658 (CarWriteEarlyRuleViolationEvents.c)
 *     VfPtAddStackInfoIfNotExist @ 0x140B7BDA4 (VfPtAddStackInfoIfNotExist.c)
 *     VfPtGenerateTraceInformation @ 0x140B7BF8C (VfPtGenerateTraceInformation.c)
 *     VfPtProcessAllocPoolInfo @ 0x140B7C57C (VfPtProcessAllocPoolInfo.c)
 *     VfPtProcessFreePoolInfo @ 0x140B7C634 (VfPtProcessFreePoolInfo.c)
 *     ViPtDeleteAvlTrees @ 0x140B7C760 (ViPtDeleteAvlTrees.c)
 * Callees:
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 */

unsigned __int64 __fastcall ViPtRaiseIrqlSafe(__int64 a1)
{
  unsigned __int64 result; // rax
  unsigned __int8 CurrentIrql; // di

  result = KeGetCurrentIrql();
  if ( (unsigned __int8)result < 2u && (*(_BYTE *)(a1 + 9) & 1) == 0 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
      result = KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2);
    *(_BYTE *)(a1 + 9) |= 1u;
    *(_BYTE *)(a1 + 8) = CurrentIrql;
  }
  return result;
}
