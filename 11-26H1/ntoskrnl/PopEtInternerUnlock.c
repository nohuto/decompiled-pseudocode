/*
 * XREFs of PopEtInternerUnlock @ 0x140AF7FE0
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x14043630C (PopReleaseRwLock.c)
 */

__int64 PopEtInternerUnlock()
{
  return PopReleaseRwLock((struct _KTHREAD *)(PopEtGlobals + 40));
}
