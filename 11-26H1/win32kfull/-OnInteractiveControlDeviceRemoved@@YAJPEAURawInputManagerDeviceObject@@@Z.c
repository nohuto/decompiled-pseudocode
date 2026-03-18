/*
 * XREFs of ?OnInteractiveControlDeviceRemoved@@YAJPEAURawInputManagerDeviceObject@@@Z @ 0x1402EF3A8
 * Callers:
 *     EditionDevicePnpNotification @ 0x14016F940 (EditionDevicePnpNotification.c)
 *     Win32kRIMDevChangeCallback @ 0x140222790 (Win32kRIMDevChangeCallback.c)
 * Callees:
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x14013DB10 (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 *     ?OnDeviceRemoval@InteractiveControlManager@@QEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1402F1C44 (-OnDeviceRemoval@InteractiveControlManager@@QEAAJPEAURawInputManagerDeviceObject@@@Z.c)
 */

__int64 __fastcall OnInteractiveControlDeviceRemoved(struct RawInputManagerDeviceObject *a1, __int64 a2)
{
  InteractiveControlManager *v3; // rax

  v3 = InteractiveControlManager::Instance((__int64)a1, a2);
  return InteractiveControlManager::OnDeviceRemoval(v3, a1);
}
