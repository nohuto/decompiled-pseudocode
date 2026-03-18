/*
 * XREFs of ?Acquire@Semaphore@Gre@@QEAAXXZ @ 0x14012DDA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall Gre::Semaphore::Acquire(Gre::Semaphore *this)
{
  KeWaitForSingleObject(this, UserRequest, 0, 0, 0LL);
}
