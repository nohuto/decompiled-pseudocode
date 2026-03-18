/*
 * XREFs of IoAddProcessesToDump @ 0x1405D4980
 * Callers:
 *     IopLiveDumpAddProcesses @ 0x1405CC700 (IopLiveDumpAddProcesses.c)
 *     IopAddLiveDumpPagesToPartialKernelDump @ 0x1405D4BE0 (IopAddLiveDumpPagesToPartialKernelDump.c)
 * Callees:
 *     MiAddRangeToCrashDump @ 0x1406F61BC (MiAddRangeToCrashDump.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IoAddProcessesToDump(__int64 a1, __int64 a2)
{
  struct _KTHREAD *Thread; // rbx
  unsigned int v5; // edi
  int v6; // eax

  Thread = PsAltSystemCallRegistrationLock.WaitBlock[0].Thread;
  v5 = 0;
  while ( Thread != (struct _KTHREAD *)&PsAltSystemCallRegistrationLock.WaitBlockFill11[24] )
  {
    v6 = MiAddRangeToCrashDump(a1, &Thread[-1].SuspendEvent.Header.WaitListHead, 2112LL, 0LL);
    if ( v6 < 0
      || (v6 = MiAddRangeToCrashDump(a1, Thread->Timer.Header.WaitListHead.Flink, 2000LL, 0LL), v6 < 0)
      || a2 && (v6 = guard_dispatch_icall_no_overrides(a1, &Thread[-1].SuspendEvent.Header.WaitListHead), v6 < 0) )
    {
      if ( v6 == -1073741789 )
        return 0LL;
      v5 = v6;
    }
    Thread = *(struct _KTHREAD **)&Thread->Header.Lock;
  }
  return v5;
}
