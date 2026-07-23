/*
 * XREFs of KeRegisterAvailableCpusChangeNotification @ 0x1407BBE24
 * Callers:
 *     PsRegisterProcessAvailableCpusChangeNotification @ 0x1407F67A0 (PsRegisterProcessAvailableCpusChangeNotification.c)
 *     PsRegisterSystemAvailableCpusChangeNotification @ 0x1407F67C0 (PsRegisterSystemAvailableCpusChangeNotification.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ObfReferenceObjectWithTag @ 0x1402780A0 (ObfReferenceObjectWithTag.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     KiInitializeAvailableCpusWorkItem @ 0x1404D7AA8 (KiInitializeAvailableCpusWorkItem.c)
 *     KiAvailableCpusSubscriptionQueueWorkItem @ 0x1404D98B0 (KiAvailableCpusSubscriptionQueueWorkItem.c)
 *     KiUpdateProcessAvailableCpuState @ 0x1405E8528 (KiUpdateProcessAvailableCpuState.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     KeInsertCallbackRegistrationEntry @ 0x1407BBCE8 (KeInsertCallbackRegistrationEntry.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall KeRegisterAvailableCpusChangeNotification(
        struct _LIST_ENTRY ***Object,
        __int64 a2,
        __int64 a3,
        struct _LIST_ENTRY **a4,
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
  struct _LIST_ENTRY *Blink; // rax
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
  KeInsertCallbackRegistrationEntry((PRTL_BALANCED_NODE)(v11 + 88));
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( !Object )
  {
    v22 = (volatile signed __int64 *)&KiSupervisorXStateFeaturesLock.WaitBlock[1];
    v24 = (AutoBoost *)KeAbPreAcquire((__int64)&KiSupervisorXStateFeaturesLock.WaitBlock[1], 0LL, 0LL, v12);
    v26 = _interlockedbittestandset64(
            (volatile signed __int32 *)&KiSupervisorXStateFeaturesLock.WaitBlockFill11[48],
            0LL);
    v27 = v24;
    if ( v26 )
      ExfAcquirePushLockExclusiveEx(
        (unsigned __int64 *)&KiSupervisorXStateFeaturesLock.WaitBlock[1],
        v24,
        (__int64)&KiSupervisorXStateFeaturesLock.WaitBlock[1]);
    if ( v27 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v27, v25);
      else
        *((_BYTE *)v27 + 10) = 1;
    }
    SparePtr = KiSupervisorXStateFeaturesLock.WaitBlock[0].SparePtr;
    v29 = (PVOID **)(v11 + 8);
    if ( *(struct _KTHREAD **)KiSupervisorXStateFeaturesLock.WaitBlock[0].SparePtr == (struct _KTHREAD *)&KiSupervisorXStateFeaturesLock.WaitBlockFill11[32] )
    {
      *v29 = &KiSupervisorXStateFeaturesLock.WaitBlock[0].Object;
      *((_QWORD *)v11 + 2) = SparePtr;
      *SparePtr = v29;
      KiSupervisorXStateFeaturesLock.WaitBlock[0].SparePtr = v11 + 8;
      v23 = _InterlockedExchangeAdd64(
              (volatile signed __int64 *)&KiSupervisorXStateFeaturesLock.WaitBlock[1].WaitListEntry.Flink,
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
  v21 = (__int64 **)Object[56][6];
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
      if ( Object[56][1] != (struct _LIST_ENTRY *)KiCpuSetSequence
        || Object[56][2] != *(struct _LIST_ENTRY **)&KiSupervisorXStateFeaturesLock.Timer.Processor )
      {
        KiUpdateProcessAvailableCpuState((__int64)Object, 0);
      }
      Blink = *Object[56];
    }
    else
    {
      Blink = KiSupervisorXStateFeaturesLock.WaitBlock[1].WaitListEntry.Blink;
    }
    if ( *a4 != Blink )
      KiAvailableCpusSubscriptionQueueWorkItem((PWORK_QUEUE_ITEM)(v11 + 24));
  }
  *a5 = v11;
  return v10;
}
