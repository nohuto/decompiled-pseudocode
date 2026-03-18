/*
 * XREFs of UsbhAssertBusLock @ 0x140038DE4
 * Callers:
 *     UsbhDropDevice @ 0x140011F44 (UsbhDropDevice.c)
 *     UsbhCancelEnumeration @ 0x140035C04 (UsbhCancelEnumeration.c)
 *     UsbhHardErrorReset1BadEnable @ 0x140057DE0 (UsbhHardErrorReset1BadEnable.c)
 *     UsbhReset1Debounce @ 0x140058510 (UsbhReset1Debounce.c)
 *     UsbhReset1DebounceError @ 0x140058690 (UsbhReset1DebounceError.c)
 *     UsbhReset1DropDeviceTimeout @ 0x140058770 (UsbhReset1DropDeviceTimeout.c)
 *     UsbhReset1Timeout @ 0x1400588F0 (UsbhReset1Timeout.c)
 *     UsbhReset1TimeoutBadEnable @ 0x140058B00 (UsbhReset1TimeoutBadEnable.c)
 *     UsbhReset2CycleDevice @ 0x140058C00 (UsbhReset2CycleDevice.c)
 *     UsbhReset2DropDevice @ 0x140058C70 (UsbhReset2DropDevice.c)
 *     UsbhReset2DropDeviceTimeout @ 0x140058D60 (UsbhReset2DropDeviceTimeout.c)
 *     UsbhReset2Timeout @ 0x140058EE0 (UsbhReset2Timeout.c)
 *     UsbhReset2TimeoutBadEnable @ 0x1400590C0 (UsbhReset2TimeoutBadEnable.c)
 * Callees:
 *     FdoExt @ 0x140009560 (FdoExt.c)
 */

void __fastcall UsbhAssertBusLock(__int64 a1)
{
  KSPIN_LOCK *v1; // rbx
  KIRQL v2; // al

  v1 = (KSPIN_LOCK *)(FdoExt(a1) + 766);
  v2 = KeAcquireSpinLockRaiseToDpc(v1);
  KeReleaseSpinLock(v1, v2);
}
