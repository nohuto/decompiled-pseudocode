/*
 * XREFs of PfpScenCtxPrefetchWait @ 0x140BFEAD8
 * Callers:
 *     PfpProcessScenarioPhase @ 0x140B1F0C8 (PfpProcessScenarioPhase.c)
 *     PfPowerActionNotify @ 0x140C0D3C0 (PfPowerActionNotify.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     KeResetEvent @ 0x140397930 (KeResetEvent.c)
 *     PfpScenCtxWaiterTimedOut @ 0x1406028B4 (PfpScenCtxWaiterTimedOut.c)
 *     PfpPartitionIterateAndCheckCanAnyDoAccessLogging @ 0x140602D74 (PfpPartitionIterateAndCheckCanAnyDoAccessLogging.c)
 */

__int64 __fastcall PfpScenCtxPrefetchWait(struct _KTHREAD *a1, int a2, unsigned int a3)
{
  unsigned int v3; // esi
  int v4; // r12d
  int v6; // r13d
  unsigned int v7; // r15d
  struct _KLOCK_ENTRIES *v8; // r9
  int v9; // r14d
  struct _KTHREAD *CurrentThread; // rax
  AutoBoost *v11; // rax
  void *v12; // rdx
  AutoBoost *v13; // rbx
  int v14; // ecx
  int v15; // r12d
  unsigned int v16; // ebx
  __int64 v17; // rbx
  unsigned int v18; // esi
  NTSTATUS v19; // eax
  __int64 v20; // r8
  int v21; // edx
  LARGE_INTEGER Timeout; // [rsp+70h] [rbp+8h] BYREF
  int v24; // [rsp+78h] [rbp+10h]
  unsigned int v25; // [rsp+80h] [rbp+18h]

  v25 = a3;
  v24 = a2;
  v3 = a3;
  Timeout.QuadPart = 0LL;
  v4 = a2;
  v6 = 0;
  v7 = 0;
  v9 = (unsigned int)PfpPartitionIterateAndCheckCanAnyDoAccessLogging() != 0 ? 0x7D0 : 0;
  while ( 1 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v11 = (AutoBoost *)KeAbPreAcquire((__int64)a1, 0LL, 0LL, v8);
    v13 = v11;
    if ( _interlockedbittestandset64(&a1->Header.Lock, 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)a1, v11, (__int64)a1);
    if ( v13 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v13, v12);
      else
        *((_BYTE *)v13 + 10) = 1;
    }
    if ( LODWORD(a1->StackLimit) != v4 || ((__int64)a1->Header.WaitListHead.Flink & 0xC) == 8 )
      break;
    if ( v6 )
      goto LABEL_24;
    KeResetEvent((PRKEVENT)&a1->Header.WaitListHead.Blink);
    v14 = (__int64)a1->Header.WaitListHead.Flink & 3;
    if ( v14 == 1 )
    {
      v15 = 2;
      v16 = v3 - v7;
    }
    else
    {
      if ( v14 )
        break;
      if ( !v9 )
      {
LABEL_24:
        PfpScenCtxWaiterTimedOut((__int64)a1);
        break;
      }
      v16 = v9;
      v15 = 1;
      v9 = 0;
    }
    LODWORD(a1->Header.WaitListHead.Flink) = (__int64)a1->Header.WaitListHead.Flink & 0xFFFFFFF3 | 4;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&a1->Header.Lock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&a1->Header.Lock);
    KeAbPostRelease((unsigned __int64)a1);
    KeLeaveCriticalRegion();
    Timeout.QuadPart = -10000LL * v16;
    v17 = MEMORY[0xFFFFF78000000320];
    v18 = MEMORY[0xFFFFF78000000004];
    v19 = KeWaitForSingleObject(&a1->Header.WaitListHead.Blink, Executive, 0, 0, &Timeout);
    v20 = v18;
    v21 = v18 * HIDWORD(v17);
    v3 = v25;
    v8 = (struct _KLOCK_ENTRIES *)(((MEMORY[0xFFFFF78000000004] * MEMORY[0xFFFFF78000000324] - v21) << 8)
                                 - (unsigned int)(((unsigned __int64)(unsigned int)v17 * v20) >> 24));
    v7 += ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24) + (_DWORD)v8;
    if ( v19 == 258 || v7 >= v25 )
    {
      v6 = 1;
    }
    else if ( v15 == 2 )
    {
      return v7;
    }
    v4 = v24;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&a1->Header.Lock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&a1->Header.Lock);
  KeAbPostRelease((unsigned __int64)a1);
  KeLeaveCriticalRegion();
  return v7;
}
