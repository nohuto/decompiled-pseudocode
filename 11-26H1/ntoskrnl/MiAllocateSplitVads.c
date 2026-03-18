/*
 * XREFs of MiAllocateSplitVads @ 0x140AC04EC
 * Callers:
 *     MiDeletePartialVad @ 0x1403BCC54 (MiDeletePartialVad.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x140278B30 (ObfReferenceObjectWithTag.c)
 *     ExAllocatePoolMm @ 0x1403985B0 (ExAllocatePoolMm.c)
 *     MmGetCurrentProcessorColor @ 0x14044ADC0 (MmGetCurrentProcessorColor.c)
 *     MiReadVadFlags @ 0x1404655D0 (MiReadVadFlags.c)
 *     MiUpControlAreaRefs @ 0x1404DE558 (MiUpControlAreaRefs.c)
 *     MiDeleteNewlyCreatedPartialVads @ 0x14087EFD4 (MiDeleteNewlyCreatedPartialVads.c)
 *     MiInitializeQuotaTracker @ 0x1409C4B54 (MiInitializeQuotaTracker.c)
 *     MiInsertVadCharges @ 0x1409C5DC0 (MiInsertVadCharges.c)
 *     MiInsertSharedCommitNode @ 0x1409C6360 (MiInsertSharedCommitNode.c)
 *     MiInitializePartialVad @ 0x140AC0654 (MiInitializePartialVad.c)
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
