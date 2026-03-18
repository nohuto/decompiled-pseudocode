/*
 * XREFs of InsertReadyQueue @ 0x14000E500
 * Callers:
 *     DequeueAndReadyContext @ 0x14000E1E8 (DequeueAndReadyContext.c)
 *     RestartCtxtPassive @ 0x14000E280 (RestartCtxtPassive.c)
 *     RestartContext @ 0x14000E2E0 (RestartContext.c)
 * Callees:
 *     ConPrintf @ 0x1400093EC (ConPrintf.c)
 *     RunContext @ 0x140009490 (RunContext.c)
 *     OSQueueWorkItem @ 0x14000EA6C (OSQueueWorkItem.c)
 *     AsyncCallBack @ 0x14000F688 (AsyncCallBack.c)
 *     LogSchedEvent @ 0x140030800 (LogSchedEvent.c)
 *     AMLIDebugger @ 0x140055228 (AMLIDebugger.c)
 */

__int64 __fastcall InsertReadyQueue(struct _KTIMER *Entry, char a2)
{
  unsigned int v2; // edi
  _LIST_ENTRY *Blink; // rax
  _LIST_ENTRY *Flink; // r8
  struct _KTHREAD *CurrentThread; // r11
  __int64 v8; // r9
  _ULARGE_INTEGER DueTime; // r10
  __int64 v10; // r14
  __int64 v11; // rcx
  volatile int Lock; // eax
  volatile int v13; // ecx
  _LIST_ENTRY *v14; // rax
  _LIST_ENTRY *v15; // r8
  struct _KTHREAD *v16; // r11
  __int64 v17; // r9
  _ULARGE_INTEGER v18; // r10
  __int64 v19; // rdi
  __int64 v20; // rcx
  volatile int v21; // eax
  _LIST_ENTRY *p_TimerListEntry; // rcx
  _LIST_ENTRY *v23; // rdx
  _LIST_ENTRY *v25; // rax
  _LIST_ENTRY *v26; // r8
  struct _KTHREAD *v27; // r11
  __int64 v28; // r9
  _ULARGE_INTEGER v29; // r10
  __int64 v30; // rdi
  __int64 v31; // rcx
  _LIST_ENTRY *v32; // rax
  _LIST_ENTRY *v33; // r9
  _LIST_ENTRY *v34; // rax
  _LIST_ENTRY *v35; // r9
  volatile int v36; // eax

  v2 = 0;
  if ( (gDebugger & 0x1000) != 0 )
  {
    ConPrintf("\nProcess AML Debugger Request.\n");
    _InterlockedAnd(&gDebugger, 0xFFFFEFFF);
    AMLIDebugger();
  }
  Blink = Entry[1].TimerListEntry.Blink;
  if ( Blink )
    Flink = Blink[2].Flink;
  else
    Flink = Entry[1].Header.WaitListHead.Flink;
  CurrentThread = KeGetCurrentThread();
  v8 = *(_QWORD *)&Entry[1].Processor;
  DueTime = Entry[6].DueTime;
  v10 = (unsigned int)gReadyQueue;
  if ( (gDebugger & 0x8000) != 0 && qword_14008ED10 )
  {
    v11 = 72LL * (_InterlockedExchangeAdd((_DWORD *)&qword_14008ED08 + 1, 1u) % (unsigned int)qword_14008ED08);
    *(_QWORD *)((char *)qword_14008ED10 + v11 + 8) = MEMORY[0xFFFFF78000000008];
    *(_DWORD *)((char *)qword_14008ED10 + v11) = 1229869905;
    *(_QWORD *)((char *)qword_14008ED10 + v11 + 16) = CurrentThread;
    *(_ULARGE_INTEGER *)((char *)qword_14008ED10 + v11 + 24) = DueTime;
    *(_QWORD *)((char *)qword_14008ED10 + v11 + 32) = Entry;
    *(_QWORD *)((char *)qword_14008ED10 + v11 + 40) = v10;
    *(_QWORD *)((char *)qword_14008ED10 + v11 + 48) = Entry;
    *(_QWORD *)((char *)qword_14008ED10 + v11 + 56) = Flink;
    *(_QWORD *)((char *)qword_14008ED10 + v11 + 64) = v8;
  }
  Lock = Entry[1].Header.Lock;
  if ( (Lock & 1) != 0 )
  {
    Entry[1].Header.LockNV = Lock & 0xFFFFFFFE;
    if ( !KeCancelTimer(Entry + 3) )
      Entry[1].Header.LockNV |= 2u;
  }
  v13 = Entry[1].Header.Lock;
  Entry[1].Header.LockNV = v13 | 8;
  if ( (v13 & 2) == 0 && (v13 & 0x90) != 0x10 )
  {
    if ( a2 )
    {
      KeReleaseSpinLock(&SpinLock, byte_14008EB70);
      AsyncCallBack(Entry, 32771LL);
      byte_14008EB70 = KeAcquireSpinLockRaiseToDpc(&SpinLock);
      return v2;
    }
    if ( (gdwfAMLI & 4) != 0 )
    {
      if ( (gReadyQueue & 8) == 0 )
        return (unsigned int)RunContext(Entry);
      v34 = Entry[1].TimerListEntry.Blink;
      if ( v34 )
        v35 = v34[2].Flink;
      else
        v35 = Entry[1].Header.WaitListHead.Flink;
      LogSchedEvent(1363367000, (_DWORD)Entry, (_DWORD)Entry, (_DWORD)v35, *(_QWORD *)&Entry[1].Processor);
      v36 = Entry[1].Header.Lock;
      if ( (v36 & 0x40) != 0 )
        goto LABEL_23;
      p_TimerListEntry = &Entry->TimerListEntry;
      Entry[1].Header.LockNV = v36 | 0x40;
      v23 = (_LIST_ENTRY *)qword_14008EB60;
      if ( *(__int64 **)qword_14008EB60 == &qword_14008EB58 )
        goto LABEL_22;
    }
    else
    {
      if ( (v13 & 0x80u) != 0 && (struct _KTHREAD *)Entry[6].DueTime.QuadPart == KeGetCurrentThread() )
      {
        v32 = Entry[1].TimerListEntry.Blink;
        if ( v32 )
          v33 = v32[2].Flink;
        else
          v33 = Entry[1].Header.WaitListHead.Flink;
        LogSchedEvent(1313166164, (_DWORD)Entry, (_DWORD)Entry, (_DWORD)v33, *(_QWORD *)&Entry[1].Processor);
        return (unsigned int)RunContext(Entry);
      }
      if ( (__int64 *)RunningContextListHead == &RunningContextListHead && (gReadyQueue & 8) == 0 )
      {
        v25 = Entry[1].TimerListEntry.Blink;
        if ( v25 )
          v26 = v25[2].Flink;
        else
          v26 = Entry[1].Header.WaitListHead.Flink;
        v27 = KeGetCurrentThread();
        v28 = *(_QWORD *)&Entry[1].Processor;
        v29 = Entry[6].DueTime;
        v30 = (unsigned int)gReadyQueue;
        if ( (gDebugger & 0x8000) != 0 && qword_14008ED10 )
        {
          v31 = 72LL * (_InterlockedExchangeAdd((_DWORD *)&qword_14008ED08 + 1, 1u) % (unsigned int)qword_14008ED08);
          *(_QWORD *)((char *)qword_14008ED10 + v31 + 8) = MEMORY[0xFFFFF78000000008];
          *(_DWORD *)((char *)qword_14008ED10 + v31) = 1163280716;
          *(_QWORD *)((char *)qword_14008ED10 + v31 + 16) = v27;
          *(_ULARGE_INTEGER *)((char *)qword_14008ED10 + v31 + 24) = v29;
          *(_QWORD *)((char *)qword_14008ED10 + v31 + 32) = Entry;
          *(_QWORD *)((char *)qword_14008ED10 + v31 + 40) = v30;
          *(_QWORD *)((char *)qword_14008ED10 + v31 + 48) = Entry;
          *(_QWORD *)((char *)qword_14008ED10 + v31 + 56) = v26;
          *(_QWORD *)((char *)qword_14008ED10 + v31 + 64) = v28;
        }
        v2 = RunContext(Entry);
        if ( (__int64 *)qword_14008EB58 != &qword_14008EB58 && (gReadyQueue & 2) == 0 )
        {
          LogSchedEvent(1263092555, 0, v2, 0, 0LL);
          gReadyQueue |= 2u;
          OSQueueWorkItem(&qword_14008EB78);
        }
        return v2;
      }
      v14 = Entry[1].TimerListEntry.Blink;
      if ( v14 )
        v15 = v14[2].Flink;
      else
        v15 = Entry[1].Header.WaitListHead.Flink;
      v16 = KeGetCurrentThread();
      v17 = *(_QWORD *)&Entry[1].Processor;
      v18 = Entry[6].DueTime;
      v19 = (unsigned int)gReadyQueue;
      if ( (gDebugger & 0x8000) != 0 && qword_14008ED10 )
      {
        v20 = 72LL * (_InterlockedExchangeAdd((_DWORD *)&qword_14008ED08 + 1, 1u) % (unsigned int)qword_14008ED08);
        *(_QWORD *)((char *)qword_14008ED10 + v20 + 8) = MEMORY[0xFFFFF78000000008];
        *(_DWORD *)((char *)qword_14008ED10 + v20) = 1363367000;
        *(_QWORD *)((char *)qword_14008ED10 + v20 + 16) = v16;
        *(_ULARGE_INTEGER *)((char *)qword_14008ED10 + v20 + 24) = v18;
        *(_QWORD *)((char *)qword_14008ED10 + v20 + 32) = Entry;
        *(_QWORD *)((char *)qword_14008ED10 + v20 + 40) = v19;
        *(_QWORD *)((char *)qword_14008ED10 + v20 + 48) = Entry;
        *(_QWORD *)((char *)qword_14008ED10 + v20 + 56) = v15;
        *(_QWORD *)((char *)qword_14008ED10 + v20 + 64) = v17;
      }
      v21 = Entry[1].Header.Lock;
      if ( (v21 & 0x40) != 0 )
      {
LABEL_23:
        Entry[1].Header.LockNV |= 0x20u;
        return 32772;
      }
      p_TimerListEntry = &Entry->TimerListEntry;
      Entry[1].Header.LockNV = v21 | 0x40;
      v23 = (_LIST_ENTRY *)qword_14008EB60;
      if ( *(__int64 **)qword_14008EB60 == &qword_14008EB58 )
      {
LABEL_22:
        p_TimerListEntry->Flink = (_LIST_ENTRY *)&qword_14008EB58;
        p_TimerListEntry->Blink = v23;
        v23->Flink = p_TimerListEntry;
        qword_14008EB60 = (__int64)p_TimerListEntry;
        goto LABEL_23;
      }
    }
    __fastfail(3u);
  }
  return v2;
}
