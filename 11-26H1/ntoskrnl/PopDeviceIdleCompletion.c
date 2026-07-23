/*
 * XREFs of PopDeviceIdleCompletion @ 0x140606A30
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 */

void PopDeviceIdleCompletion()
{
  KIRQL v0; // al
  bool v1; // zf
  KIRQL v2; // bl

  v0 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&PpmIdlePolicyLock.WaitBlockFill11[160]);
  v1 = dword_140E676D0-- == 1;
  v2 = v0;
  if ( v1 && qword_140E676C8 )
  {
    KeSetEvent(qword_140E676C8, 0, 0);
    qword_140E676C8 = 0LL;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)&PpmIdlePolicyLock.WaitBlockFill11[160], v2);
}
