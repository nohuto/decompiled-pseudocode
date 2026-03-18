/*
 * XREFs of ViPtAcquireTreeLockAtDpcLevelSafe @ 0x140641CBC
 * Callers:
 *     VfPtAddStackInfoIfNotExist @ 0x140C29AB8 (VfPtAddStackInfoIfNotExist.c)
 *     VfPtGenerateTraceInformation @ 0x140C29C5C (VfPtGenerateTraceInformation.c)
 *     VfPtProcessAllocPoolInfo @ 0x140C2A25C (VfPtProcessAllocPoolInfo.c)
 *     VfPtProcessFreePoolInfo @ 0x140C2A308 (VfPtProcessFreePoolInfo.c)
 *     ViPtDeleteAvlTrees @ 0x140C2A430 (ViPtDeleteAvlTrees.c)
 * Callees:
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402DED10 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x1402EDFB0 (ExAcquireSpinLockSharedAtDpcLevel.c)
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
