/*
 * XREFs of ??_GBamoSimpleHapticsControllerPrincipal@@MEAAPEAXI@Z @ 0x180188970
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009ADC0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1BamoSimpleHapticsControllerPrincipalImpl@BamoImpl@@UEAA@XZ @ 0x180188804 (--1BamoSimpleHapticsControllerPrincipalImpl@BamoImpl@@UEAA@XZ.c)
 */

BamoSimpleHapticsControllerPrincipal *__fastcall BamoSimpleHapticsControllerPrincipal::`scalar deleting destructor'(
        BamoSimpleHapticsControllerPrincipal *this,
        char a2)
{
  BamoImpl::BamoSimpleHapticsControllerPrincipalImpl::~BamoSimpleHapticsControllerPrincipalImpl((BamoSimpleHapticsControllerPrincipal *)((char *)this + 16));
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x58);
  return this;
}
