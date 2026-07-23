/*
 * XREFs of PopFxDeviceWork @ 0x1404FEE20
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopFxDeliverDevicePowerRequired @ 0x1403BDBD0 (PopFxDeliverDevicePowerRequired.c)
 *     PopFxDereferenceDevice @ 0x1403C00F4 (PopFxDereferenceDevice.c)
 */

LONG __fastcall PopFxDeviceWork(ULONG_PTR BugCheckParameter2)
{
  KSPIN_LOCK *v2; // rsi
  KIRQL v3; // bl

  v2 = (KSPIN_LOCK *)(BugCheckParameter2 + 400);
  do
  {
    v3 = KeAcquireSpinLockRaiseToDpc(v2);
    PopFxDeliverDevicePowerRequired(BugCheckParameter2, 0LL);
    KeReleaseSpinLock(v2, v3);
  }
  while ( _InterlockedExchangeAdd((volatile signed __int32 *)(BugCheckParameter2 + 376), 0xFFFFFFFF) != 1 );
  return PopFxDereferenceDevice(BugCheckParameter2, 4);
}
