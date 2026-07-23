/*
 * XREFs of ViPtAcquireTreeLockAtDpcLevelSafe @ 0x14064589C
 * Callers:
 *     VfPtAddStackInfoIfNotExist @ 0x140C2FAC8 (VfPtAddStackInfoIfNotExist.c)
 *     VfPtGenerateTraceInformation @ 0x140C2FC6C (VfPtGenerateTraceInformation.c)
 *     VfPtProcessAllocPoolInfo @ 0x140C3026C (VfPtProcessAllocPoolInfo.c)
 *     VfPtProcessFreePoolInfo @ 0x140C30318 (VfPtProcessFreePoolInfo.c)
 *     ViPtDeleteAvlTrees @ 0x140C30440 (ViPtDeleteAvlTrees.c)
 * Callees:
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x1402D0030 (ExAcquireSpinLockSharedAtDpcLevel.c)
 */

void __fastcall ViPtAcquireTreeLockAtDpcLevelSafe(__int64 a1, __int64 a2)
{
  char v4; // al
  struct _KTHREAD *CurrentThread; // rsi
  volatile LONG *v6; // rcx

  if ( *(struct _KTHREAD **)(a1 + 136) != KeGetCurrentThread() )
  {
    v4 = *(_BYTE *)(a2 + 9);
    if ( (v4 & 2) == 0 )
    {
      CurrentThread = KeGetCurrentThread();
      v6 = (volatile LONG *)(a1 + 128);
      if ( (v4 & 4) != 0 )
      {
        ExAcquireSpinLockExclusiveAtDpcLevel(v6);
        *(_QWORD *)(a1 + 136) = CurrentThread;
      }
      else
      {
        ExAcquireSpinLockSharedAtDpcLevel(v6);
      }
      *(_BYTE *)(a2 + 9) |= 2u;
      *(_QWORD *)a2 = a1;
    }
  }
}
