/*
 * XREFs of KeUnregisterAvailableCpusChangeNotification @ 0x1407B90F8
 * Callers:
 *     PsUnregisterAvailableCpusChangeNotification @ 0x1407F0DC0 (PsUnregisterAvailableCpusChangeNotification.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 *     KiRundownAvailableCpusWorkItem @ 0x140463B20 (KiRundownAvailableCpusWorkItem.c)
 *     KeRemoveCallbackRegistrationEntry @ 0x1407B9030 (KeRemoveCallbackRegistrationEntry.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall KeUnregisterAvailableCpusChangeNotification(
        struct _EX_RUNDOWN_REF *P,
        __int64 a2,
        __int64 a3,
        struct _KLOCK_ENTRIES *a4)
{
  struct _KLOCK_ENTRIES *v5; // r9
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *Count; // rbp
  unsigned __int64 *v8; // r14
  AutoBoost *v9; // rax
  void *v10; // rdx
  AutoBoost *v11; // rsi
  unsigned __int64 v12; // rdx
  struct _EX_RUNDOWN_REF **v13; // rcx
  __int64 v14; // rsi
  AutoBoost *v15; // rax
  void *v16; // rdx
  signed __int8 v17; // cf
  AutoBoost *v18; // rsi
  struct _EX_RUNDOWN_REF **v19; // rdx
  PVOID *v20; // rcx

  KeRemoveCallbackRegistrationEntry((__int64)&P[11], a2, a3, a4);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  Count = (_QWORD *)P->Count;
  if ( P->Count )
  {
    v8 = (unsigned __int64 *)(Count[56] + 32LL);
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
    v12 = P[1].Count;
    if ( *(struct _EX_RUNDOWN_REF **)(v12 + 8) == &P[1] )
    {
      v13 = (struct _EX_RUNDOWN_REF **)P[2].Count;
      if ( *v13 == &P[1] )
      {
        *v13 = (struct _EX_RUNDOWN_REF *)v12;
        *(_QWORD *)(v12 + 8) = v13;
        v14 = Count[56];
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v14 + 32), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)(v14 + 32));
        KeAbPostRelease(v14 + 32);
        ObfDereferenceObjectWithTag(Count, 0x7641694Bu);
        goto LABEL_24;
      }
    }
LABEL_25:
    __fastfail(3u);
  }
  v15 = (AutoBoost *)KeAbPreAcquire((__int64)&KiSupervisorXStateFeaturesLock.WaitBlockFill11[64], 0LL, 0LL, v5);
  v17 = _interlockedbittestandset64((volatile signed __int32 *)&KiSupervisorXStateFeaturesLock.WaitBlockFill11[64], 0LL);
  v18 = v15;
  if ( v17 )
    ExfAcquirePushLockExclusiveEx(
      (unsigned __int64 *)&KiSupervisorXStateFeaturesLock.WaitBlockFill11[64],
      v15,
      (__int64)&KiSupervisorXStateFeaturesLock.WaitBlockFill11[64]);
  if ( v18 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v18, v16);
    else
      *((_BYTE *)v18 + 10) = 1;
  }
  v19 = (struct _EX_RUNDOWN_REF **)P[1].Count;
  if ( v19[1] != &P[1] )
    goto LABEL_25;
  v20 = (PVOID *)P[2].Count;
  if ( *v20 != &P[1] )
    goto LABEL_25;
  *v20 = v19;
  v19[1] = (struct _EX_RUNDOWN_REF *)v20;
  if ( (_InterlockedExchangeAdd64(
          (volatile signed __int64 *)&KiSupervisorXStateFeaturesLock.WaitBlockFill11[64],
          0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&KiSupervisorXStateFeaturesLock.WaitBlockFill11[64]);
  KeAbPostRelease((unsigned __int64)&KiSupervisorXStateFeaturesLock.WaitBlockFill11[64]);
LABEL_24:
  KeLeaveCriticalRegion();
  KiRundownAvailableCpusWorkItem(P + 3);
  ExFreePoolWithTag(P, 0);
}
