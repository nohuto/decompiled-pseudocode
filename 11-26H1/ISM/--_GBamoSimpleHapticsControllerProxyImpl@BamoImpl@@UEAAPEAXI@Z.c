/*
 * XREFs of ??_GBamoSimpleHapticsControllerProxyImpl@BamoImpl@@UEAAPEAXI@Z @ 0x180117660
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009ADC0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1BamoSimpleHapticsControllerProxyImpl@BamoImpl@@UEAA@XZ @ 0x1801170E0 (--1BamoSimpleHapticsControllerProxyImpl@BamoImpl@@UEAA@XZ.c)
 */

BamoImpl::BamoSimpleHapticsControllerProxyImpl *__fastcall BamoImpl::BamoSimpleHapticsControllerProxyImpl::`scalar deleting destructor'(
        BamoImpl::BamoSimpleHapticsControllerProxyImpl *this,
        char a2)
{
  BamoImpl::BamoSimpleHapticsControllerProxyImpl::~BamoSimpleHapticsControllerProxyImpl(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x40);
  return this;
}
