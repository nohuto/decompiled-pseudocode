/*
 * XREFs of MiInitializePagedPoolEvents @ 0x140CF9D74
 * Callers:
 *     MiInitializeMemoryEvents @ 0x14087F860 (MiInitializeMemoryEvents.c)
 * Callees:
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x14027DB80 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeSetEvent @ 0x1402DE9C0 (KeSetEvent.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 *     KeResetEvent @ 0x140395BB0 (KeResetEvent.c)
 *     ?KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z @ 0x140444460 (-KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z.c)
 *     MiFreePoolPagesLeft @ 0x14047E2B4 (MiFreePoolPagesLeft.c)
 */

void __fastcall MiInitializePagedPoolEvents(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rdi
  AutoBoost *v5; // rax
  volatile unsigned __int8 *v6; // rdx
  signed __int8 v7; // cf
  AutoBoost *v8; // rsi
  unsigned __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rcx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v5 = (AutoBoost *)KeAbPreAcquire((__int64)&stru_140E36558.ApcState.ApcListHead[1], 0LL, 0LL, a4);
  v7 = _interlockedbittestandset64((volatile signed __int32 *)&stru_140E36558.ApcStateFill[16], 0LL);
  v8 = v5;
  if ( v7 )
    ExfAcquirePushLockExclusiveEx(
      (unsigned __int64 *)&stru_140E36558.ApcState.ApcListHead[1],
      v5,
      (__int64)&stru_140E36558.ApcState.ApcListHead[1]);
  if ( v8 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
    {
      LOBYTE(v6) = 2;
      AutoBoost::KiAbpSetEntryValue((AutoBoost *)((char *)v8 + 33), v6, 1);
    }
    else
    {
      *((_BYTE *)v8 + 10) = 1;
    }
  }
  v9 = MiFreePoolPagesLeft(5);
  if ( v9 < qword_140E2C5A8 )
    KeResetEvent((PRKEVENT)stru_140E37DC8.ThreadLock);
  else
    KeSetEvent((PRKEVENT)stru_140E37DC8.ThreadLock, 0, 0);
  if ( v9 > qword_140E2C5A0 )
    KeResetEvent((PRKEVENT)stru_140E37DC8.StackBase);
  else
    KeSetEvent((PRKEVENT)stru_140E37DC8.StackBase, 0, 0);
  if ( (_InterlockedExchangeAdd64(
          (volatile signed __int64 *)&stru_140E36558.ApcState.ApcListHead[1].Flink,
          0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&stru_140E36558.ApcState.ApcListHead[1]);
  KeAbPostRelease((unsigned __int64)&stru_140E36558.ApcState.ApcListHead[1]);
  if ( CurrentThread->SpecialApcDisable++ == -1
    && ($7A85BAF4F1FA08634C1C4A3E45B775B3 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
  {
    KiCheckForKernelApcDelivery(v11, v10);
  }
}
