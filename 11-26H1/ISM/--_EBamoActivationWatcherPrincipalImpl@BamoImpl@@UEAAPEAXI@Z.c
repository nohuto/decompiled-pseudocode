/*
 * XREFs of ??_EBamoActivationWatcherPrincipalImpl@BamoImpl@@UEAAPEAXI@Z @ 0x1800AEEE0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009ADC0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1BamoActivationWatcherPrincipalImpl@BamoImpl@@UEAA@XZ @ 0x1800AED9C (--1BamoActivationWatcherPrincipalImpl@BamoImpl@@UEAA@XZ.c)
 */

BamoImpl::BamoActivationWatcherPrincipalImpl *__fastcall BamoImpl::BamoActivationWatcherPrincipalImpl::`vector deleting destructor'(
        BamoImpl::BamoActivationWatcherPrincipalImpl *this,
        char a2)
{
  BamoImpl::BamoActivationWatcherPrincipalImpl::~BamoActivationWatcherPrincipalImpl(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x40);
  return this;
}
