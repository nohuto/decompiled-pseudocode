/*
 * XREFs of KeRegisterAvailableCpusChangeNotification @ 0x1407B8DC4
 * Callers:
 *     PsRegisterProcessAvailableCpusChangeNotification @ 0x1407F0C40 (PsRegisterProcessAvailableCpusChangeNotification.c)
 *     PsRegisterSystemAvailableCpusChangeNotification @ 0x1407F0C60 (PsRegisterSystemAvailableCpusChangeNotification.c)
 * Callees:
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     ObfReferenceObjectWithTag @ 0x140278B30 (ObfReferenceObjectWithTag.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 *     KiInitializeAvailableCpusWorkItem @ 0x1404DE3C8 (KiInitializeAvailableCpusWorkItem.c)
 *     KiAvailableCpusSubscriptionQueueWorkItem @ 0x1404E01D0 (KiAvailableCpusSubscriptionQueueWorkItem.c)
 *     KiUpdateProcessAvailableCpuState @ 0x1405E5BB8 (KiUpdateProcessAvailableCpuState.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     KeInsertCallbackRegistrationEntry @ 0x1407B8C88 (KeInsertCallbackRegistrationEntry.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 */

__int64 __fastcall KeRegisterAvailableCpusChangeNotification(
        volatile unsigned __int64 **Object,
        __int64 a2,
        __int64 a3,
        _QWORD *a4,
        _QWORD *a5)
{
  char *Pool2; // rax
  unsigned int v10; // edi
  char *v11; // r15
  struct _KLOCK_ENTRIES *v12; // r9
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v14; // r14
  struct _KLOCK_ENTRIES *v15; // r9
  AutoBoost *v16; // rax
  void *v17; // rdx
  AutoBoost *v18; // rsi
  __int64 *v19; // rdx
  __int64 v20; // rax
  __int64 **v21; // rcx
  volatile signed __int64 *v22; // rsi
  char v23; // bl
  AutoBoost *v24; // rax
  void *v25; // rdx
  signed __int8 v26; // cf
  AutoBoost *v27; // r14
  _QWORD *SparePtr; // rcx
  PVOID **v29; // rax
  volatile unsigned __int64 CycleTime; // rax
  signed __int32 v32[18]; // [rsp+0h] [rbp-48h] BYREF

  Pool2 = (char *)ExAllocatePool2(0x40uLL);
  v10 = 0;
  v11 = Pool2;
  if ( !Pool2 )
    return (unsigned int)-1073741670;
  memset_0(Pool2, 0, 0x70uLL);
  KiInitializeAvailableCpusWorkItem((_QWORD *)v11 + 3, a2, a3);
  *((_QWORD *)v11 + 14) = a2;
  *((_QWORD *)v11 + 15) = 1983998283LL;
  KeInsertCallbackRegistrationEntry((unsigned __int64)(v11 + 88));
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( !Object )
  {
    v22 = (volatile signed __int64 *)&KiSupervisorXStateFeaturesLock.WaitBlockFill11[64];
    v24 = (AutoBoost *)KeAbPreAcquire((__int64)&KiSupervisorXStateFeaturesLock.WaitBlockFill11[64], 0LL, 0LL, v12);
    v26 = _interlockedbittestandset64(
            (volatile signed __int32 *)&KiSupervisorXStateFeaturesLock.WaitBlockFill11[64],
            0LL);
    v27 = v24;
    if ( v26 )
      ExfAcquirePushLockExclusiveEx(
        (unsigned __int64 *)&KiSupervisorXStateFeaturesLock.WaitBlockFill11[64],
        v24,
        (__int64)&KiSupervisorXStateFeaturesLock.WaitBlockFill11[64]);
    if ( v27 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v27, v25);
      else
        *((_BYTE *)v27 + 10) = 1;
    }
    SparePtr = KiSupervisorXStateFeaturesLock.WaitBlock[1].SparePtr;
    v29 = (PVOID **)(v11 + 8);
    if ( *(struct _KTHREAD **)KiSupervisorXStateFeaturesLock.WaitBlock[1].SparePtr == (struct _KTHREAD *)&KiSupervisorXStateFeaturesLock.WaitBlockFill11[80] )
    {
      *v29 = &KiSupervisorXStateFeaturesLock.WaitBlock[1].Object;
      *((_QWORD *)v11 + 2) = SparePtr;
      *SparePtr = v29;
      KiSupervisorXStateFeaturesLock.WaitBlock[1].SparePtr = v11 + 8;
      v23 = _InterlockedExchangeAdd64(
              (volatile signed __int64 *)&KiSupervisorXStateFeaturesLock.WaitBlockFill11[64],
              0xFFFFFFFFFFFFFFFFuLL);
      goto LABEL_21;
    }
LABEL_19:
    __fastfail(3u);
  }
  ObfReferenceObjectWithTag(Object, 0x7641694Bu);
  v14 = (unsigned __int64 *)(Object[56] + 4);
  v16 = (AutoBoost *)KeAbPreAcquire((__int64)v14, 0LL, 0LL, v15);
  v18 = v16;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v14, 0LL) )
    ExfAcquirePushLockExclusiveEx(v14, v16, (__int64)v14);
  if ( v18 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v18, v17);
    else
      *((_BYTE *)v18 + 10) = 1;
  }
  *(_QWORD *)v11 = Object;
  v19 = (__int64 *)(v11 + 8);
  v20 = (__int64)(Object[56] + 5);
  v21 = (__int64 **)*((_QWORD *)Object[56] + 6);
  if ( *v21 != (__int64 *)v20 )
    goto LABEL_19;
  *v19 = v20;
  *((_QWORD *)v11 + 2) = v21;
  *v21 = v19;
  *(_QWORD *)(v20 + 8) = v19;
  v22 = (volatile signed __int64 *)(Object[56] + 4);
  v23 = _InterlockedExchangeAdd64(v22, 0xFFFFFFFFFFFFFFFFuLL);
LABEL_21:
  if ( (v23 & 6) == 2 )
    ExfTryToWakePushLock(v22);
  KeAbPostRelease((unsigned __int64)v22);
  KeLeaveCriticalRegion();
  if ( a4 )
  {
    _InterlockedOr(v32, 0);
    if ( Object )
    {
      if ( *(_OWORD *)(Object[56] + 1) != __PAIR128__(
                                            (unsigned __int64)KiSupervisorXStateFeaturesLock.WaitBlock[0].Thread,
                                            KiCpuSetSequence) )
        KiUpdateProcessAvailableCpuState((__int64)Object, 0);
      CycleTime = *Object[56];
    }
    else
    {
      CycleTime = KiSupervisorXStateFeaturesLock.CycleTime;
    }
    if ( *a4 != CycleTime )
      KiAvailableCpusSubscriptionQueueWorkItem((PWORK_QUEUE_ITEM)(v11 + 24));
  }
  *a5 = v11;
  return v10;
}
