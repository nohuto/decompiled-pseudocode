/*
 * XREFs of IovAiReleaseDbLockFromDpcLevel @ 0x140642220
 * Callers:
 *     IovAiIrpHasUnlockedMdl @ 0x1405305F0 (IovAiIrpHasUnlockedMdl.c)
 *     IovAiInsertObject @ 0x14053207C (IovAiInsertObject.c)
 *     IovAiRemoveObject @ 0x1405321F0 (IovAiRemoveObject.c)
 *     IovAiCleanDbLockContext @ 0x140641EC0 (IovAiCleanDbLockContext.c)
 *     IovAiDecrementRemoveIrp @ 0x140641FF0 (IovAiDecrementRemoveIrp.c)
 *     IovAiIsInvalidIrpMdlMarking @ 0x140642124 (IovAiIsInvalidIrpMdlMarking.c)
 *     IovAiRemoveIrp @ 0x140642274 (IovAiRemoveIrp.c)
 *     IovCleanupAiDb @ 0x14064238C (IovCleanupAiDb.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402DC6D0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402DECD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 */

void __fastcall IovAiReleaseDbLockFromDpcLevel(__int64 a1)
{
  char v1; // al
  PRTL_AVL_TABLE v3; // rcx

  v1 = *(_BYTE *)(a1 + 9);
  if ( (v1 & 2) != 0 )
  {
    v3 = IovAiDb;
    if ( (v1 & 4) != 0 )
    {
      IovAiDb[1].OrderedPointer = 0LL;
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)&v3[1].BalancedRoot.Balance);
    }
    else
    {
      ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)&IovAiDb[1].BalancedRoot.Balance);
    }
    *(_BYTE *)(a1 + 9) &= ~2u;
    *(_QWORD *)a1 = 0LL;
  }
}
