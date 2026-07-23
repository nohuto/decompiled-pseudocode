/*
 * XREFs of KeUnregisterAvailableCpusChangeNotification @ 0x1407BC158
 * Callers:
 *     PsUnregisterAvailableCpusChangeNotification @ 0x1407F6920 (PsUnregisterAvailableCpusChangeNotification.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     KiRundownAvailableCpusWorkItem @ 0x14045CAE0 (KiRundownAvailableCpusWorkItem.c)
 *     KeRemoveCallbackRegistrationEntry @ 0x1407BC090 (KeRemoveCallbackRegistrationEntry.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall KeUnregisterAvailableCpusChangeNotification(char *P, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KLOCK_ENTRIES *v5; // r9
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v7; // rbp
  unsigned __int64 *v8; // r14
  AutoBoost *v9; // rax
  void *v10; // rdx
  AutoBoost *v11; // rsi
  __int64 v12; // rdx
  char **v13; // rcx
  __int64 v14; // rsi
  AutoBoost *v15; // rax
  void *v16; // rdx
  signed __int8 v17; // cf
  AutoBoost *v18; // rsi
  char **v19; // rdx
  PVOID *v20; // rcx

  KeRemoveCallbackRegistrationEntry((PRTL_BALANCED_NODE)(P + 88), a2, a3, a4);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v7 = *(_QWORD **)P;
  if ( *(_QWORD *)P )
  {
    v8 = (unsigned __int64 *)(v7[56] + 32LL);
    v9 = (AutoBoost *)KeAbPreAcquire((__int64)v8, 0LL, 0LL, v5);
    v11 = v9;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v8, 0LL) )
      ExfAcquirePushLockExclusiveEx(v8, v9, (__int64)v8);
    if ( v11 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v11, v10);
      else
        *((_BYTE *)v11 + 10) = 1;
    }
    v12 = *((_QWORD *)P + 1);
    if ( *(char **)(v12 + 8) == P + 8 )
    {
      v13 = (char **)*((_QWORD *)P + 2);
      if ( *v13 == P + 8 )
      {
        *v13 = (char *)v12;
        *(_QWORD *)(v12 + 8) = v13;
        v14 = v7[56];
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v14 + 32), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)(v14 + 32));
        KeAbPostRelease(v14 + 32);
        ObfDereferenceObjectWithTag(v7, 0x7641694Bu);
        goto LABEL_24;
      }
    }
LABEL_25:
    __fastfail(3u);
  }
  v15 = (AutoBoost *)KeAbPreAcquire((__int64)&KiSupervisorXStateFeaturesLock.WaitBlock[1], 0LL, 0LL, v5);
  v17 = _interlockedbittestandset64((volatile signed __int32 *)&KiSupervisorXStateFeaturesLock.WaitBlockFill11[48], 0LL);
  v18 = v15;
  if ( v17 )
    ExfAcquirePushLockExclusiveEx(
      (unsigned __int64 *)&KiSupervisorXStateFeaturesLock.WaitBlock[1],
      v15,
      (__int64)&KiSupervisorXStateFeaturesLock.WaitBlock[1]);
  if ( v18 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v18, v16);
    else
      *((_BYTE *)v18 + 10) = 1;
  }
  v19 = (char **)*((_QWORD *)P + 1);
  if ( v19[1] != P + 8 )
    goto LABEL_25;
  v20 = (PVOID *)*((_QWORD *)P + 2);
  if ( *v20 != P + 8 )
    goto LABEL_25;
  *v20 = v19;
  v19[1] = (char *)v20;
  if ( (_InterlockedExchangeAdd64(
          (volatile signed __int64 *)&KiSupervisorXStateFeaturesLock.WaitBlock[1].WaitListEntry.Flink,
          0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&KiSupervisorXStateFeaturesLock.WaitBlock[1]);
  KeAbPostRelease((unsigned __int64)&KiSupervisorXStateFeaturesLock.WaitBlock[1]);
LABEL_24:
  KeLeaveCriticalRegion();
  KiRundownAvailableCpusWorkItem((struct _EX_RUNDOWN_REF *)P + 3);
  ExFreePoolWithTag(P, 0);
}
