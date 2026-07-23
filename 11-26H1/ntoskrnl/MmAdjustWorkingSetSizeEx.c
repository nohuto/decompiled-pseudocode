/*
 * XREFs of MmAdjustWorkingSetSizeEx @ 0x1403C6258
 * Callers:
 *     KeSetExpectedConcurrencyCountProcess @ 0x140200A58 (KeSetExpectedConcurrencyCountProcess.c)
 *     ?KiUpdateProcessConcurrencyCounts@@YAXXZ @ 0x14021D410 (-KiUpdateProcessConcurrencyCounts@@YAXXZ.c)
 *     CmSiAcquireProcessLockedPagesCharge @ 0x1403C6098 (CmSiAcquireProcessLockedPagesCharge.c)
 *     MmAdjustWorkingSetSize @ 0x1403C6170 (MmAdjustWorkingSetSize.c)
 *     CmSiReleaseProcessLockedPagesCharge @ 0x1403C619C (CmSiReleaseProcessLockedPagesCharge.c)
 *     SmKmVirtualLockContextIncreaseWsMin @ 0x140643124 (SmKmVirtualLockContextIncreaseWsMin.c)
 *     SmKmVirtualLockCtxMemoryUnlocked @ 0x140643428 (SmKmVirtualLockCtxMemoryUnlocked.c)
 *     CmSiSetProcessWorkingSetMaximum @ 0x1406E7C88 (CmSiSetProcessWorkingSetMaximum.c)
 *     PspSetQuotaLimits @ 0x1407F6AFC (PspSetQuotaLimits.c)
 *     NtSetSystemInformation @ 0x140839A80 (NtSetSystemInformation.c)
 * Callees:
 *     MiLockWorkingSetExclusive @ 0x14027DB10 (MiLockWorkingSetExclusive.c)
 *     MiUnlockWorkingSetExclusive @ 0x14027DCC8 (MiUnlockWorkingSetExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiUnlockWorkingSetCoreExclusive @ 0x1402E06D0 (MiUnlockWorkingSetCoreExclusive.c)
 *     MiLockWorkingSetCoreExclusive @ 0x1402E0830 (MiLockWorkingSetCoreExclusive.c)
 *     MiUnlinkHardLimitWorkingSet @ 0x1402EFB08 (MiUnlinkHardLimitWorkingSet.c)
 *     ExAllocatePoolMm @ 0x14039A310 (ExAllocatePoolMm.c)
 *     MiMapWorkingSetTypeToVm @ 0x1403A1750 (MiMapWorkingSetTypeToVm.c)
 *     MiEmptyWorkingSetInitiate @ 0x1403C5E90 (MiEmptyWorkingSetInitiate.c)
 *     MiCheckWsLimits @ 0x1403C6670 (MiCheckWsLimits.c)
 *     PsChargeProcessQuota @ 0x1403C7134 (PsChargeProcessQuota.c)
 *     PsReturnProcessQuota @ 0x1403C716C (PsReturnProcessQuota.c)
 *     MiInsertHardLimitWorkingSet @ 0x1403C7B7C (MiInsertHardLimitWorkingSet.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
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
  __int64 v15; // r8
  __int64 v16; // rdx
  int v17; // esi
  unsigned __int64 v18; // r15
  unsigned __int64 v19; // rdi
  _BYTE *v20; // rcx
  unsigned __int64 v21; // r12
  __int64 v23; // r15
  int v24; // ebp
  char v25; // di
  unsigned __int64 v26; // [rsp+30h] [rbp-58h] BYREF
  unsigned __int64 v27; // [rsp+38h] [rbp-50h] BYREF
  PVOID P; // [rsp+40h] [rbp-48h]
  __int64 v29; // [rsp+48h] [rbp-40h]
  __int64 v30; // [rsp+50h] [rbp-38h]
  KIRQL v31; // [rsp+A0h] [rbp+18h]

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
      p_Blink = (*(_QWORD *)(stru_140E2ED08.ThreadLock + 8 * Blink_high) + 22592LL) & -(__int64)(*(_BYTE *)(*(_QWORD *)(stru_140E2ED08.ThreadLock + 8 * Blink_high) + 22300LL) != 0);
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
  v29 = v13;
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
  v30 = *(_QWORD *)(stru_140E2ED08.ThreadLock + 8LL * *(unsigned __int16 *)(p_Blink + 174));
  v31 = MiLockWorkingSetExclusive(p_Blink, Blink_high, a3);
  if ( PoolMm )
  {
    v14 = *(_QWORD *)(*(_QWORD *)(p_Blink + 16) + 40LL);
    if ( v14 )
      P = PoolMm;
    else
      *(_QWORD *)(*(_QWORD *)(p_Blink + 16) + 40LL) = PoolMm;
  }
  MiLockWorkingSetCoreExclusive(p_Blink, v14, v15);
  if ( !v9 && (Process[1].DirectoryTableBase & 0x2000000000LL) != 0 )
  {
    v17 = -1073741558;
    goto LABEL_24;
  }
  if ( a1 )
    v26 = a1 >> 12;
  else
    v26 = *(_QWORD *)(p_Blink + 120);
  if ( v10 )
    v27 = v10 >> 12;
  else
    v27 = *(_QWORD *)(p_Blink + 128);
  v17 = MiCheckWsLimits(p_Blink, (unsigned int)&v26, (unsigned int)&v27, a5, 0);
  if ( (v17 & 0xC0000000) == 0xC0000000 )
    goto LABEL_24;
  v18 = v26;
  if ( v26 <= *(_QWORD *)(p_Blink + 120) )
  {
    v19 = *(_QWORD *)(p_Blink + 120) - v26;
LABEL_16:
    v20 = a6;
    goto LABEL_17;
  }
  v19 = v26 - *(_QWORD *)(p_Blink + 120);
  v20 = a6;
  *a6 = 1;
  if ( !a4 )
  {
    v17 = -1073741727;
    goto LABEL_24;
  }
  if ( !v9 )
  {
    v17 = PsChargeProcessQuota(Process, v16, v19);
    if ( v17 < 0 )
      goto LABEL_24;
    goto LABEL_16;
  }
LABEL_17:
  v21 = v27;
  if ( v27 < *(_QWORD *)(p_Blink + 136) && *(_QWORD *)(v29 + 32) + 6LL >= v27 )
  {
    v17 = -1073741748;
    if ( *v20 && !v9 )
      PsReturnProcessQuota(Process, v16, v19);
    goto LABEL_24;
  }
  if ( !*v20 && v19 && !v9 )
    PsReturnProcessQuota(Process, v16, v19);
  *(_QWORD *)(p_Blink + 120) = v18;
  *(_QWORD *)(p_Blink + 128) = v21;
  if ( a5 )
  {
    v23 = v30;
    v24 = 0;
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v30 + 21384));
    v25 = *(_DWORD *)(p_Blink + 184);
    if ( (a5 & 4) != 0 )
    {
      v25 |= 0x20u;
    }
    else
    {
      if ( (a5 & 8) == 0 )
        goto LABEL_36;
      v25 &= ~0x20u;
    }
    v24 = 1;
LABEL_36:
    if ( (a5 & 1) != 0 )
    {
      v25 |= 0x10u;
      MiInsertHardLimitWorkingSet(p_Blink);
    }
    else if ( (a5 & 2) != 0 )
    {
      MiUnlinkHardLimitWorkingSet(p_Blink);
      v25 &= ~0x10u;
    }
    else if ( !v24 )
    {
      goto LABEL_39;
    }
    *(_BYTE *)(p_Blink + 184) = v25;
LABEL_39:
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v23 + 21384));
  }
LABEL_24:
  MiUnlockWorkingSetCoreExclusive(p_Blink);
  MiUnlockWorkingSetExclusive(p_Blink, v31);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return (unsigned int)v17;
}
