/*
 * XREFs of ?Release@Semaphore@Gre@@QEAAXH@Z @ 0x140152170
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall Gre::Semaphore::Release(struct _KSEMAPHORE *this, LONG a2)
{
  KeReleaseSemaphore(this, 0, a2, 0);
}
