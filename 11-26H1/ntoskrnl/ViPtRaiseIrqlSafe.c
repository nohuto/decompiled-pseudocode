/*
 * XREFs of ViPtRaiseIrqlSafe @ 0x14064597C
 * Callers:
 *     IovAiIrpHasUnlockedMdl @ 0x140532AF0 (IovAiIrpHasUnlockedMdl.c)
 *     IovAiInsertObject @ 0x14053451C (IovAiInsertObject.c)
 *     IovAiRemoveObject @ 0x140534690 (IovAiRemoveObject.c)
 *     IovAiDecrementRemoveIrp @ 0x140645BD0 (IovAiDecrementRemoveIrp.c)
 *     IovAiIsInvalidIrpMdlMarking @ 0x140645D04 (IovAiIsInvalidIrpMdlMarking.c)
 *     IovAiRemoveIrp @ 0x140645E54 (IovAiRemoveIrp.c)
 *     IovCleanupAiDb @ 0x140645F6C (IovCleanupAiDb.c)
 *     CarAddUniqueViolation @ 0x14064FC9C (CarAddUniqueViolation.c)
 *     CarDeleteDriverRuleViolations @ 0x14064FF90 (CarDeleteDriverRuleViolations.c)
 *     CarDeletePluginRuleViolations @ 0x140650040 (CarDeletePluginRuleViolations.c)
 *     CarDeleteRuleViolationDB @ 0x1406500D0 (CarDeleteRuleViolationDB.c)
 *     CarWriteEarlyRuleViolationEvents @ 0x140650230 (CarWriteEarlyRuleViolationEvents.c)
 *     VfPtAddStackInfoIfNotExist @ 0x140C2FAC8 (VfPtAddStackInfoIfNotExist.c)
 *     VfPtGenerateTraceInformation @ 0x140C2FC6C (VfPtGenerateTraceInformation.c)
 *     VfPtProcessAllocPoolInfo @ 0x140C3026C (VfPtProcessAllocPoolInfo.c)
 *     VfPtProcessFreePoolInfo @ 0x140C30318 (VfPtProcessFreePoolInfo.c)
 *     ViPtDeleteAvlTrees @ 0x140C30440 (ViPtDeleteAvlTrees.c)
 * Callees:
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
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
