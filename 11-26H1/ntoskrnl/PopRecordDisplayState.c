/*
 * XREFs of PopRecordDisplayState @ 0x140A3C308
 * Callers:
 *     PopUpdateConsoleDisplayState @ 0x140A3CD5C (PopUpdateConsoleDisplayState.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14043630C (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140436378 (PopAcquireRwLockExclusive.c)
 *     PopBsdHandleRequest @ 0x1404E5A30 (PopBsdHandleRequest.c)
 */

__int64 __fastcall PopRecordDisplayState(char a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  PopAcquireRwLockExclusive((unsigned __int64 *)&stru_140F12D20.AbWaitObject, a2, a3, a4);
  stru_140E66FF0.SavedApcStateFill[38] = stru_140E66FF0.SavedApcStateFill[38] & 0x3F | ((a1 + 1) << 6);
  PopBsdHandleRequest(1u);
  return PopReleaseRwLock((struct _KTHREAD *)&stru_140F12D20.AbWaitObject);
}
