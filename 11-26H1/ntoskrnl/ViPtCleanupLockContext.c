/*
 * XREFs of ViPtCleanupLockContext @ 0x140641D2C
 * Callers:
 *     VfPtAddStackInfoIfNotExist @ 0x140C29AB8 (VfPtAddStackInfoIfNotExist.c)
 *     VfPtGenerateTraceInformation @ 0x140C29C5C (VfPtGenerateTraceInformation.c)
 *     VfPtProcessAllocPoolInfo @ 0x140C2A25C (VfPtProcessAllocPoolInfo.c)
 *     VfPtProcessFreePoolInfo @ 0x140C2A308 (VfPtProcessFreePoolInfo.c)
 *     ViPtDeleteAvlTrees @ 0x140C2A430 (ViPtDeleteAvlTrees.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     ViPtReleaseTreeLockFromDpcLevel @ 0x140641DF4 (ViPtReleaseTreeLockFromDpcLevel.c)
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
