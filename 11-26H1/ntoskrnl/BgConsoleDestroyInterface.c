/*
 * XREFs of BgConsoleDestroyInterface @ 0x140C4FC94
 * Callers:
 *     BgkNotifyDisplayOwnershipChange @ 0x1404633C0 (BgkNotifyDisplayOwnershipChange.c)
 *     BgkDestroy @ 0x140C4F454 (BgkDestroy.c)
 *     BcpDisplayEarlyBugCheckScreen @ 0x140D144DC (BcpDisplayEarlyBugCheckScreen.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x140355E00 (BgpFwFreeMemory.c)
 *     BgpFwAcquireLock @ 0x1404E7E04 (BgpFwAcquireLock.c)
 *     BgpFwReleaseLock @ 0x1404E81BC (BgpFwReleaseLock.c)
 *     BgpDisplayCharacterDestroyContext @ 0x140C4FB88 (BgpDisplayCharacterDestroyContext.c)
 */

__int64 __fastcall BgConsoleDestroyInterface(__int64 (__fastcall **a1)())
{
  struct _LIST_ENTRY *Flink; // rcx

  BgpFwAcquireLock();
  if ( a1 == BgpConsoleInterface )
  {
    Flink = WheapPfaLock.SavedApcState.ApcListHead[1].Flink;
    if ( WheapPfaLock.SavedApcState.ApcListHead[1].Flink )
    {
      if ( WheapPfaLock.SavedApcState.ApcListHead[1].Flink[2].Blink )
      {
        BgpDisplayCharacterDestroyContext((__int64)WheapPfaLock.SavedApcState.ApcListHead[1].Flink[2].Blink);
        Flink = WheapPfaLock.SavedApcState.ApcListHead[1].Flink;
      }
      BgpFwFreeMemory((__int64)Flink);
      WheapPfaLock.SavedApcState.ApcListHead[1].Flink = 0LL;
    }
  }
  return BgpFwReleaseLock();
}
