/*
 * XREFs of ??1BamoSimpleHapticsControllerPrincipal@@MEAA@XZ @ 0x1801887F4
 * Callers:
 *     _TouchpadHapticDevice::TouchpadHapticDevice_::_1_::dtor$0 @ 0x1801DC271 (_TouchpadHapticDevice--TouchpadHapticDevice_--_1_--dtor$0.c)
 *     _PenHapticDevice::PenHapticDevice_::_1_::dtor$0 @ 0x1801DC2B2 (_PenHapticDevice--PenHapticDevice_--_1_--dtor$0.c)
 *     _MouseHapticDevice::MouseHapticDevice_::_1_::dtor$0 @ 0x1801DC37F (_MouseHapticDevice--MouseHapticDevice_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall BamoSimpleHapticsControllerPrincipal::~BamoSimpleHapticsControllerPrincipal(
        BamoSimpleHapticsControllerPrincipal *this)
{
  BamoImpl::BamoSimpleHapticsControllerPrincipalImpl::~BamoSimpleHapticsControllerPrincipalImpl((BamoSimpleHapticsControllerPrincipal *)((char *)this + 16));
}
