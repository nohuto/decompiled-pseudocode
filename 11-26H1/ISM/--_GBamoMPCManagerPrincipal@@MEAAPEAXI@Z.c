/*
 * XREFs of ??_GBamoMPCManagerPrincipal@@MEAAPEAXI@Z @ 0x1800B60F0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009ADC0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1BamoMPCManagerPrincipalImpl@BamoImpl@@UEAA@XZ @ 0x1800B5E7C (--1BamoMPCManagerPrincipalImpl@BamoImpl@@UEAA@XZ.c)
 */

BamoMPCManagerPrincipal *__fastcall BamoMPCManagerPrincipal::`scalar deleting destructor'(
        BamoMPCManagerPrincipal *this,
        char a2)
{
  BamoImpl::BamoMPCManagerPrincipalImpl::~BamoMPCManagerPrincipalImpl((BamoMPCManagerPrincipal *)((char *)this + 16));
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x40);
  return this;
}
