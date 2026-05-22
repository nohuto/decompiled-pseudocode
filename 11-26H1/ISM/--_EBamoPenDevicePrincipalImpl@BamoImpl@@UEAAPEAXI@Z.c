/*
 * XREFs of ??_EBamoPenDevicePrincipalImpl@BamoImpl@@UEAAPEAXI@Z @ 0x180194C10
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009ADC0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1BamoPenDevicePrincipalImpl@BamoImpl@@UEAA@XZ @ 0x180194B44 (--1BamoPenDevicePrincipalImpl@BamoImpl@@UEAA@XZ.c)
 */

BamoImpl::BamoPenDevicePrincipalImpl *__fastcall BamoImpl::BamoPenDevicePrincipalImpl::`vector deleting destructor'(
        BamoImpl::BamoPenDevicePrincipalImpl *this,
        char a2)
{
  BamoImpl::BamoPenDevicePrincipalImpl::~BamoPenDevicePrincipalImpl(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x40);
  return this;
}
