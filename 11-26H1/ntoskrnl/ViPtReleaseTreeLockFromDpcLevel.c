/*
 * XREFs of ViPtReleaseTreeLockFromDpcLevel @ 0x1406459D4
 * Callers:
 *     ViPtCleanupLockContext @ 0x14064590C (ViPtCleanupLockContext.c)
 *     VfPtAddStackInfoIfNotExist @ 0x140C2FAC8 (VfPtAddStackInfoIfNotExist.c)
 *     VfPtGenerateTraceInformation @ 0x140C2FC6C (VfPtGenerateTraceInformation.c)
 *     VfPtProcessAllocPoolInfo @ 0x140C3026C (VfPtProcessAllocPoolInfo.c)
 *     VfPtProcessFreePoolInfo @ 0x140C30318 (VfPtProcessFreePoolInfo.c)
 *     ViPtDeleteAvlTrees @ 0x140C30440 (ViPtDeleteAvlTrees.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402BE490 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 */

void __fastcall ViPtReleaseTreeLockFromDpcLevel(__int64 a1, __int64 a2)
{
  char v4; // dl
  volatile LONG *v5; // rcx

  v4 = *(_BYTE *)(a2 + 9);
  if ( (v4 & 2) != 0 )
  {
    v5 = (volatile LONG *)(a1 + 128);
    if ( (v4 & 4) != 0 )
    {
      *(_QWORD *)(a1 + 136) = 0LL;
      ExReleaseSpinLockExclusiveFromDpcLevel(v5);
    }
    else
    {
      ExReleaseSpinLockSharedFromDpcLevel(v5);
    }
    *(_BYTE *)(a2 + 9) &= ~2u;
    *(_QWORD *)a2 = 0LL;
  }
}
