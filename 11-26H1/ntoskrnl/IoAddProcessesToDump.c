/*
 * XREFs of IoAddProcessesToDump @ 0x1405D7170
 * Callers:
 *     IopLiveDumpAddProcesses @ 0x1405CEF10 (IopLiveDumpAddProcesses.c)
 *     IopAddLiveDumpPagesToPartialKernelDump @ 0x1405D73D0 (IopAddLiveDumpPagesToPartialKernelDump.c)
 * Callees:
 *     MiAddRangeToCrashDump @ 0x1406FAE2C (MiAddRangeToCrashDump.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IoAddProcessesToDump(__int64 a1, __int64 a2)
{
  struct _KTHREAD *Flink; // rbx
  unsigned int v5; // edi
  int v6; // eax

  Flink = (struct _KTHREAD *)PsAltSystemCallRegistrationLock.WaitBlock[2].WaitListEntry.Flink;
  v5 = 0;
  while ( Flink != (struct _KTHREAD *)&PsAltSystemCallRegistrationLock.WaitBlockFill11[96] )
  {
    v6 = MiAddRangeToCrashDump(a1, &Flink[-1].SuspendEvent.Header.WaitListHead, 2112LL, 0LL);
    if ( v6 < 0
      || (v6 = MiAddRangeToCrashDump(a1, Flink->Timer.Header.WaitListHead.Flink, 2008LL, 0LL), v6 < 0)
      || a2 && (v6 = guard_dispatch_icall_no_overrides(a1, &Flink[-1].SuspendEvent.Header.WaitListHead), v6 < 0) )
    {
      if ( v6 == -1073741789 )
        return 0LL;
      v5 = v6;
    }
    Flink = *(struct _KTHREAD **)&Flink->Header.Lock;
  }
  return v5;
}
