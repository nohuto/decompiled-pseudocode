/*
 * XREFs of BgConsoleGetInterface @ 0x140C4FCF4
 * Callers:
 *     BgkNotifyDisplayOwnershipChange @ 0x1404633C0 (BgkNotifyDisplayOwnershipChange.c)
 *     BgkInitialize @ 0x140D13854 (BgkInitialize.c)
 *     BcpDisplayEarlyBugCheckScreen @ 0x140D144DC (BcpDisplayEarlyBugCheckScreen.c)
 * Callees:
 *     BgpFwAcquireLock @ 0x1404E7E04 (BgpFwAcquireLock.c)
 *     BgpFwReleaseLock @ 0x1404E81BC (BgpFwReleaseLock.c)
 */

__int64 (__fastcall **BgConsoleGetInterface())()
{
  __int64 (__fastcall **v0)(); // rbx
  __int64 (__fastcall **v1)(); // rcx

  v0 = 0LL;
  BgpFwAcquireLock();
  if ( (gLoadedDiffHivesLock.WaitBlockFill6[80] & 1) != 0 )
  {
    v1 = BgpConsoleInterface;
    if ( !gLoadedDiffHivesLock.AffinityVersion )
      v1 = 0LL;
    v0 = v1;
  }
  BgpFwReleaseLock();
  return v0;
}
