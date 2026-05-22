/*
 * XREFs of ??_EBamoPenDevicePrincipal@@MEAAPEAXI@Z @ 0x180194BD0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009ADC0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1BamoPenDevicePrincipalImpl@BamoImpl@@UEAA@XZ @ 0x180194B44 (--1BamoPenDevicePrincipalImpl@BamoImpl@@UEAA@XZ.c)
 */

BamoPenDevicePrincipal *__fastcall BamoPenDevicePrincipal::`vector deleting destructor'(
        BamoPenDevicePrincipal *this,
        char a2)
{
  BamoImpl::BamoPenDevicePrincipalImpl::~BamoPenDevicePrincipalImpl((BamoPenDevicePrincipal *)((char *)this + 16));
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x50);
  return this;
}
