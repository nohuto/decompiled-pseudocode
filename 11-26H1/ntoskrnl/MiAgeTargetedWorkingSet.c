/*
 * XREFs of MiAgeTargetedWorkingSet @ 0x140476D30
 * Callers:
 *     MiWalkAllWorkingSets @ 0x1402A9370 (MiWalkAllWorkingSets.c)
 *     MiWalkAllHardLimitWorkingSets @ 0x1402A996C (MiWalkAllHardLimitWorkingSets.c)
 * Callees:
 *     PfLogForegroundProcess @ 0x14025875C (PfLogForegroundProcess.c)
 *     MiUnlockWorkingSetShared @ 0x1402EB6C0 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402EDD60 (MiLockWorkingSetShared.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x1402EDFB0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     MiAgeWorkingSet @ 0x1402FD0D0 (MiAgeWorkingSet.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x14036A848 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     MiQueuePageAccessLog @ 0x1403BA328 (MiQueuePageAccessLog.c)
 *     MiReturnCcAccessLog @ 0x1403BA494 (MiReturnCcAccessLog.c)
 *     MiDrainOldAccessBuffers @ 0x1403BAF90 (MiDrainOldAccessBuffers.c)
 *     MiAgeAweRegions @ 0x140476420 (MiAgeAweRegions.c)
 *     MiComputeHardAgingPercent @ 0x1404B1DCC (MiComputeHardAgingPercent.c)
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
  __int64 v12; // r14
  __int64 v13; // rsi
  __int128 v14; // [rsp+20h] [rbp-58h] BYREF
  __int128 v15; // [rsp+30h] [rbp-48h]
  __int64 retaddr; // [rsp+78h] [rbp+0h]

  v3 = (__int128 *)a2;
  v14 = 0LL;
  v15 = 0LL;
  if ( a2 )
    v5 = *(_DWORD *)(a2 + 4);
  else
    v5 = 0;
  v6 = *(_DWORD *)(a1 + 184);
  if ( BYTE2(v6) == 2 && (v6 & 0xF) == 0 )
    PfLogForegroundProcess(a1, a2);
  v7 = *(_QWORD *)(stru_140E2EB88.ThreadLock + 8LL * *(unsigned __int16 *)(a1 + 174));
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
    DWORD2(v15) = v9;
    *(_QWORD *)&v14 = 0x100000001LL;
    v3 = &v14;
    DWORD2(v14) = 7;
    BYTE14(v15) = 1;
    ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(v7 + 272));
    WORD6(v15) = *(_WORD *)(v7 + 18512);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
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
  v12 = MEMORY[0xFFFFF78000000320];
  MiDrainOldAccessBuffers(a1, MEMORY[0xFFFFF78000000320]);
  MiUnlockWorkingSetShared(a1, v8);
  if ( (v6 & 0xF) == 0 )
    MiAgeAweRegions();
  if ( *(_QWORD *)(v7 + 18112) )
  {
    v13 = _InterlockedExchange64((volatile __int64 *)(v7 + 18112), 0LL);
    if ( v13 )
    {
      if ( v12 - *(_QWORD *)(v13 + 16) > stru_140F12D20.Padding[1] )
        MiQueuePageAccessLog(v7, v13);
      else
        MiReturnCcAccessLog(v7, v13, 0);
    }
  }
}
