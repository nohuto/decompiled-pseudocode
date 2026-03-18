/*
 * XREFs of ?OnInteractiveControlDeviceAttached@@YAJPEAURawInputManagerDeviceObject@@@Z @ 0x1402EF380
 * Callers:
 *     EditionDevicePnpNotification @ 0x14016F940 (EditionDevicePnpNotification.c)
 *     Win32kRIMDevChangeCallback @ 0x140222790 (Win32kRIMDevChangeCallback.c)
 * Callees:
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x14013DB10 (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 *     ?OnDeviceAttach@InteractiveControlManager@@QEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1402F19B0 (-OnDeviceAttach@InteractiveControlManager@@QEAAJPEAURawInputManagerDeviceObject@@@Z.c)
 */

__int64 __fastcall OnInteractiveControlDeviceAttached(struct RawInputManagerDeviceObject *a1, __int64 a2)
{
  InteractiveControlManager *v3; // rax

  v3 = InteractiveControlManager::Instance((__int64)a1, a2);
  return InteractiveControlManager::OnDeviceAttach(v3, a1);
}
