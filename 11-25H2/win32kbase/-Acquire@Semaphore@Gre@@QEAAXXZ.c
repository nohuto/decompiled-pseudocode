/*
 * XREFs of ?Acquire@Semaphore@Gre@@QEAAXXZ @ 0x1400EE750
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall Gre::Semaphore::Acquire(Gre::Semaphore *this)
{
  KeWaitForSingleObject(this, UserRequest, 0, 0, 0LL);
}
