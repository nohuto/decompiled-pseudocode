/*
 * XREFs of MmAdjustWorkingSetSizeEx @ 0x1403BC3E8
 * Callers:
 *     KeSetExpectedConcurrencyCountProcess @ 0x140200A58 (KeSetExpectedConcurrencyCountProcess.c)
 *     ?KiUpdateProcessConcurrencyCounts@@YAXXZ @ 0x14021BA80 (-KiUpdateProcessConcurrencyCounts@@YAXXZ.c)
 *     CmSiAcquireProcessLockedPagesCharge @ 0x1403BC228 (CmSiAcquireProcessLockedPagesCharge.c)
 *     MmAdjustWorkingSetSize @ 0x1403BC300 (MmAdjustWorkingSetSize.c)
 *     CmSiReleaseProcessLockedPagesCharge @ 0x1403BC32C (CmSiReleaseProcessLockedPagesCharge.c)
 *     SmKmVirtualLockContextIncreaseWsMin @ 0x14063F544 (SmKmVirtualLockContextIncreaseWsMin.c)
 *     SmKmVirtualLockCtxMemoryUnlocked @ 0x14063F848 (SmKmVirtualLockCtxMemoryUnlocked.c)
 *     CmSiSetProcessWorkingSetMaximum @ 0x1406E2FDC (CmSiSetProcessWorkingSetMaximum.c)
 *     PspSetQuotaLimits @ 0x1407F0F9C (PspSetQuotaLimits.c)
 *     NtSetSystemInformation @ 0x140833840 (NtSetSystemInformation.c)
 * Callees:
 *     MiLockWorkingSetExclusive @ 0x14027E5A0 (MiLockWorkingSetExclusive.c)
 *     MiUnlockWorkingSetExclusive @ 0x14027E758 (MiUnlockWorkingSetExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402DECD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402DED10 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiUnlockWorkingSetCoreExclusive @ 0x1402FE650 (MiUnlockWorkingSetCoreExclusive.c)
 *     MiLockWorkingSetCoreExclusive @ 0x1402FE7B0 (MiLockWorkingSetCoreExclusive.c)
 *     MiUnlinkHardLimitWorkingSet @ 0x14030DA88 (MiUnlinkHardLimitWorkingSet.c)
 *     ExAllocatePoolMm @ 0x1403985B0 (ExAllocatePoolMm.c)
 *     MiMapWorkingSetTypeToVm @ 0x14039F9F0 (MiMapWorkingSetTypeToVm.c)
 *     MiEmptyWorkingSetInitiate @ 0x1403BC020 (MiEmptyWorkingSetInitiate.c)
 *     MiCheckWsLimits @ 0x1403BC800 (MiCheckWsLimits.c)
 *     PsChargeProcessQuota @ 0x1403BD2C4 (PsChargeProcessQuota.c)
 *     PsReturnProcessQuota @ 0x1403BD2FC (PsReturnProcessQuota.c)
 *     MiInsertHardLimitWorkingSet @ 0x1403BDD0C (MiInsertHardLimitWorkingSet.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MmAdjustWorkingSetSizeEx(
        unsigned __int64 a1,
        __int64 Blink_high,
        __int64 a3,
        char a4,
        int a5,
        _BYTE *a6)
{
  void *PoolMm; // r15
  _KPROCESS *Process; // r13
  int v9; // ebp
  unsigned __int64 v10; // rsi
  __int64 p_Blink; // rbx
  __int64 v13; // rax
  __int64 v14; // rdx
  int v15; // esi
  unsigned __int64 v16; // r15
  unsigned __int64 v17; // rdi
  _BYTE *v18; // rcx
  unsigned __int64 v19; // r12
  __int64 v21; // r15
  int v22; // ebp
  char v23; // di
  unsigned __int64 v24; // [rsp+30h] [rbp-58h] BYREF
  unsigned __int64 v25; // [rsp+38h] [rbp-50h] BYREF
  PVOID P; // [rsp+40h] [rbp-48h]
  __int64 v27; // [rsp+48h] [rbp-40h]
  __int64 v28; // [rsp+50h] [rbp-38h]
  KIRQL v29; // [rsp+A0h] [rbp+18h]

  PoolMm = 0LL;
  Process = 0LL;
  P = 0LL;
  v9 = a3;
  v10 = Blink_high;
  *a6 = 0;
  if ( (_DWORD)a3 )
  {
    if ( (unsigned int)(a3 - 1) > 3 )
      return 3221225713LL;
    if ( (_DWORD)a3 == 1 )
    {
      Blink_high = HIWORD(KeGetCurrentThread()->ApcState.Process[2].ProcessListEntry.Blink);
      p_Blink = (*(_QWORD *)(stru_140E2EB88.ThreadLock + 8 * Blink_high) + 22592LL) & -(__int64)(*(_BYTE *)(*(_QWORD *)(stru_140E2EB88.ThreadLock + 8 * Blink_high) + 22300LL) != 0);
    }
    else
    {
      p_Blink = (__int64)MiMapWorkingSetTypeToVm(a3);
    }
  }
  else
  {
    Process = KeGetCurrentThread()->ApcState.Process;
    p_Blink = (__int64)&Process[2].ReadyListHead.Blink;
  }
  if ( !p_Blink )
    return 3221225713LL;
  if ( a1 == -1LL && v10 == -1LL )
    return MiEmptyWorkingSetInitiate(p_Blink, 0, 0LL, -1LL);
  v13 = *(_QWORD *)(p_Blink + 16);
  v27 = v13;
  if ( (a5 & 1) != 0 && !*(_QWORD *)(v13 + 40) )
  {
    PoolMm = (void *)ExAllocatePoolMm(
                       64LL,
                       0x68uLL,
                       1682467149,
                       KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0] | 0x80000000);
    if ( !PoolMm )
      return 3221225626LL;
  }
  v28 = *(_QWORD *)(stru_140E2EB88.ThreadLock + 8LL * *(unsigned __int16 *)(p_Blink + 174));
  v29 = MiLockWorkingSetExclusive(p_Blink, Blink_high, a3);
  if ( PoolMm )
  {
    if ( *(_QWORD *)(*(_QWORD *)(p_Blink + 16) + 40LL) )
      P = PoolMm;
    else
      *(_QWORD *)(*(_QWORD *)(p_Blink + 16) + 40LL) = PoolMm;
  }
  MiLockWorkingSetCoreExclusive(p_Blink);
  if ( !v9 && (Process[1].DirectoryTableBase & 0x2000000000LL) != 0 )
  {
    v15 = -1073741558;
    goto LABEL_24;
  }
  if ( a1 )
    v24 = a1 >> 12;
  else
    v24 = *(_QWORD *)(p_Blink + 120);
  if ( v10 )
    v25 = v10 >> 12;
  else
    v25 = *(_QWORD *)(p_Blink + 128);
  v15 = MiCheckWsLimits(p_Blink, (unsigned int)&v24, (unsigned int)&v25, a5, 0);
  if ( (v15 & 0xC0000000) == 0xC0000000 )
    goto LABEL_24;
  v16 = v24;
  if ( v24 <= *(_QWORD *)(p_Blink + 120) )
  {
    v17 = *(_QWORD *)(p_Blink + 120) - v24;
LABEL_16:
    v18 = a6;
    goto LABEL_17;
  }
  v17 = v24 - *(_QWORD *)(p_Blink + 120);
  v18 = a6;
  *a6 = 1;
  if ( !a4 )
  {
    v15 = -1073741727;
    goto LABEL_24;
  }
  if ( !v9 )
  {
    v15 = PsChargeProcessQuota(Process, v14, v17);
    if ( v15 < 0 )
      goto LABEL_24;
    goto LABEL_16;
  }
LABEL_17:
  v19 = v25;
  if ( v25 < *(_QWORD *)(p_Blink + 136) && *(_QWORD *)(v27 + 32) + 6LL >= v25 )
  {
    v15 = -1073741748;
    if ( *v18 && !v9 )
      PsReturnProcessQuota(Process, v14, v17);
    goto LABEL_24;
  }
  if ( !*v18 && v17 && !v9 )
    PsReturnProcessQuota(Process, v14, v17);
  *(_QWORD *)(p_Blink + 120) = v16;
  *(_QWORD *)(p_Blink + 128) = v19;
  if ( a5 )
  {
    v21 = v28;
    v22 = 0;
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v28 + 21384));
    v23 = *(_DWORD *)(p_Blink + 184);
    if ( (a5 & 4) != 0 )
    {
      v23 |= 0x20u;
    }
    else
    {
      if ( (a5 & 8) == 0 )
        goto LABEL_36;
      v23 &= ~0x20u;
    }
    v22 = 1;
LABEL_36:
    if ( (a5 & 1) != 0 )
    {
      v23 |= 0x10u;
      MiInsertHardLimitWorkingSet(p_Blink);
    }
    else if ( (a5 & 2) != 0 )
    {
      MiUnlinkHardLimitWorkingSet(p_Blink);
      v23 &= ~0x10u;
    }
    else if ( !v22 )
    {
      goto LABEL_39;
    }
    *(_BYTE *)(p_Blink + 184) = v23;
LABEL_39:
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v21 + 21384));
  }
LABEL_24:
  MiUnlockWorkingSetCoreExclusive(p_Blink);
  MiUnlockWorkingSetExclusive(p_Blink, v29);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return (unsigned int)v15;
}
