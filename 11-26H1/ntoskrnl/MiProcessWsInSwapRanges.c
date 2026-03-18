/*
 * XREFs of MiProcessWsInSwapRanges @ 0x1404ACA44
 * Callers:
 *     MiProcessWsInSwapSupport @ 0x1404AC94C (MiProcessWsInSwapSupport.c)
 * Callees:
 *     KeLeaveGuardedRegion @ 0x14027DB10 (KeLeaveGuardedRegion.c)
 *     MiReleaseOutSwapReservations @ 0x1403A062C (MiReleaseOutSwapReservations.c)
 *     MmPrefetchVirtualMemory @ 0x140A4EAA4 (MmPrefetchVirtualMemory.c)
 */

void __fastcall MiProcessWsInSwapRanges(ULONG_PTR *a1, unsigned __int64 a2, char a3)
{
  int v6; // edi
  struct _KTHREAD *CurrentThread; // r8

  v6 = a3 & 2;
  if ( (a3 & 2) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
  }
  MmPrefetchVirtualMemory(-(__int64)(*a1 < 0xFFFF800000000000uLL));
  if ( v6 )
    KeLeaveGuardedRegion();
  if ( (a3 & 1) == 0 )
    MiReleaseOutSwapReservations(a1, a2);
}
