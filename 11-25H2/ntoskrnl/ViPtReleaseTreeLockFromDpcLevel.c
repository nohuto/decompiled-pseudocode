/*
 * XREFs of ViPtReleaseTreeLockFromDpcLevel @ 0x1406059F0
 * Callers:
 *     ViPtCleanupLockContext @ 0x14060592C (ViPtCleanupLockContext.c)
 *     VfPtAddStackInfoIfNotExist @ 0x140B7BDA4 (VfPtAddStackInfoIfNotExist.c)
 *     VfPtGenerateTraceInformation @ 0x140B7BF8C (VfPtGenerateTraceInformation.c)
 *     VfPtProcessAllocPoolInfo @ 0x140B7C57C (VfPtProcessAllocPoolInfo.c)
 *     VfPtProcessFreePoolInfo @ 0x140B7C634 (VfPtProcessFreePoolInfo.c)
 *     ViPtDeleteAvlTrees @ 0x140B7C760 (ViPtDeleteAvlTrees.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402B5440 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14031F890 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
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
