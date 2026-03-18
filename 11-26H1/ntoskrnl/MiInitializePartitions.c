/*
 * XREFs of MiInitializePartitions @ 0x140CF8CA4
 * Callers:
 *     MiCreatePfnDatabase @ 0x140CF2818 (MiCreatePfnDatabase.c)
 *     MiInitNucleus @ 0x140CF2CBC (MiInitNucleus.c)
 * Callees:
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x14027DB80 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 *     ?KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z @ 0x140444460 (-KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z.c)
 *     MiExpandPartitionIds @ 0x140869008 (MiExpandPartitionIds.c)
 */

__int64 __fastcall MiInitializePartitions(int a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  unsigned int v4; // edi
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rbp
  AutoBoost *v7; // rax
  volatile unsigned __int8 *v8; // rdx
  signed __int8 v9; // cf
  AutoBoost *v10; // r14
  int v11; // r14d
  __int64 v12; // rdx
  $7A85BAF4F1FA08634C1C4A3E45B775B3 *v14; // rcx

  v4 = 0;
  if ( a1 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    v7 = (AutoBoost *)KeAbPreAcquire((__int64)&stru_140E2EB88, 0LL, 0LL, a4);
    v9 = _interlockedbittestandset64(&stru_140E2EB88.Header.Lock, 0LL);
    v10 = v7;
    if ( v9 )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&stru_140E2EB88, v7, (__int64)&stru_140E2EB88);
    if ( v10 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
      {
        LOBYTE(v8) = 2;
        AutoBoost::KiAbpSetEntryValue((AutoBoost *)((char *)v10 + 33), v8, 1);
      }
      else
      {
        *((_BYTE *)v10 + 10) = 1;
      }
    }
    v11 = MiExpandPartitionIds();
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&stru_140E2EB88, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&stru_140E2EB88.Header.Lock);
    KeAbPostRelease((unsigned __int64)&stru_140E2EB88);
    if ( CurrentThread->SpecialApcDisable++ == -1 )
    {
      v14 = &CurrentThread->152;
      if ( ($7A85BAF4F1FA08634C1C4A3E45B775B3 *)v14->ApcState.ApcListHead[0].Flink != v14 )
        KiCheckForKernelApcDelivery((__int64)v14, v12);
    }
    LOBYTE(v4) = v11 != 0;
    return v4;
  }
  else
  {
    *(_QWORD *)&stru_140E2EB88.Header.Lock = 0LL;
    stru_140E2EB88.StackLimit = &stru_140E2EB88.Header.WaitListHead;
    LODWORD(stru_140E2EB88.InitialStack) = 1;
    stru_140E2EB88.QuantumTarget = (unsigned __int64)&stru_140E2EB88.InitialStack;
    LOWORD(stru_140E2EB88.Timer.Header.WaitListHead.Flink) = 0;
    LOBYTE(stru_140E2EB88.Header.WaitListHead.Flink) |= 1u;
    stru_140E2EB88.SListFaultAddress = &stru_140E2EB88.Header.WaitListHead.Blink;
    stru_140E2EB88.Header.WaitListHead.Blink = (struct _LIST_ENTRY *)&stru_140E2EB88.Header.WaitListHead.Blink;
    stru_140E2EB88.StackBase = &MiSystemPartition;
    stru_140E2EB88.ThreadLock = (unsigned __int64)&stru_140E2EB88.StackBase;
    stru_140E2EB88.Timer.DueTime.QuadPart = (unsigned __int64)&stru_140E2EB88.Timer.Header.WaitListHead.Blink;
    stru_140E2EB88.Timer.Header.WaitListHead.Blink = (struct _LIST_ENTRY *)&stru_140E2EB88.Timer.Header.WaitListHead.Blink;
    result = 1LL;
    BYTE2(stru_140E2EB88.Timer.Header.WaitListHead.Flink) = 6;
    HIDWORD(stru_140E2EB88.Timer.Header.WaitListHead.Flink) = 0;
  }
  return result;
}
