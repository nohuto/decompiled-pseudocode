/*
 * XREFs of PopEtInternerUnlock @ 0x140AFA680
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x14021B1A8 (PopReleaseRwLock.c)
 */

__int64 PopEtInternerUnlock()
{
  return PopReleaseRwLock((struct _KTHREAD *)(PopEtGlobals + 40));
}
