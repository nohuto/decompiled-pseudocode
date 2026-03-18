/*
 * XREFs of ?LockIfNotTokenThread@CTokenManager@@UEAAXXZ @ 0x140061350
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CTokenManager::LockIfNotTokenThread(CTokenManager *this)
{
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)this + 4) )
  {
    ExAcquirePushLockExclusiveEx((char *)this + 88, 0LL);
    *((_QWORD *)this + 12) = KeGetCurrentThread();
  }
}
