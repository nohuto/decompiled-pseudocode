/*
 * XREFs of ViPtInitializeLockContext @ 0x140641D88
 * Callers:
 *     VfPtAddStackInfoIfNotExist @ 0x140C29AB8 (VfPtAddStackInfoIfNotExist.c)
 *     VfPtGenerateTraceInformation @ 0x140C29C5C (VfPtGenerateTraceInformation.c)
 *     VfPtProcessAllocPoolInfo @ 0x140C2A25C (VfPtProcessAllocPoolInfo.c)
 *     VfPtProcessFreePoolInfo @ 0x140C2A308 (VfPtProcessFreePoolInfo.c)
 *     ViPtDeleteAvlTrees @ 0x140C2A430 (ViPtDeleteAvlTrees.c)
 * Callees:
 *     <none>
 */

void __fastcall ViPtInitializeLockContext(__int64 a1)
{
  *(_OWORD *)a1 = 0LL;
  *(_BYTE *)(a1 + 9) = 4;
}
