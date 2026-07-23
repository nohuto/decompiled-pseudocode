/*
 * XREFs of BgConsoleDestroyInterface @ 0x140C55C94
 * Callers:
 *     BgkNotifyDisplayOwnershipChange @ 0x14045C380 (BgkNotifyDisplayOwnershipChange.c)
 *     BgkDestroy @ 0x140C55454 (BgkDestroy.c)
 *     BcpDisplayEarlyBugCheckScreen @ 0x140D1A6A4 (BcpDisplayEarlyBugCheckScreen.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x140357BA8 (BgpFwFreeMemory.c)
 *     BgpFwAcquireLock @ 0x1404E11C4 (BgpFwAcquireLock.c)
 *     BgpFwReleaseLock @ 0x1404E157C (BgpFwReleaseLock.c)
 *     BgpDisplayCharacterDestroyContext @ 0x140C55B88 (BgpDisplayCharacterDestroyContext.c)
 */

__int64 __fastcall BgConsoleDestroyInterface(__int64 (__fastcall **a1)())
{
  PVOID NormalContext; // rcx

  BgpFwAcquireLock();
  if ( a1 == BgpConsoleInterface )
  {
    NormalContext = WheapPfaLock.SchedulerApc.NormalContext;
    if ( WheapPfaLock.SchedulerApc.NormalContext )
    {
      if ( *((_QWORD *)WheapPfaLock.SchedulerApc.NormalContext + 5) )
      {
        BgpDisplayCharacterDestroyContext(*((_QWORD *)WheapPfaLock.SchedulerApc.NormalContext + 5));
        NormalContext = WheapPfaLock.SchedulerApc.NormalContext;
      }
      BgpFwFreeMemory((__int64)NormalContext);
      WheapPfaLock.SchedulerApc.NormalContext = 0LL;
    }
  }
  return BgpFwReleaseLock();
}
