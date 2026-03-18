/*
 * XREFs of ExpDebuggerWorker @ 0x140C16D60
 * Callers:
 *     <none>
 * Callees:
 *     KiUnstackDetachProcess @ 0x1402307C0 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140247880 (KiStackAttachProcess.c)
 *     DbgPrintEx @ 0x140397530 (DbgPrintEx.c)
 *     MmIsKernelAddress @ 0x1404579F0 (MmIsKernelAddress.c)
 *     MmGetDefaultPagePriority @ 0x1404B6960 (MmGetDefaultPagePriority.c)
 *     DbgBreakPointWithStatus @ 0x140534930 (DbgBreakPointWithStatus.c)
 *     MmDbgMarkPfnModifiedWorker @ 0x1406FEFFC (MmDbgMarkPfnModifiedWorker.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     EtwWmitraceWorker @ 0x14082C2B8 (EtwWmitraceWorker.c)
 *     PsTerminateProcess @ 0x14095690C (PsTerminateProcess.c)
 *     PsGetNextProcess @ 0x14096EE20 (PsGetNextProcess.c)
 *     MmPrefetchVirtualMemory @ 0x140A4EAA4 (MmPrefetchVirtualMemory.c)
 *     PsQuitNextProcessThread @ 0x140B02980 (PsQuitNextProcessThread.c)
 */

void ExpDebuggerWorker()
{
  _KPROCESS *Thread; // rsi
  LIST_ENTRY *v1; // rbp
  char v2; // r14
  char DefaultPagePriority; // al
  int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // r8
  struct _KLOCK_ENTRIES *v7; // r9
  LIST_ENTRY *v8; // rdi
  LIST_ENTRY *v9; // rcx
  LIST_ENTRY *NextProcess; // rax
  _KPROCESS *v11; // r9
  bool IsKernelAddress; // al
  int v13; // eax
  struct _LIST_ENTRY *Blink; // [rsp+20h] [rbp-58h] BYREF
  __int64 v15; // [rsp+28h] [rbp-50h]
  __int128 v16; // [rsp+30h] [rbp-48h] BYREF
  __int128 v17; // [rsp+40h] [rbp-38h]
  __int128 v18; // [rsp+50h] [rbp-28h]

  Thread = (_KPROCESS *)ExSaPageGroupDescriptorArrayLock.WaitBlock[1].Thread;
  v1 = *(LIST_ENTRY **)&ExSaPageGroupDescriptorArrayLock.WaitBlockFill11[64];
  v2 = EtwWmitraceWork;
  v16 = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  DefaultPagePriority = MmGetDefaultPagePriority();
  Blink = ExSaPageGroupDescriptorArrayLock.WaitBlock[1].WaitListEntry.Blink;
  v15 = 1LL;
  v4 = DefaultPagePriority & 7 | 0xB8;
  ExSaPageGroupDescriptorArrayLock.WaitBlock[1].Thread = 0LL;
  *(_OWORD *)&ExSaPageGroupDescriptorArrayLock.WaitBlockFill11[56] = 0uLL;
  _InterlockedExchange(&ExpDebuggerWork, 0);
  MmDbgMarkPfnModifiedWorker();
  v8 = 0LL;
  if ( Thread || v1 )
  {
    v9 = 0LL;
    while ( 1 )
    {
      NextProcess = PsGetNextProcess(v9, v5, v6, v7);
      v8 = NextProcess;
      if ( !NextProcess )
        break;
      if ( NextProcess == (LIST_ENTRY *)Thread )
      {
        KiStackAttachProcess(Thread, 0, (__int64)&v16);
        goto LABEL_12;
      }
      v9 = NextProcess;
      if ( NextProcess == v1 )
      {
        PsTerminateProcess((struct _KPROCESS *)NextProcess);
        goto LABEL_24;
      }
    }
    v11 = Thread;
    if ( !Thread )
      v11 = (_KPROCESS *)v1;
    DbgPrintEx(0, 0, "EX debug work: Unable to find process %p\n", v11, Blink, v15, v16, v17, v18);
  }
LABEL_12:
  if ( Blink )
  {
    IsKernelAddress = MmIsKernelAddress((unsigned __int64)Blink);
    v13 = MmPrefetchVirtualMemory(IsKernelAddress - 1LL, 1uLL, (__int64)&Blink, v4);
    if ( v13 < 0 )
      DbgPrintEx(0, 0, "EX page in: MmPrefetchVirtualMemory failed, 0x%08x\n", v13);
  }
  if ( v2 )
    EtwWmitraceWorker();
  if ( Thread || v1 || Blink || v2 )
    DbgBreakPointWithStatus(7u);
  if ( v8 )
  {
    KiUnstackDetachProcess((__int64)&v16, 0);
LABEL_24:
    PsQuitNextProcessThread(v8);
  }
}
