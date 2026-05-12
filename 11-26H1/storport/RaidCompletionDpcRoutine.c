/*
 * XREFs of RaidCompletionDpcRoutine @ 0x14006C160
 * Callers:
 *     <none>
 * Callees:
 *     RaidResumeAdapterQueue @ 0x140010650 (RaidResumeAdapterQueue.c)
 *     RaidAdapterRestartQueues @ 0x140010F40 (RaidAdapterRestartQueues.c)
 *     RaidAdapterFindUnit @ 0x140028FF0 (RaidAdapterFindUnit.c)
 *     RaidResumeUnitQueue @ 0x140029480 (RaidResumeUnitQueue.c)
 *     RaidUnitRestartQueue @ 0x140029650 (RaidUnitRestartQueue.c)
 *     McTemplateK0pzqqxxtt_EtwWriteTransfer @ 0x140057BB0 (McTemplateK0pzqqxxtt_EtwWriteTransfer.c)
 *     StorPurgeEventQueue @ 0x140073DCC (StorPurgeEventQueue.c)
 */

void __fastcall RaidCompletionDpcRoutine(
        struct _KDPC *Dpc,
        _QWORD *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  __int64 v4; // rdi
  int v5; // esi
  unsigned int v6; // r12d
  LARGE_INTEGER v7; // rbx
  LARGE_INTEGER PerformanceCounter; // rax
  unsigned __int64 v9; // rdx
  __int64 *i; // r15
  int v11; // eax
  LARGE_INTEGER v12; // rax
  unsigned __int64 v13; // r10
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 *Unit; // rax
  __int64 v17; // rbx
  __int64 v18; // [rsp+28h] [rbp-90h]
  __int64 v19; // [rsp+30h] [rbp-88h]
  __int64 v20; // [rsp+48h] [rbp-70h]
  __int64 v21; // [rsp+50h] [rbp-68h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+68h] [rbp-50h] BYREF
  int v23; // [rsp+C8h] [rbp+10h]
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+D0h] [rbp+18h] BYREF
  PVOID v25; // [rsp+D8h] [rbp+20h]

  v25 = SystemArgument2;
  v4 = DeferredContext[8];
  HIBYTE(v23) = 0;
  v5 = (int)SystemArgument1;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v6 = 0;
  v7.QuadPart = 0LL;
  if ( StorEtwLoggingEnabled && (byte_140173443 & 4) != 0 )
  {
    if ( UseQPCTime )
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
    else
      PerformanceCounter.QuadPart = KeQueryUnbiasedInterruptTime();
    v7 = PerformanceCounter;
  }
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v4 + 136), &LockHandle);
  for ( i = *(__int64 **)(v4 + 144); i != (__int64 *)(v4 + 144); i = (__int64 *)*i )
  {
    v11 = *((_DWORD *)i + 10);
    HIBYTE(v23) = HIBYTE(v11);
    if ( (BYTE2(v5) == 0xFF || BYTE2(v5) == (_BYTE)v11)
      && (BYTE1(v5) == 0xFF || BYTE1(v5) == BYTE1(v11))
      && ((_BYTE)v5 == 0xFF || (_BYTE)v5 == BYTE2(v11)) )
    {
      v6 = StorPurgeEventQueue(i[62], v9, v25);
    }
    if ( StorEtwLoggingEnabled && (byte_140173443 & 4) != 0 && v6 >= 0x19 )
    {
      PerformanceFrequency.QuadPart = 1LL;
      if ( UseQPCTime )
        v12 = KeQueryPerformanceCounter(&PerformanceFrequency);
      else
        v12.QuadPart = KeQueryUnbiasedInterruptTime();
      if ( v12.QuadPart <= 0 || v12.QuadPart >= v7.QuadPart )
        v13 = v12.QuadPart - v7.QuadPart;
      else
        v13 = v12.QuadPart - v7.QuadPart - 1;
      if ( UseQPCTime )
      {
        v14 = 0LL;
        if ( PerformanceFrequency.QuadPart && v13 )
        {
          v9 = 10000 * (1000 * (v13 % PerformanceFrequency.QuadPart) % PerformanceFrequency.QuadPart)
             % PerformanceFrequency.QuadPart;
          v14 = 10000
              * (1000 * (v13 % PerformanceFrequency.QuadPart) % PerformanceFrequency.QuadPart)
              / PerformanceFrequency.QuadPart
              + 10000
              * (1000 * (v13 % PerformanceFrequency.QuadPart) / PerformanceFrequency.QuadPart
               + 1000 * (v13 / PerformanceFrequency.QuadPart));
        }
      }
      else
      {
        v14 = v13;
      }
      if ( (byte_140173443 & 4) != 0 )
      {
        LODWORD(v21) = 0;
        LODWORD(v20) = 0;
        LODWORD(v19) = v6;
        LODWORD(v18) = *(_DWORD *)(v4 + 56);
        McTemplateK0pzqqxxtt_EtwWriteTransfer(
          (unsigned int)v18,
          v9,
          v14,
          RaidCompletionDpcRoutine,
          L"RaidCompletionDpcRoutine",
          v18,
          v19,
          v13,
          v14,
          v20,
          v21);
      }
    }
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( BYTE2(v5) == 0xFF || BYTE1(v5) == 0xFF || (_BYTE)v5 == 0xFF )
  {
    RaidResumeAdapterQueue(v4, 0LL, 0LL, v15);
    RaidAdapterRestartQueues(v4, 0);
  }
  else
  {
    LOBYTE(v23) = BYTE2(v5);
    BYTE1(v23) = BYTE1(v5);
    BYTE2(v23) = v5;
    Unit = RaidAdapterFindUnit(v4, v23);
    v17 = (__int64)Unit;
    if ( Unit )
    {
      RaidResumeUnitQueue((__int64)Unit);
      RaidUnitRestartQueue(v17, 0);
    }
  }
}
