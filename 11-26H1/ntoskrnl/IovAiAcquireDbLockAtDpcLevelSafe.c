/*
 * XREFs of IovAiAcquireDbLockAtDpcLevelSafe @ 0x140645A20
 * Callers:
 *     IovAiIrpHasUnlockedMdl @ 0x140532AF0 (IovAiIrpHasUnlockedMdl.c)
 *     IovAiInsertObject @ 0x14053451C (IovAiInsertObject.c)
 *     IovAiRemoveObject @ 0x140534690 (IovAiRemoveObject.c)
 *     IovAiDecrementRemoveIrp @ 0x140645BD0 (IovAiDecrementRemoveIrp.c)
 *     IovAiIsInvalidIrpMdlMarking @ 0x140645D04 (IovAiIsInvalidIrpMdlMarking.c)
 *     IovAiRemoveIrp @ 0x140645E54 (IovAiRemoveIrp.c)
 *     IovCleanupAiDb @ 0x140645F6C (IovCleanupAiDb.c)
 * Callees:
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x1402D0030 (ExAcquireSpinLockSharedAtDpcLevel.c)
 */

char __fastcall IovAiAcquireDbLockAtDpcLevelSafe(__int64 a1)
{
  PRTL_AVL_TABLE v2; // rax
  struct _KTHREAD *CurrentThread; // rdi
  volatile LONG *p_Balance; // rcx

  LOBYTE(v2) = (_BYTE)IovAiDb;
  if ( IovAiDb[1].OrderedPointer != KeGetCurrentThread() )
  {
    LOBYTE(v2) = *(_BYTE *)(a1 + 9);
    if ( ((unsigned __int8)v2 & 2) == 0 )
    {
      CurrentThread = KeGetCurrentThread();
      p_Balance = (volatile LONG *)&IovAiDb[1].BalancedRoot.Balance;
      if ( ((unsigned __int8)v2 & 4) != 0 )
      {
        ExAcquireSpinLockExclusiveAtDpcLevel(p_Balance);
        IovAiDb[1].OrderedPointer = CurrentThread;
      }
      else
      {
        ExAcquireSpinLockSharedAtDpcLevel(p_Balance);
      }
      v2 = IovAiDb;
      *(_BYTE *)(a1 + 9) |= 2u;
      *(_QWORD *)a1 = v2;
    }
  }
  return (char)v2;
}
