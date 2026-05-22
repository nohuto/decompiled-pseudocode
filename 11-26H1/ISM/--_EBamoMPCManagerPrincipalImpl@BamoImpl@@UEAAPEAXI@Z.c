/*
 * XREFs of ??_EBamoMPCManagerPrincipalImpl@BamoImpl@@UEAAPEAXI@Z @ 0x1800B6130
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009ADC0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1BamoMPCManagerPrincipalImpl@BamoImpl@@UEAA@XZ @ 0x1800B5E7C (--1BamoMPCManagerPrincipalImpl@BamoImpl@@UEAA@XZ.c)
 */

BamoImpl::BamoMPCManagerPrincipalImpl *__fastcall BamoImpl::BamoMPCManagerPrincipalImpl::`vector deleting destructor'(
        BamoImpl::BamoMPCManagerPrincipalImpl *this,
        char a2)
{
  BamoImpl::BamoMPCManagerPrincipalImpl::~BamoMPCManagerPrincipalImpl(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x30);
  return this;
}
