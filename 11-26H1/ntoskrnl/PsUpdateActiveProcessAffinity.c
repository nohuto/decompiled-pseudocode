/*
 * XREFs of PsUpdateActiveProcessAffinity @ 0x1407F6938
 * Callers:
 *     KeStartDynamicProcessor @ 0x1407BD540 (KeStartDynamicProcessor.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140304E70 (KiLeaveCriticalRegionUnsafe.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     PspUpdateSingleProcessAffinity @ 0x1407F70E8 (PspUpdateSingleProcessAffinity.c)
 *     PsGetNextProcess @ 0x1409BC470 (PsGetNextProcess.c)
 */

_QWORD *__fastcall PsUpdateActiveProcessAffinity(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rsi
  AutoBoost *v5; // rax
  void *v6; // rdx
  signed __int8 v7; // cf
  AutoBoost *v8; // rdi
  __int16 *v9; // r8
  unsigned __int16 v10; // r9
  unsigned __int16 v11; // r11
  __int16 *p_WaitRegister; // r10
  unsigned __int16 v13; // dx
  __int64 v14; // rcx
  __int64 v15; // rcx
  _KWAIT_STATUS_REGISTER *v16; // rax
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int64 NextProcess; // rax
  __int64 v25; // rdi
  __int64 v26; // rdx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v5 = (AutoBoost *)KeAbPreAcquire((__int64)&PspSiloMonitorLock.AffinityPrimaryGroup, 0LL, 0LL, a4);
  v7 = _interlockedbittestandset64((volatile signed __int32 *)&PspSiloMonitorLock.AffinityPrimaryGroup, 0LL);
  v8 = v5;
  if ( v7 )
    ExfAcquirePushLockExclusiveEx(
      (unsigned __int64 *)&PspSiloMonitorLock.AffinityPrimaryGroup,
      v5,
      (__int64)&PspSiloMonitorLock.AffinityPrimaryGroup);
  if ( v8 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v8, v6);
    else
      *((_BYTE *)v8 + 10) = 1;
  }
  v9 = PspLastUpdateAffinityMask;
  v10 = *(_WORD *)&stru_140FC11F0.WaitRegister.Flags;
  v11 = PspLastUpdateAffinityMask[0];
  p_WaitRegister = PspLastUpdateAffinityMask;
  v13 = 0;
  if ( *(_WORD *)&stru_140FC11F0.WaitRegister.Flags >= PspLastUpdateAffinityMask[0] )
  {
    v11 = *(_WORD *)&stru_140FC11F0.WaitRegister.Flags;
    p_WaitRegister = (__int16 *)&stru_140FC11F0.WaitRegister;
    v10 = PspLastUpdateAffinityMask[0];
  }
  while ( v13 < v10 )
  {
    v14 = *(__int64 *)((char *)&stru_140FC11F0.116 + 8 * v13 + 4);
    if ( (v14 & *(_QWORD *)&PspLastUpdateAffinityMask[4 * v13 + 4]) != v14 )
    {
LABEL_16:
      v15 = 2LL;
      v16 = &stru_140FC11F0.WaitRegister;
      do
      {
        v17 = *(_OWORD *)&v16[16].Flags;
        *(_OWORD *)v9 = *(_OWORD *)&v16->Flags;
        v18 = *(_OWORD *)&v16[32].Flags;
        *((_OWORD *)v9 + 1) = v17;
        v19 = *(_OWORD *)&v16[48].Flags;
        *((_OWORD *)v9 + 2) = v18;
        v20 = *(_OWORD *)&v16[64].Flags;
        *((_OWORD *)v9 + 3) = v19;
        v21 = *(_OWORD *)&v16[80].Flags;
        *((_OWORD *)v9 + 4) = v20;
        v22 = *(_OWORD *)&v16[96].Flags;
        *((_OWORD *)v9 + 5) = v21;
        v23 = *(_OWORD *)&v16[112].Flags;
        v16 += 128;
        *((_OWORD *)v9 + 6) = v22;
        v9 += 64;
        *((_OWORD *)v9 - 1) = v23;
        --v15;
      }
      while ( v15 );
      *(_QWORD *)v9 = *(_QWORD *)&v16->Flags;
      while ( 1 )
      {
        NextProcess = PsGetNextProcess((PVOID)v15);
        v25 = NextProcess;
        if ( !NextProcess )
          break;
        PspUpdateSingleProcessAffinity(CurrentThread, NextProcess, &stru_140FC11F0.WaitRegister);
        v15 = v25;
      }
      goto LABEL_21;
    }
    ++v13;
  }
  if ( p_WaitRegister != PspLastUpdateAffinityMask )
  {
    while ( v13 < v11 )
    {
      if ( *($C9C4F79064DE35237E3F199A7D1BD3E1 *)((char *)&stru_140FC11F0.116 + 8 * v13 + 4) )
        goto LABEL_16;
      ++v13;
    }
  }
LABEL_21:
  if ( (_InterlockedExchangeAdd64(
          (volatile signed __int64 *)&PspSiloMonitorLock.AffinityPrimaryGroup,
          0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&PspSiloMonitorLock.AffinityPrimaryGroup);
  KeAbPostRelease((unsigned __int64)&PspSiloMonitorLock.AffinityPrimaryGroup);
  return KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v26);
}
