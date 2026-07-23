/*
 * XREFs of ExfAcquirePushLockExclusive @ 0x14047EEB0
 * Callers:
 *     <none>
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 */

signed __int64 __fastcall ExfAcquirePushLockExclusive(unsigned __int64 *a1)
{
  return ExfAcquirePushLockExclusiveEx(a1, 0LL, (__int64)a1);
}
