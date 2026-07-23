/*
 * XREFs of ExfAcquirePushLockShared @ 0x14046C0E0
 * Callers:
 *     <none>
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 */

signed __int64 __fastcall ExfAcquirePushLockShared(signed __int64 *a1)
{
  return ExfAcquirePushLockSharedEx(a1, 0, 0LL, (struct _KTHREAD *)a1);
}
