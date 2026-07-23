/*
 * XREFs of SepAcquireOrderedReadLocks @ 0x1402FD460
 * Callers:
 *     SeTokenCanImpersonate @ 0x140904C94 (SeTokenCanImpersonate.c)
 *     SeCompareTokens @ 0x140A3BAE0 (SeCompareTokens.c)
 *     SepIsSiblingTokenByPointer @ 0x140AB9228 (SepIsSiblingTokenByPointer.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x1402FE950 (ExAcquireResourceSharedLite.c)
 *     ExpAcquireResourceSharedLite @ 0x1402FEE28 (ExpAcquireResourceSharedLite.c)
 *     ExpFastResourceLegacyAcquireShared @ 0x1404B281C (ExpFastResourceLegacyAcquireShared.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

BOOLEAN __fastcall SepAcquireOrderedReadLocks(unsigned __int64 a1, struct _KTHREAD *a2)
{
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v3; // rdi
  ULONG_PTR v5; // r8
  char v6; // cl
  struct _KTHREAD *v7; // rdx
  struct _KTHREAD *v8; // rax
  ULONG_PTR StackLimit; // r8
  char v10; // cl
  ULONG_PTR v11; // rcx
  struct _KTHREAD *v13; // rax
  unsigned __int8 CurrentIrql; // cl
  unsigned __int8 v15; // cl

  CurrentThread = KeGetCurrentThread();
  v3 = a2;
  --CurrentThread->KernelApcDisable;
  if ( a1 >= (unsigned __int64)a2 )
  {
    ExAcquireResourceSharedLite((PERESOURCE)a2->StackLimit, 1u);
    v13 = KeGetCurrentThread();
    --v13->KernelApcDisable;
    return ExAcquireResourceSharedLite(*(PERESOURCE *)(a1 + 48), 1u);
  }
  v5 = *(_QWORD *)(a1 + 48);
  v6 = *(_BYTE *)(v5 + 26);
  if ( (v6 & 0x41) == 1 )
    KeBugCheckEx(0x1C6u, 0xFuLL, v5, 0LL, 0LL);
  if ( (v6 & 1) != 0 )
  {
    CurrentIrql = KeGetCurrentIrql();
    a2 = KeGetCurrentThread();
    if ( CurrentIrql > 1u )
      KeBugCheckEx(0x1C6u, 0LL, CurrentIrql, 1uLL, 0LL);
    if ( (a2->ApcState.InProgressFlags & 2) != 0 )
      goto LABEL_28;
    if ( !CurrentIrql && (a2->MiscFlags & 0x400) == 0 && !a2->WaitBlock[3].SpareLong )
LABEL_22:
      KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
  }
  LOBYTE(a2) = 1;
  if ( (*(_BYTE *)(v5 + 26) & 1) != 0 )
    ExpFastResourceLegacyAcquireShared(v5);
  else
    ExpAcquireResourceSharedLite(v5, a2);
  v8 = KeGetCurrentThread();
  --v8->KernelApcDisable;
  StackLimit = (ULONG_PTR)v3->StackLimit;
  v10 = *(_BYTE *)(StackLimit + 26);
  if ( (v10 & 0x41) == 1 )
    KeBugCheckEx(0x1C6u, 0xFuLL, StackLimit, 0LL, 0LL);
  if ( (v10 & 1) == 0 )
    goto LABEL_8;
  v15 = KeGetCurrentIrql();
  v7 = KeGetCurrentThread();
  if ( v15 > 1u )
    KeBugCheckEx(0x1C6u, 0LL, v15, 1uLL, 0LL);
  if ( (v7->ApcState.InProgressFlags & 2) != 0 )
LABEL_28:
    KeBugCheckEx(0x1C6u, 6uLL, 0LL, 0LL, 0LL);
  if ( !v15 && (v7->MiscFlags & 0x400) == 0 && !v7->WaitBlock[3].SpareLong )
    goto LABEL_22;
LABEL_8:
  LOBYTE(v7) = 1;
  v11 = (ULONG_PTR)v3->StackLimit;
  if ( (*(_BYTE *)(StackLimit + 26) & 1) != 0 )
    return ExpFastResourceLegacyAcquireShared(v11);
  else
    return ExpAcquireResourceSharedLite(v11, v7);
}
