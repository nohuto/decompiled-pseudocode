/*
 * XREFs of ??_GSimpleHapticsController@@QEAAPEAXI@Z @ 0x1402ECEFC
 * Callers:
 *     ?Deinitialize@InteractiveControlDevice@@QEAAXXZ @ 0x1402ED240 (-Deinitialize@InteractiveControlDevice@@QEAAXXZ.c)
 *     ?Initialize@InteractiveControlDevice@@QEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1402ED638 (-Initialize@InteractiveControlDevice@@QEAAJPEAURawInputManagerDeviceObject@@@Z.c)
 * Callees:
 *     ?DeInitialize@SimpleHapticsController@@QEAAJXZ @ 0x1402F0754 (-DeInitialize@SimpleHapticsController@@QEAAJXZ.c)
 */

SimpleHapticsController *__fastcall SimpleHapticsController::`scalar deleting destructor'(
        SimpleHapticsController *this)
{
  SimpleHapticsController::DeInitialize(this);
  Win32FreePool(this);
  return this;
}
