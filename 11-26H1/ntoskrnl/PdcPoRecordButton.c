/*
 * XREFs of PdcPoRecordButton @ 0x1407759D0
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x14021B1A8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140425310 (PopAcquireRwLockExclusive.c)
 *     PopBsdHandleRequest @ 0x1404DEFD0 (PopBsdHandleRequest.c)
 */

__int64 __fastcall PdcPoRecordButton(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  void *v4; // rbx

  v4 = (void *)MEMORY[0xFFFFF78000000014];
  PopAcquireRwLockExclusive((unsigned __int64 *)&PopBsdUpdateLock, a2, a3, a4);
  stru_140E67200.AbWaitObject = v4;
  PopBsdHandleRequest(1u);
  return PopReleaseRwLock((struct _KTHREAD *)&PopBsdUpdateLock);
}
