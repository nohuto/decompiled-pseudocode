/*
 * XREFs of UsbhAssertBusLock @ 0x1400244C8
 * Callers:
 *     UsbhDropDevice @ 0x140023AE8 (UsbhDropDevice.c)
 *     UsbhCancelEnumeration @ 0x140033B08 (UsbhCancelEnumeration.c)
 *     UsbhHardErrorReset1BadEnable @ 0x140058340 (UsbhHardErrorReset1BadEnable.c)
 *     UsbhReset1Debounce @ 0x140058A70 (UsbhReset1Debounce.c)
 *     UsbhReset1DebounceError @ 0x140058BF0 (UsbhReset1DebounceError.c)
 *     UsbhReset1DropDeviceTimeout @ 0x140058CD0 (UsbhReset1DropDeviceTimeout.c)
 *     UsbhReset1Timeout @ 0x140058E50 (UsbhReset1Timeout.c)
 *     UsbhReset1TimeoutBadEnable @ 0x140059070 (UsbhReset1TimeoutBadEnable.c)
 *     UsbhReset2CycleDevice @ 0x140059170 (UsbhReset2CycleDevice.c)
 *     UsbhReset2DropDevice @ 0x1400591E0 (UsbhReset2DropDevice.c)
 *     UsbhReset2DropDeviceTimeout @ 0x1400592D0 (UsbhReset2DropDeviceTimeout.c)
 *     UsbhReset2Timeout @ 0x140059450 (UsbhReset2Timeout.c)
 *     UsbhReset2TimeoutBadEnable @ 0x140059630 (UsbhReset2TimeoutBadEnable.c)
 * Callees:
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 */

void __fastcall UsbhAssertBusLock(__int64 a1)
{
  KSPIN_LOCK *v1; // rbx
  KIRQL v2; // al

  v1 = (KSPIN_LOCK *)(FdoExt(a1) + 766);
  v2 = KeAcquireSpinLockRaiseToDpc(v1);
  KeReleaseSpinLock(v1, v2);
}
