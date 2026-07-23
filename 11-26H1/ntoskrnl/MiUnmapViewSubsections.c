/*
 * XREFs of MiUnmapViewSubsections @ 0x14036F6F0
 * Callers:
 *     MiDeleteVad @ 0x140A017D0 (MiDeleteVad.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x140248E20 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14024B4A0 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     HvlNotifyLongSpinWait @ 0x140306BC0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140307420 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiReturnCommit @ 0x14036F050 (MiReturnCommit.c)
 *     MiCheckControlArea @ 0x14036FA60 (MiCheckControlArea.c)
 *     MiReturnCrossPartitionCharges @ 0x14036FF88 (MiReturnCrossPartitionCharges.c)
 *     MiReturnResident @ 0x140370060 (MiReturnResident.c)
 *     MiControlAreaExemptFromCrossPartitionCharges @ 0x140370338 (MiControlAreaExemptFromCrossPartitionCharges.c)
 *     MiInsertUnusedSubsectionInternal @ 0x1403704C4 (MiInsertUnusedSubsectionInternal.c)
 *     MiGetSubsectionHoldingCrossPartitionReferences @ 0x140493854 (MiGetSubsectionHoldingCrossPartitionReferences.c)
 *     MiUpdateSubsectionCrossPartitionRefs @ 0x14050BCB8 (MiUpdateSubsectionCrossPartitionRefs.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     MiComputeCrossPartitionSectionCharges @ 0x140534348 (MiComputeCrossPartitionSectionCharges.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

__int64 __fastcall MiUnmapViewSubsections(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  __int64 v3; // rsi
  _QWORD *v5; // rbx
  BOOL v6; // r12d
  unsigned __int8 CurrentIrql; // r15
  unsigned int v9; // ebp
  int i; // edx
  int v11; // r8d
  __int64 v12; // rbp
  BOOL v13; // r12d
  __int64 v14; // rbx
  __int64 v16; // rdi
  ULONG_PTR v17; // r10
  __int64 v18; // rdx
  ULONG *v19; // rax
  __int64 v20; // rax
  __int64 inserted; // rax
  int v22; // eax
  __int64 v23; // rax
  __int64 SubsectionHoldingCrossPartitionReferences; // [rsp+38h] [rbp-40h]
  int v25; // [rsp+80h] [rbp+8h]
  int v26; // [rsp+88h] [rbp+10h]
  BOOL v27; // [rsp+98h] [rbp+20h]

  v3 = 0LL;
  v5 = a2;
  v6 = *(_QWORD *)(a1 + 64) != 0LL;
  v27 = v6;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a2) = 2;
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, a2);
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    v9 = 0;
    if ( _interlockedbittestandset((volatile signed __int32 *)(a1 + 72), 0x1Fu) )
      v9 = ExpWaitForSpinLockExclusiveAndAcquire((int *)(a1 + 72), CurrentIrql);
    for ( i = *(_DWORD *)(a1 + 72); (i & 0xBFFFFFFF) != 0x80000000; i = *(_DWORD *)(a1 + 72) )
    {
      if ( (i & 0x40000000) == 0 )
        _InterlockedOr((volatile signed __int32 *)(a1 + 72), 0x40000000u);
      if ( (++v9 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        HvlNotifyLongSpinWait(v9);
      }
      else
      {
        _mm_pause();
      }
    }
  }
  else
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented((int *)(a1 + 72), CurrentIrql);
  }
  if ( v5 )
  {
    v11 = 516;
    v12 = 0LL;
    v25 = 516;
    v13 = *(_QWORD *)(*v5 + 64LL) != 0LL;
    while ( !v5[1] )
    {
LABEL_20:
      if ( v5 != a3 )
      {
        v5 = (_QWORD *)v5[2];
        if ( !v13 )
        {
          v11 &= ~4u;
          v25 = v11;
        }
        if ( v5 )
          continue;
      }
      v6 = v27;
      v3 = v12;
      goto LABEL_25;
    }
    v16 = *v5;
    v17 = (ULONG_PTR)v5;
    if ( *(_QWORD *)(*v5 + 64LL) && (*(_DWORD *)(*v5 + 56LL) & 0x20) == 0 && (v5[4] & 0x10000) == 0 && !v5[10] )
      KeBugCheckEx(0x1Au, 0x42001uLL, (ULONG_PTR)v5, 0LL, 0LL);
    v18 = 0LL;
    if ( (v11 & 6) == 4 && !(unsigned int)MiControlAreaExemptFromCrossPartitionCharges(*v5) )
    {
      if ( (v11 & 8) != 0 )
      {
        v19 = 0LL;
      }
      else if ( (v11 & 0x40) != 0 )
      {
        v19 = &MiSystemPartition;
      }
      else
      {
        v19 = *(ULONG **)(stru_140E2ED08.ThreadLock
                        + 8LL * HIWORD(KeGetCurrentThread()->ApcState.Process[2].ProcessListEntry.Blink));
        v18 = 0LL;
      }
      if ( v19 != *(ULONG **)(stru_140E2ED08.ThreadLock + 8LL * (*(_DWORD *)(v16 + 60) & 0x3FF)) )
      {
        SubsectionHoldingCrossPartitionReferences = MiGetSubsectionHoldingCrossPartitionReferences(v5);
        v22 = *(_DWORD *)(MiGetSubsectionHoldingCrossPartitionReferences(SubsectionHoldingCrossPartitionReferences) + 48) & 0x3FFFFFFF;
        v26 = v22;
        if ( v22 != 0x3FFFFFFF )
        {
          MiUpdateSubsectionCrossPartitionRefs(v17, (unsigned int)(v22 - 1));
          v17 = SubsectionHoldingCrossPartitionReferences;
          if ( v26 == 1 )
          {
            v23 = MiComputeCrossPartitionSectionCharges(SubsectionHoldingCrossPartitionReferences);
            v11 = v25;
            v18 = v23;
            goto LABEL_36;
          }
          v11 = v25;
        }
        v18 = 0LL;
      }
    }
LABEL_36:
    if ( *(_QWORD *)(v16 + 64) && (*(_DWORD *)(v16 + 56) & 0x20) == 0 && (*(_DWORD *)(v17 + 32) & 0x10000) == 0 )
    {
      v20 = *(_QWORD *)(v17 + 80);
      if ( !v20 )
        KeBugCheckEx(0x1Au, 0x42001uLL, v17, 0LL, 0LL);
      *(_QWORD *)(v17 + 80) = v20 - 1;
    }
    v12 += v18;
    if ( v13 && !v5[10] && (v5[4] & 0x10000) == 0 )
    {
      inserted = MiInsertUnusedSubsectionInternal(v5, 0LL);
      v11 = v25;
      v12 += inserted;
    }
    goto LABEL_20;
  }
LABEL_25:
  *(__m128i *)(a1 + 40) = _mm_add_epi64(
                            _mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff),
                            _mm_loadu_si128((const __m128i *)(a1 + 40)));
  if ( !v3 )
    return MiCheckControlArea(a1, CurrentIrql);
  v14 = *(_QWORD *)(stru_140E2ED08.ThreadLock + 8LL * (*(_DWORD *)(a1 + 60) & 0x3FF));
  MiCheckControlArea(a1, CurrentIrql);
  if ( v6 )
    MiReturnCommit(v14, v3, 0);
  MiReturnResident(v14, v3);
  return MiReturnCrossPartitionCharges(v14, 0LL, v6, v3);
}
