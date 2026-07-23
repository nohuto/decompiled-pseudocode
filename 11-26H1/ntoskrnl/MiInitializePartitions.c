/*
 * XREFs of MiInitializePartitions @ 0x140CFF024
 * Callers:
 *     MiCreatePfnDatabase @ 0x140CF8B98 (MiCreatePfnDatabase.c)
 *     MiInitNucleus @ 0x140CF903C (MiInitNucleus.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x14027D0F0 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     ?KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z @ 0x14043CF70 (-KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z.c)
 *     MiExpandPartitionIds @ 0x14086F3E8 (MiExpandPartitionIds.c)
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
  $241382875694CED3D471BC5892DE3337 *v14; // rcx

  v4 = 0;
  if ( a1 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    v7 = (AutoBoost *)KeAbPreAcquire((__int64)&stru_140E2ED08, 0LL, 0LL, a4);
    v9 = _interlockedbittestandset64(&stru_140E2ED08.Header.Lock, 0LL);
    v10 = v7;
    if ( v9 )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&stru_140E2ED08, v7, (__int64)&stru_140E2ED08);
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
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&stru_140E2ED08, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&stru_140E2ED08.Header.Lock);
    KeAbPostRelease((unsigned __int64)&stru_140E2ED08);
    if ( CurrentThread->SpecialApcDisable++ == -1 )
    {
      v14 = &CurrentThread->152;
      if ( ($241382875694CED3D471BC5892DE3337 *)v14->ApcState.ApcListHead[0].Flink != v14 )
        KiCheckForKernelApcDelivery((__int64)v14, v12);
    }
    LOBYTE(v4) = v11 != 0;
    return v4;
  }
  else
  {
    *(_QWORD *)&stru_140E2ED08.Header.Lock = 0LL;
    stru_140E2ED08.StackLimit = &stru_140E2ED08.Header.WaitListHead;
    LODWORD(stru_140E2ED08.InitialStack) = 1;
    stru_140E2ED08.QuantumTarget = (unsigned __int64)&stru_140E2ED08.InitialStack;
    LOWORD(stru_140E2ED08.Timer.Header.WaitListHead.Flink) = 0;
    LOBYTE(stru_140E2ED08.Header.WaitListHead.Flink) |= 1u;
    stru_140E2ED08.SListFaultAddress = &stru_140E2ED08.Header.WaitListHead.Blink;
    stru_140E2ED08.Header.WaitListHead.Blink = (struct _LIST_ENTRY *)&stru_140E2ED08.Header.WaitListHead.Blink;
    stru_140E2ED08.StackBase = &MiSystemPartition;
    stru_140E2ED08.ThreadLock = (unsigned __int64)&stru_140E2ED08.StackBase;
    stru_140E2ED08.Timer.DueTime.QuadPart = (unsigned __int64)&stru_140E2ED08.Timer.Header.WaitListHead.Blink;
    stru_140E2ED08.Timer.Header.WaitListHead.Blink = (struct _LIST_ENTRY *)&stru_140E2ED08.Timer.Header.WaitListHead.Blink;
    result = 1LL;
    BYTE2(stru_140E2ED08.Timer.Header.WaitListHead.Flink) = 6;
    HIDWORD(stru_140E2ED08.Timer.Header.WaitListHead.Flink) = 0;
  }
  return result;
}
