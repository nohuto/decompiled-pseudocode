/*
 * XREFs of ?OnInteractiveControlDeviceAttached@@YAJPEAURawInputManagerDeviceObject@@@Z @ 0x1402DCB2C
 * Callers:
 *     EditionDevicePnpNotification @ 0x14011D320 (EditionDevicePnpNotification.c)
 *     Win32kRIMDevChangeCallback @ 0x1401F5000 (Win32kRIMDevChangeCallback.c)
 * Callees:
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x14012FC60 (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 *     ?OnDeviceAttach@InteractiveControlManager@@QEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1402E0518 (-OnDeviceAttach@InteractiveControlManager@@QEAAJPEAURawInputManagerDeviceObject@@@Z.c)
 */

__int64 __fastcall OnInteractiveControlDeviceAttached(struct RawInputManagerDeviceObject *a1, __int64 a2)
{
  InteractiveControlManager *v3; // rax

  v3 = InteractiveControlManager::Instance((__int64)a1, a2);
  return InteractiveControlManager::OnDeviceAttach(v3, a1);
}
