/*
 * XREFs of MiAllocateSplitVads @ 0x140AC258C
 * Callers:
 *     MiDeletePartialVad @ 0x1403C6AC4 (MiDeletePartialVad.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402780A0 (ObfReferenceObjectWithTag.c)
 *     ExAllocatePoolMm @ 0x14039A310 (ExAllocatePoolMm.c)
 *     MmGetCurrentProcessorColor @ 0x140442EF0 (MmGetCurrentProcessorColor.c)
 *     MiReadVadFlags @ 0x14045E590 (MiReadVadFlags.c)
 *     MiUpControlAreaRefs @ 0x1404D7C38 (MiUpControlAreaRefs.c)
 *     MiDeleteNewlyCreatedPartialVads @ 0x1408853D4 (MiDeleteNewlyCreatedPartialVads.c)
 *     MiInitializeQuotaTracker @ 0x140995B34 (MiInitializeQuotaTracker.c)
 *     MiInsertVadCharges @ 0x140996DA0 (MiInsertVadCharges.c)
 *     MiInsertSharedCommitNode @ 0x140997340 (MiInsertSharedCommitNode.c)
 *     MiInitializePartialVad @ 0x140AC26F4 (MiInitializePartialVad.c)
 */

__int64 __fastcall MiAllocateSplitVads(__int64 a1)
{
  int inserted; // ebx
  _KPROCESS *Process; // r13
  unsigned int v4; // r15d
  int v5; // r14d
  unsigned int i; // ebp
  int CurrentProcessorColor; // eax
  __int64 PoolMm; // rax
  __int64 v10; // rsi
  PVOID v11; // rax
  void *v12; // rcx
  __int64 v13; // [rsp+50h] [rbp+8h]

  inserted = 0;
  Process = KeGetCurrentThread()->ApcState.Process;
  v4 = (*(_DWORD *)(a1 + 16) == 3) + 1;
  v13 = *(_QWORD *)(a1 + 8);
  v5 = MiReadVadFlags(v13) & 0x80000;
  for ( i = 0; i < v4; ++i )
  {
    CurrentProcessorColor = MmGetCurrentProcessorColor();
    PoolMm = ExAllocatePoolMm(
               64LL,
               (-(__int64)(v5 != 0) & 0xFFFFFFFFFFFFFFB8uLL) + 144,
               1180983638,
               CurrentProcessorColor | 0x80000000);
    v10 = PoolMm;
    if ( !PoolMm )
    {
      inserted = -1073741670;
LABEL_15:
      MiDeleteNewlyCreatedPartialVads(a1);
      return (unsigned int)inserted;
    }
    MiInitializeQuotaTracker((_BYTE *)(PoolMm + 68), (unsigned __int8)Process, 0);
    inserted = MiInitializePartialVad(v11);
    if ( inserted < 0 )
      goto LABEL_15;
    *(_DWORD *)(a1 + 40) = 0;
    if ( !v5 )
    {
      inserted = MiInsertSharedCommitNode(**(_QWORD **)(v13 + 80), (unsigned __int64)Process, 0);
      if ( inserted < 0 )
        goto LABEL_15;
      *(_DWORD *)(a1 + 40) |= 1u;
    }
    inserted = MiInsertVadCharges(v10, (ULONG_PTR)Process);
    if ( inserted < 0 )
      goto LABEL_15;
    *(_DWORD *)(a1 + 40) |= 2u;
    if ( !v5 )
    {
      v12 = *(void **)(v10 + 136);
      if ( v12 )
        ObfReferenceObjectWithTag(v12, 0x63536D4Du);
      inserted = MiUpControlAreaRefs(v10, 1);
      if ( inserted < 0 )
        goto LABEL_15;
      *(_DWORD *)(a1 + 40) |= 4u;
    }
  }
  return (unsigned int)inserted;
}
