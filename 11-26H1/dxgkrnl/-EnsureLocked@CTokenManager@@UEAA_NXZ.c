/*
 * XREFs of ?EnsureLocked@CTokenManager@@UEAA_NXZ @ 0x140062820
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall CTokenManager::EnsureLocked(struct _KTHREAD **this)
{
  if ( KeGetCurrentThread() == this[4] || KeGetCurrentThread() == this[12] )
    return 0;
  ExAcquirePushLockExclusiveEx(this + 11, 0LL);
  this[12] = KeGetCurrentThread();
  return 1;
}
