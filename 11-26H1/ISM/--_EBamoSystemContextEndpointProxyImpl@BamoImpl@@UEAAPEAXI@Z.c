/*
 * XREFs of ??_EBamoSystemContextEndpointProxyImpl@BamoImpl@@UEAAPEAXI@Z @ 0x1801174E0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009ADC0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1BamoSystemContextEndpointProxyImpl@BamoImpl@@UEAA@XZ @ 0x180116FF4 (--1BamoSystemContextEndpointProxyImpl@BamoImpl@@UEAA@XZ.c)
 */

BamoImpl::BamoSystemContextEndpointProxyImpl *__fastcall BamoImpl::BamoSystemContextEndpointProxyImpl::`vector deleting destructor'(
        BamoImpl::BamoSystemContextEndpointProxyImpl *this,
        char a2)
{
  BamoImpl::BamoSystemContextEndpointProxyImpl::~BamoSystemContextEndpointProxyImpl(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x30);
  return this;
}
