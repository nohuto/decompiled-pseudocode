/*
 * XREFs of PopBsdFlush @ 0x140B00AD4
 * Callers:
 *     PopBsdHandleRequest @ 0x1404E5A30 (PopBsdHandleRequest.c)
 *     PopBsdFlushWorker @ 0x140B00A40 (PopBsdFlushWorker.c)
 *     PopBsdUpdateWorker @ 0x140B00A80 (PopBsdUpdateWorker.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140278560 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x1402DE9C0 (KeSetEvent.c)
 *     PopWriteBsdPoInfo @ 0x140435F08 (PopWriteBsdPoInfo.c)
 *     PopReleaseRwLock @ 0x14043630C (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140436378 (PopAcquireRwLockExclusive.c)
 */

LONG __fastcall PopBsdFlush(char a1)
{
  __int64 v3; // rdx
  __int64 v4; // r8
  struct _KLOCK_ENTRIES *v5; // r9
  LARGE_INTEGER Timeout; // [rsp+48h] [rbp+10h] BYREF

  Timeout.QuadPart = 0LL;
  if ( !HIDWORD(stru_140F12D20.KernelWaitTime)
    || KeWaitForSingleObject(&stru_140F12D20.KernelWaitTime, Executive, 0, 0, &Timeout) < 0 )
  {
    PopReleaseRwLock((struct _KTHREAD *)&stru_140F12D20.AbWaitObject);
    KeWaitForSingleObject(&stru_140F12D20.KernelWaitTime, Executive, 0, 0, 0LL);
    PopAcquireRwLockExclusive((unsigned __int64 *)&stru_140F12D20.AbWaitObject, v3, v4, v5);
  }
  if ( (a1 & 1) != 0 )
    PopWriteBsdPoInfo(7u);
  if ( (a1 & 2) != 0 )
    PopWriteBsdPoInfo(0x10u);
  if ( (a1 & 4) != 0 )
    PopWriteBsdPoInfo(0xEu);
  return KeSetEvent((PRKEVENT)&stru_140F12D20.KernelWaitTime, 0, 0);
}
