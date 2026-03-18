/*
 * XREFs of ViPtRaiseIrqlSafe @ 0x140641D9C
 * Callers:
 *     IovAiIrpHasUnlockedMdl @ 0x1405305F0 (IovAiIrpHasUnlockedMdl.c)
 *     IovAiInsertObject @ 0x14053207C (IovAiInsertObject.c)
 *     IovAiRemoveObject @ 0x1405321F0 (IovAiRemoveObject.c)
 *     IovAiDecrementRemoveIrp @ 0x140641FF0 (IovAiDecrementRemoveIrp.c)
 *     IovAiIsInvalidIrpMdlMarking @ 0x140642124 (IovAiIsInvalidIrpMdlMarking.c)
 *     IovAiRemoveIrp @ 0x140642274 (IovAiRemoveIrp.c)
 *     IovCleanupAiDb @ 0x14064238C (IovCleanupAiDb.c)
 *     CarAddUniqueViolation @ 0x14064C0BC (CarAddUniqueViolation.c)
 *     CarDeleteDriverRuleViolations @ 0x14064C3B0 (CarDeleteDriverRuleViolations.c)
 *     CarDeletePluginRuleViolations @ 0x14064C460 (CarDeletePluginRuleViolations.c)
 *     CarDeleteRuleViolationDB @ 0x14064C4F0 (CarDeleteRuleViolationDB.c)
 *     CarWriteEarlyRuleViolationEvents @ 0x14064C650 (CarWriteEarlyRuleViolationEvents.c)
 *     VfPtAddStackInfoIfNotExist @ 0x140C29AB8 (VfPtAddStackInfoIfNotExist.c)
 *     VfPtGenerateTraceInformation @ 0x140C29C5C (VfPtGenerateTraceInformation.c)
 *     VfPtProcessAllocPoolInfo @ 0x140C2A25C (VfPtProcessAllocPoolInfo.c)
 *     VfPtProcessFreePoolInfo @ 0x140C2A308 (VfPtProcessFreePoolInfo.c)
 *     ViPtDeleteAvlTrees @ 0x140C2A430 (ViPtDeleteAvlTrees.c)
 * Callees:
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 */

unsigned __int64 __fastcall ViPtRaiseIrqlSafe(__int64 a1)
{
  unsigned __int64 result; // rax
  unsigned __int8 CurrentIrql; // di

  result = KeGetCurrentIrql();
  if ( (unsigned __int8)result < 2u && (*(_BYTE *)(a1 + 9) & 1) == 0 )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql != 2 )
      __writecr8(2uLL);
    if ( KiIrqlFlags )
      result = KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2);
    *(_BYTE *)(a1 + 9) |= 1u;
    *(_BYTE *)(a1 + 8) = CurrentIrql;
  }
  return result;
}
