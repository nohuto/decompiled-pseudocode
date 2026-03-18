/*
 * XREFs of ?Initialize@Semaphore@Gre@@QEAA_NXZ @ 0x140134EC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall Gre::Semaphore::Initialize(struct _KSEMAPHORE *this)
{
  KeInitializeSemaphore(this, 0, 0x7FFFFFFF);
  return 1;
}
