/*
 * XREFs of ExpDebuggerWorker @ 0x140C1CD60
 * Callers:
 *     <none>
 * Callees:
 *     KiUnstackDetachProcess @ 0x140232120 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1402491E0 (KiStackAttachProcess.c)
 *     DbgPrintEx @ 0x1403992B0 (DbgPrintEx.c)
 *     MmIsKernelAddress @ 0x14044F260 (MmIsKernelAddress.c)
 *     MmGetDefaultPagePriority @ 0x1404AFDB0 (MmGetDefaultPagePriority.c)
 *     DbgBreakPointWithStatus @ 0x140536DB0 (DbgBreakPointWithStatus.c)
 *     MmDbgMarkPfnModifiedWorker @ 0x140703CCC (MmDbgMarkPfnModifiedWorker.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     EtwWmitraceWorker @ 0x1408324F8 (EtwWmitraceWorker.c)
 *     PsTerminateProcess @ 0x14094A334 (PsTerminateProcess.c)
 *     PsGetNextProcess @ 0x1409BC470 (PsGetNextProcess.c)
 *     MmPrefetchVirtualMemory @ 0x140A57D94 (MmPrefetchVirtualMemory.c)
 *     PsQuitNextProcessThread @ 0x140B046B0 (PsQuitNextProcessThread.c)
 */

void ExpDebuggerWorker()
{
  struct _LIST_ENTRY *Blink; // rbp
  struct _LIST_ENTRY *Flink; // rsi
  char v2; // r14
  char DefaultPagePriority; // al
  int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // r8
  struct _KLOCK_ENTRIES *v7; // r9
  LIST_ENTRY *v8; // rdi
  LIST_ENTRY *v9; // rcx
  LIST_ENTRY *NextProcess; // rax
  struct _LIST_ENTRY *v11; // r9
  bool IsKernelAddress; // al
  int v13; // eax
  struct _KTHREAD *Thread; // [rsp+20h] [rbp-58h] BYREF
  __int64 v15; // [rsp+28h] [rbp-50h]
  __int128 v16; // [rsp+30h] [rbp-48h] BYREF
  __int128 v17; // [rsp+40h] [rbp-38h]
  __int128 v18; // [rsp+50h] [rbp-28h]

  Blink = ExSaPageGroupDescriptorArrayLock.SchedulerApc.ApcListEntry.Blink;
  Flink = ExSaPageGroupDescriptorArrayLock.SchedulerApc.ApcListEntry.Flink;
  v2 = EtwWmitraceWork;
  v16 = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  DefaultPagePriority = MmGetDefaultPagePriority();
  Thread = ExSaPageGroupDescriptorArrayLock.SchedulerApc.Thread;
  v15 = 1LL;
  v4 = DefaultPagePriority & 7 | 0xB8;
  *(_OWORD *)&ExSaPageGroupDescriptorArrayLock.SchedulerApcFill5[16] = 0uLL;
  ExSaPageGroupDescriptorArrayLock.SchedulerApc.Thread = 0LL;
  _InterlockedExchange(&ExpDebuggerWork, 0);
  MmDbgMarkPfnModifiedWorker();
  v8 = 0LL;
  if ( __PAIR128__((unsigned __int64)Flink, 0LL) != (unsigned __int64)Blink )
  {
    v9 = 0LL;
    while ( 1 )
    {
      NextProcess = PsGetNextProcess(v9, v5, v6, v7);
      v8 = NextProcess;
      if ( !NextProcess )
        break;
      if ( NextProcess == Flink )
      {
        KiStackAttachProcess((_KPROCESS *)Flink, 0, (__int64)&v16);
        goto LABEL_11;
      }
      v9 = NextProcess;
      if ( NextProcess == Blink )
      {
        PsTerminateProcess((struct _KPROCESS *)NextProcess);
        goto LABEL_23;
      }
    }
    v11 = Flink;
    if ( !Flink )
      v11 = Blink;
    DbgPrintEx(0, 0, "EX debug work: Unable to find process %p\n", v11, Thread, v15, v16, v17, v18);
  }
LABEL_11:
  if ( Thread )
  {
    IsKernelAddress = MmIsKernelAddress((unsigned __int64)Thread);
    v13 = MmPrefetchVirtualMemory(IsKernelAddress - 1LL, 1uLL, (__int64)&Thread, v4);
    if ( v13 < 0 )
      DbgPrintEx(0, 0, "EX page in: MmPrefetchVirtualMemory failed, 0x%08x\n", v13);
  }
  if ( v2 )
    EtwWmitraceWorker();
  if ( Flink || Blink || Thread || v2 )
    DbgBreakPointWithStatus(7u);
  if ( v8 )
  {
    KiUnstackDetachProcess((__int64)&v16, 0);
LABEL_23:
    PsQuitNextProcessThread(v8);
  }
}
