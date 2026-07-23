/*
 * XREFs of IovAiReleaseDbLockFromDpcLevel @ 0x140645E00
 * Callers:
 *     IovAiIrpHasUnlockedMdl @ 0x140532AF0 (IovAiIrpHasUnlockedMdl.c)
 *     IovAiInsertObject @ 0x14053451C (IovAiInsertObject.c)
 *     IovAiRemoveObject @ 0x140534690 (IovAiRemoveObject.c)
 *     IovAiCleanDbLockContext @ 0x140645AA0 (IovAiCleanDbLockContext.c)
 *     IovAiDecrementRemoveIrp @ 0x140645BD0 (IovAiDecrementRemoveIrp.c)
 *     IovAiIsInvalidIrpMdlMarking @ 0x140645D04 (IovAiIsInvalidIrpMdlMarking.c)
 *     IovAiRemoveIrp @ 0x140645E54 (IovAiRemoveIrp.c)
 *     IovCleanupAiDb @ 0x140645F6C (IovCleanupAiDb.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402BE490 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
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
