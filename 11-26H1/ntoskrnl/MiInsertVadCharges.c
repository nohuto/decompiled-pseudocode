/*
 * XREFs of MiInsertVadCharges @ 0x140996DA0
 * Callers:
 *     MiInitializeDataVad @ 0x140996B10 (MiInitializeDataVad.c)
 *     MiAllocateNewSubAllocatedRegion @ 0x14099B400 (MiAllocateNewSubAllocatedRegion.c)
 *     MiInitializeImageVad @ 0x14099ED2C (MiInitializeImageVad.c)
 *     MiReserveUserMemoryInsertVad @ 0x140A0146C (MiReserveUserMemoryInsertVad.c)
 *     MiMapViewOfPhysicalSection @ 0x140A0228C (MiMapViewOfPhysicalSection.c)
 *     MiMapLockedPagesInUserSpace @ 0x140A02A08 (MiMapLockedPagesInUserSpace.c)
 *     MiInsertProcessVads @ 0x140A085A8 (MiInsertProcessVads.c)
 *     MiAllocateSplitVads @ 0x140AC258C (MiAllocateSplitVads.c)
 *     MiInsertChildVads @ 0x140B22D0C (MiInsertChildVads.c)
 *     MiAllocateEnclaveVad @ 0x140B6C330 (MiAllocateEnclaveVad.c)
 * Callees:
 *     LOCK_PAGE_TABLE_COMMITMENT @ 0x14027EC6C (LOCK_PAGE_TABLE_COMMITMENT.c)
 *     UNLOCK_PAGE_TABLE_COMMITMENT @ 0x140318F00 (UNLOCK_PAGE_TABLE_COMMITMENT.c)
 *     MiChargeResident @ 0x14031A5D0 (MiChargeResident.c)
 *     MiConfirmQuotaAmount @ 0x1403C6C30 (MiConfirmQuotaAmount.c)
 *     MiConfirmQuotaProcess @ 0x1403C6C74 (MiConfirmQuotaProcess.c)
 *     PsChargeProcessNonPagedPoolQuota @ 0x1403C6CB0 (PsChargeProcessNonPagedPoolQuota.c)
 *     PspChargeQuota @ 0x1403C7410 (PspChargeQuota.c)
 *     MiGetProcessPartition @ 0x1404441E0 (MiGetProcessPartition.c)
 *     MiComputeVadCharges @ 0x1404BDF20 (MiComputeVadCharges.c)
 *     MiCommitPageTablesForVad @ 0x140996FF8 (MiCommitPageTablesForVad.c)
 *     MiSetVadBits @ 0x140997210 (MiSetVadBits.c)
 *     MiReturnVadCharges @ 0x140997954 (MiReturnVadCharges.c)
 */

__int64 __fastcall MiInsertVadCharges(__int64 a1, ULONG_PTR a2)
{
  unsigned __int8 *v4; // rbx
  unsigned __int64 v5; // r12
  unsigned __int64 v6; // r15
  __int64 v7; // r15
  unsigned __int64 v8; // r12
  __int64 v9; // r8
  unsigned __int64 v10; // rdi
  int v11; // esi
  struct _KLOCK_ENTRIES *v12; // r9
  struct _KTHREAD *CurrentThread; // rbx
  int v14; // esi
  ULONG *ProcessPartition; // rax
  unsigned __int64 v17; // r9
  __int128 v18; // [rsp+20h] [rbp-38h] BYREF
  unsigned __int64 v19; // [rsp+30h] [rbp-28h]

  v4 = (unsigned __int8 *)(a1 + 68);
  v5 = *(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32);
  v6 = *(unsigned int *)(a1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32);
  v19 = 0LL;
  v7 = (v6 << 12) | 0xFFF;
  v8 = v5 << 12;
  v18 = 0LL;
  MiConfirmQuotaProcess((unsigned __int8 *)(a1 + 68), a2);
  MiConfirmQuotaAmount(v4, 0LL);
  MiComputeVadCharges(a1, (__int64)&v18);
  v10 = v19;
  if ( v19 )
  {
    if ( v4 )
    {
      MiConfirmQuotaProcess(v4, a2);
      MiConfirmQuotaAmount(v4, 0LL);
    }
    v11 = PsChargeProcessNonPagedPoolQuota(a2, v10);
    if ( v11 < 0 )
    {
      v19 = 0LL;
      v18 = 0uLL;
      MiReturnVadCharges(a1, &v18);
      return (unsigned int)v11;
    }
    if ( v4 )
      *v4 = *v4 & 0xF | v10 & 0xF0;
  }
  if ( *((_QWORD *)&v18 + 1) )
  {
    if ( (PEPROCESS)a2 != PsInitialSystemProcess )
    {
      v14 = PspChargeQuota(*(_QWORD *)(a2 + 760), a2, 1, *((unsigned __int64 *)&v18 + 1));
      if ( v14 < 0 )
      {
        v18 = 0uLL;
LABEL_15:
        MiReturnVadCharges(a1, &v18);
        return (unsigned int)v14;
      }
    }
  }
  v12 = (struct _KLOCK_ENTRIES *)v18;
  if ( !(_QWORD)v18
    || (ProcessPartition = (ULONG *)MiGetProcessPartition(a2),
        (unsigned int)MiChargeResident(ProcessPartition, v17, 128LL)) )
  {
    if ( (*(unsigned int *)(a1 + 52) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 34) << 32)) >= 0x7FFFFFFFDLL
      && (v12 = (struct _KLOCK_ENTRIES *)(*(unsigned int *)(a1 + 52) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 34) << 32)),
          v12 != (struct _KLOCK_ENTRIES *)0x7FFFFFFFELL)
      || (CurrentThread = KeGetCurrentThread(),
          LOCK_PAGE_TABLE_COMMITMENT((__int64)CurrentThread, a2, v9, v12),
          v14 = MiCommitPageTablesForVad(a1, v8, v7, 0LL),
          UNLOCK_PAGE_TABLE_COMMITMENT((__int64)CurrentThread, a2),
          v14 >= 0) )
    {
      MiSetVadBits(a1);
      return 0LL;
    }
    goto LABEL_15;
  }
  *(_QWORD *)&v18 = 0LL;
  MiReturnVadCharges(a1, &v18);
  return 3221225626LL;
}
