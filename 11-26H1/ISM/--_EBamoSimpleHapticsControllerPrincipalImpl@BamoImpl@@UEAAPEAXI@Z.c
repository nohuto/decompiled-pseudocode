/*
 * XREFs of ??_EBamoSimpleHapticsControllerPrincipalImpl@BamoImpl@@UEAAPEAXI@Z @ 0x1801889B0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009ADC0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1BamoSimpleHapticsControllerPrincipalImpl@BamoImpl@@UEAA@XZ @ 0x180188804 (--1BamoSimpleHapticsControllerPrincipalImpl@BamoImpl@@UEAA@XZ.c)
 */

BamoImpl::BamoSimpleHapticsControllerPrincipalImpl *__fastcall BamoImpl::BamoSimpleHapticsControllerPrincipalImpl::`vector deleting destructor'(
        BamoImpl::BamoSimpleHapticsControllerPrincipalImpl *this,
        char a2)
{
  BamoImpl::BamoSimpleHapticsControllerPrincipalImpl::~BamoSimpleHapticsControllerPrincipalImpl(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x48);
  return this;
}
