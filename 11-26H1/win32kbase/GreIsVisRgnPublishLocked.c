/*
 * XREFs of GreIsVisRgnPublishLocked @ 0x1401F08E0
 * Callers:
 *     <none>
 * Callees:
 *     ?GrepIsLockOwnedExclusiveByCurrentThread@@YA_NQEAUHSEMAPHORE__@@@Z @ 0x140162268 (-GrepIsLockOwnedExclusiveByCurrentThread@@YA_NQEAUHSEMAPHORE__@@@Z.c)
 */

_BOOL8 __fastcall GreIsVisRgnPublishLocked(__int64 a1)
{
  __int64 SessionState; // rax

  SessionState = W32GetSessionState(a1);
  return GrepIsLockOwnedExclusiveByCurrentThread((struct _ERESOURCE *)(**(_QWORD **)(SessionState + 88) + 1248LL));
}
