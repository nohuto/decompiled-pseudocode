/*
 * XREFs of MiAgeTargetedWorkingSet @ 0x1404704B0
 * Callers:
 *     MiWalkAllWorkingSets @ 0x1402A8780 (MiWalkAllWorkingSets.c)
 *     MiWalkAllHardLimitWorkingSets @ 0x1402A8D7C (MiWalkAllHardLimitWorkingSets.c)
 * Callees:
 *     PfLogForegroundProcess @ 0x140259F3C (PfLogForegroundProcess.c)
 *     MiUnlockWorkingSetShared @ 0x1402CD700 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402CFDE0 (MiLockWorkingSetShared.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x1402D0030 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     MiAgeWorkingSet @ 0x1402DF150 (MiAgeWorkingSet.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x14036C5E8 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     MiQueuePageAccessLog @ 0x1403C4198 (MiQueuePageAccessLog.c)
 *     MiReturnCcAccessLog @ 0x1403C4304 (MiReturnCcAccessLog.c)
 *     MiDrainOldAccessBuffers @ 0x1403C4E00 (MiDrainOldAccessBuffers.c)
 *     MiAgeAweRegions @ 0x14046FBA0 (MiAgeAweRegions.c)
 *     MiComputeHardAgingPercent @ 0x1404AB228 (MiComputeHardAgingPercent.c)
 */

void __fastcall MiAgeTargetedWorkingSet(__int64 a1, __int64 a2, __int64 a3)
{
  __int128 *v3; // r14
  int v5; // r12d
  int v6; // ebx
  __int64 v7; // rbp
  unsigned __int8 v8; // r13
  int v9; // eax
  int v10; // r15d
  volatile signed __int32 *v11; // r12
  __int64 v12; // r8
  __int64 v13; // r14
  __int64 v14; // rsi
  __int128 v15; // [rsp+20h] [rbp-58h] BYREF
  __int128 v16; // [rsp+30h] [rbp-48h]
  __int64 retaddr; // [rsp+78h] [rbp+0h]

  v3 = (__int128 *)a2;
  v15 = 0LL;
  v16 = 0LL;
  if ( a2 )
    v5 = *(_DWORD *)(a2 + 4);
  else
    v5 = 0;
  v6 = *(_DWORD *)(a1 + 184);
  if ( BYTE2(v6) == 2 && (v6 & 0xF) == 0 )
    PfLogForegroundProcess(a1, a2);
  v7 = *(_QWORD *)(stru_140E2ED08.ThreadLock + 8LL * *(unsigned __int16 *)(a1 + 174));
  v8 = MiLockWorkingSetShared(a1, a2, a3);
  if ( !v3 )
  {
    v6 = *(_DWORD *)(a1 + 184);
    if ( (v6 & 0x10) == 0 || (v9 = MiComputeHardAgingPercent(a1, 4LL), (v10 = v9) == 0) )
    {
      MiUnlockWorkingSetShared(a1, v8);
      return;
    }
    v11 = (volatile signed __int32 *)(v7 + 272);
    DWORD2(v16) = v9;
    *(_QWORD *)&v15 = 0x100000001LL;
    v3 = &v15;
    DWORD2(v15) = 7;
    BYTE14(v16) = 1;
    ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(v7 + 272));
    WORD6(v16) = *(_WORD *)(v7 + 18512);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
    {
      _InterlockedAnd(v11, 0xBFFFFFFF);
      _InterlockedDecrement(v11);
    }
    else
    {
      ExpReleaseSpinLockSharedFromDpcLevelInstrumented((volatile signed __int32 *)(v7 + 272), retaddr);
    }
LABEL_16:
    MiAgeWorkingSet(a1, v8, 1u, (__int64)v3);
    if ( !*(_BYTE *)(v7 + 18617) || (unsigned int)(v10 - 1) > 8 )
      goto LABEL_19;
    goto LABEL_18;
  }
  v10 = *((_DWORD *)v3 + 6);
  if ( v5 == 1 )
    goto LABEL_16;
LABEL_18:
  MiAgeWorkingSet(a1, v8, 2u, (__int64)v3);
LABEL_19:
  v13 = MEMORY[0xFFFFF78000000320];
  MiDrainOldAccessBuffers(a1, MEMORY[0xFFFFF78000000320], v12);
  MiUnlockWorkingSetShared(a1, v8);
  if ( (v6 & 0xF) == 0 )
    MiAgeAweRegions();
  if ( *(_QWORD *)(v7 + 18112) )
  {
    v14 = _InterlockedExchange64((volatile __int64 *)(v7 + 18112), 0LL);
    if ( v14 )
    {
      if ( v13 - *(_QWORD *)(v14 + 16) > (unsigned __int64)PfKernelGlobals )
        MiQueuePageAccessLog(v7, v14);
      else
        MiReturnCcAccessLog(v7, v14, 0);
    }
  }
}
