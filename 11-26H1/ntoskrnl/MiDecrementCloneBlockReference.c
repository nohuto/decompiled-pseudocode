/*
 * XREFs of MiDecrementCloneBlockReference @ 0x1404A91C0
 * Callers:
 *     MiDecommitSharedPageTail @ 0x1402BDD20 (MiDecommitSharedPageTail.c)
 *     MiDecommitHandleProtoFormatPte @ 0x140362D00 (MiDecommitHandleProtoFormatPte.c)
 *     MiCopyOnWriteCombineCloneDereference @ 0x14036CA50 (MiCopyOnWriteCombineCloneDereference.c)
 *     MiCopyOnWriteUpdatePte @ 0x14036D080 (MiCopyOnWriteUpdatePte.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiDecrementCloneBlock @ 0x14036BFF0 (MiDecrementCloneBlock.c)
 *     MiDeleteCloneDescriptor @ 0x1404A92D8 (MiDeleteCloneDescriptor.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

__int64 __fastcall MiDecrementCloneBlockReference(
        signed __int64 *BugCheckParameter2,
        ULONG_PTR BugCheckParameter3,
        __int64 a3)
{
  struct _KTHREAD *v5; // rcx
  unsigned int v6; // eax
  signed __int64 v7; // rsi
  unsigned int v8; // r14d
  int v9; // ebp
  bool v10; // zf
  signed __int64 v11; // rax
  int v13; // [rsp+60h] [rbp+18h] BYREF

  v5 = *(struct _KTHREAD **)(a3 + 624);
  if ( v5 && v5 != KeGetCurrentThread() )
    KeBugCheckEx(0x1Au, 0x61945uLL, (ULONG_PTR)BugCheckParameter2, BugCheckParameter3, 0LL);
  v6 = MiDecrementCloneBlock(
         *(_QWORD *)(BugCheckParameter2[7] + 24),
         a3 + 1024,
         BugCheckParameter3,
         *(_QWORD *)(*(_QWORD *)(a3 + 1040) + 1192LL) > (unsigned __int64)BugCheckParameter2[12],
         &v13);
  v7 = BugCheckParameter2[6];
  v8 = v6;
  v9 = 0;
  do
  {
    if ( v7 == 1 )
    {
      v9 = 1;
      ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(*(_QWORD *)(a3 + 1040) + 1280LL));
    }
    v11 = _InterlockedCompareExchange64(BugCheckParameter2 + 6, v7 - 1, v7);
    v10 = v7 == v11;
    v7 = v11;
  }
  while ( !v10 );
  if ( v11 == 1 )
    MiDeleteCloneDescriptor(a3, BugCheckParameter2);
  if ( v9 )
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(*(_QWORD *)(a3 + 1040) + 1280LL));
  return v8;
}
