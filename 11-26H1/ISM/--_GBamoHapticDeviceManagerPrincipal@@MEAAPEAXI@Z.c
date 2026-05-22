/*
 * XREFs of ??_GBamoHapticDeviceManagerPrincipal@@MEAAPEAXI@Z @ 0x18018DC00
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009ADC0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1BamoHapticDeviceManagerPrincipalImpl@BamoImpl@@UEAA@XZ @ 0x18018DB7C (--1BamoHapticDeviceManagerPrincipalImpl@BamoImpl@@UEAA@XZ.c)
 */

BamoHapticDeviceManagerPrincipal *__fastcall BamoHapticDeviceManagerPrincipal::`scalar deleting destructor'(
        BamoHapticDeviceManagerPrincipal *this,
        char a2)
{
  BamoImpl::BamoHapticDeviceManagerPrincipalImpl::~BamoHapticDeviceManagerPrincipalImpl((BamoHapticDeviceManagerPrincipal *)((char *)this + 16));
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x50);
  return this;
}
