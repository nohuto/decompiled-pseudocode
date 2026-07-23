/*
 * XREFs of MiUpdateLastSubsectionSize @ 0x1404D8198
 * Callers:
 *     MmExtendSection @ 0x140A65600 (MmExtendSection.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiGetSubsectionHoldingCrossPartitionReferences @ 0x140493854 (MiGetSubsectionHoldingCrossPartitionReferences.c)
 *     MiGetSubsectionCharges @ 0x1404AFE30 (MiGetSubsectionCharges.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1404CAB70 (MiReturnCrossPartitionSectionCharges.c)
 */

__int64 __fastcall MiUpdateLastSubsectionSize(__int64 a1, _QWORD *a2, unsigned int a3)
{
  _DWORD *v3; // r14
  unsigned __int64 v5; // rbp
  int v7; // edi
  volatile LONG *v8; // rsi
  KIRQL v9; // r9
  __int64 SubsectionHoldingCrossPartitionReferences; // rax
  __int64 result; // rax
  __int64 v12; // r10
  __int16 v13; // r9
  unsigned __int64 v14; // rax

  v3 = *(_DWORD **)a1;
  v5 = a3;
  v7 = 0;
  v8 = (volatile LONG *)(*(_QWORD *)a1 + 72LL);
  v9 = ExAcquireSpinLockExclusive(v8);
  if ( (_DWORD)v5 )
  {
    while ( 1 )
    {
      SubsectionHoldingCrossPartitionReferences = MiGetSubsectionHoldingCrossPartitionReferences(a1);
      if ( (*(_DWORD *)(MiGetSubsectionHoldingCrossPartitionReferences(SubsectionHoldingCrossPartitionReferences) + 48) & 0x3FFFFFFF) == 0 )
        break;
      if ( v7 )
        goto LABEL_11;
      if ( v9 == 17 )
        ExReleaseSpinLockExclusiveFromDpcLevel(v8);
      else
        ExReleaseSpinLockExclusive(v8, v9);
      result = MiGetSubsectionCharges(a1, v5);
      if ( (int)result < 0 )
        return result;
      v7 = 1;
      ExAcquireSpinLockExclusive(v8);
    }
    if ( v7 == 1 )
      v7 = 2;
LABEL_11:
    *(_DWORD *)(a1 + 52) -= v5;
  }
  *(_DWORD *)(a1 + 40) = (*a2 >> 12) - *(_DWORD *)(a1 + 36);
  *(_DWORD *)(a1 + 32) = *(_DWORD *)(a1 + 32) & 0xFFFFF | (*(_DWORD *)a2 << 20);
  if ( v9 == 17 )
    ExReleaseSpinLockExclusiveFromDpcLevel(v8);
  else
    ExReleaseSpinLockExclusive(v8, v9);
  if ( (_DWORD)v5 )
  {
    v12 = *(_QWORD *)v3;
    _InterlockedExchange64(
      (volatile __int64 *)(*(_QWORD *)v3 + 24LL),
      _InterlockedCompareExchange64((volatile signed __int64 *)(*(_QWORD *)v3 + 24LL), -1LL, -1LL) + (v5 << 12));
    v13 = *(_WORD *)(v12 + 12);
    v14 = v5 + (((unsigned __int64)(v13 & 0x3FF) << 32) | *(unsigned int *)(v12 + 8));
    *(_DWORD *)(v12 + 8) += v5;
    *(_WORD *)(v12 + 12) = v13 ^ (v13 ^ WORD2(v14)) & 0x3FF;
    if ( v7 == 2 )
      MiReturnCrossPartitionSectionCharges(*(_QWORD *)(stru_140E2ED08.ThreadLock + 8LL * (v3[15] & 0x3FF)), 1, v5);
  }
  return 0LL;
}
