/*
 * XREFs of RestartContext @ 0x14000E2E0
 * Callers:
 *     RunContext @ 0x140009490 (RunContext.c)
 *     AsyncEvalObject @ 0x140009DE0 (AsyncEvalObject.c)
 *     RestartCtxtCallback @ 0x14000EAF0 (RestartCtxtCallback.c)
 *     SyncEvalObject @ 0x14000EE78 (SyncEvalObject.c)
 *     AsyncCallBack @ 0x14000F688 (AsyncCallBack.c)
 *     SleepQueueDpc @ 0x14000F910 (SleepQueueDpc.c)
 *     AMLIRestartContext @ 0x14004A10C (AMLIRestartContext.c)
 *     TimeoutCallback @ 0x14004BA40 (TimeoutCallback.c)
 *     SyncLoadDDB @ 0x1400DDC3C (SyncLoadDDB.c)
 * Callees:
 *     InsertReadyQueue @ 0x14000E500 (InsertReadyQueue.c)
 *     OSQueueWorkItem @ 0x14000EA6C (OSQueueWorkItem.c)
 */

__int64 __fastcall RestartContext(_QWORD *Entry)
{
  __int64 v1; // rax
  __int64 v3; // r8
  struct _KTHREAD *CurrentThread; // r11
  __int64 v5; // r9
  __int64 v6; // r10
  __int64 v7; // rdi
  __int64 v8; // rcx
  unsigned int inserted; // ebx

  v1 = Entry[13];
  if ( v1 )
    v3 = *(_QWORD *)(v1 + 32);
  else
    v3 = Entry[9];
  CurrentThread = KeGetCurrentThread();
  v5 = Entry[15];
  v6 = Entry[51];
  v7 = (unsigned int)gReadyQueue;
  if ( (gDebugger & 0x8000) != 0 && qword_14008ED10 )
  {
    v8 = 72LL * (_InterlockedExchangeAdd((_DWORD *)&qword_14008ED08 + 1, 1u) % (unsigned int)qword_14008ED08);
    *(_QWORD *)((char *)qword_14008ED10 + v8 + 8) = MEMORY[0xFFFFF78000000008];
    *(_DWORD *)((char *)qword_14008ED10 + v8) = 1380275028;
    *(_QWORD *)((char *)qword_14008ED10 + v8 + 16) = CurrentThread;
    *(_QWORD *)((char *)qword_14008ED10 + v8 + 24) = v6;
    *(_QWORD *)((char *)qword_14008ED10 + v8 + 32) = Entry;
    *(_QWORD *)((char *)qword_14008ED10 + v8 + 40) = v7;
    *(_QWORD *)((char *)qword_14008ED10 + v8 + 48) = Entry;
    *(_QWORD *)((char *)qword_14008ED10 + v8 + 56) = v3;
    *(_QWORD *)((char *)qword_14008ED10 + v8 + 64) = v5;
  }
  if ( KeGetCurrentIrql() >= 2u )
  {
    byte_14008EB70 = KeAcquireSpinLockRaiseToDpc(&SpinLock);
    if ( !Entry[54] )
      Entry[54] = ++gAmliMethodCounter;
    *((_DWORD *)Entry + 16) |= 0x20u;
    KeReleaseSpinLock(&SpinLock, byte_14008EB70);
    if ( (gdwfAMLI & 4) == 0 || !(unsigned __int8)ExTryQueueWorkItem(Entry + 45, 1LL) )
      OSQueueWorkItem(Entry + 45);
    return 32772LL;
  }
  else
  {
    byte_14008EB70 = KeAcquireSpinLockRaiseToDpc(&SpinLock);
    if ( !Entry[54] )
      Entry[54] = ++gAmliMethodCounter;
    inserted = InsertReadyQueue(Entry);
    KeReleaseSpinLock(&SpinLock, byte_14008EB70);
    return inserted;
  }
}
