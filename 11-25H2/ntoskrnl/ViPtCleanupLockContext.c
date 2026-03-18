/*
 * XREFs of ViPtCleanupLockContext @ 0x14060592C
 * Callers:
 *     VfPtAddStackInfoIfNotExist @ 0x140B7BDA4 (VfPtAddStackInfoIfNotExist.c)
 *     VfPtGenerateTraceInformation @ 0x140B7BF8C (VfPtGenerateTraceInformation.c)
 *     VfPtProcessAllocPoolInfo @ 0x140B7C57C (VfPtProcessAllocPoolInfo.c)
 *     VfPtProcessFreePoolInfo @ 0x140B7C634 (VfPtProcessFreePoolInfo.c)
 *     ViPtDeleteAvlTrees @ 0x140B7C760 (ViPtDeleteAvlTrees.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     ViPtReleaseTreeLockFromDpcLevel @ 0x1406059F0 (ViPtReleaseTreeLockFromDpcLevel.c)
 */

__int64 __fastcall ViPtCleanupLockContext(__int64 a1)
{
  __int64 result; // rax
  unsigned __int64 v3; // rdi

  if ( (*(_BYTE *)(a1 + 9) & 2) != 0 )
    result = ViPtReleaseTreeLockFromDpcLevel(*(_QWORD *)a1, a1);
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
