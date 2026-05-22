/*
 * XREFs of ??_GBamoSystemContextEndpointStubImpl@BamoImpl@@UEAAPEAXI@Z @ 0x1800A98F0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009ADC0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1BamoSystemContextEndpointStubImpl@BamoImpl@@UEAA@XZ @ 0x1800A9778 (--1BamoSystemContextEndpointStubImpl@BamoImpl@@UEAA@XZ.c)
 */

BamoImpl::BamoSystemContextEndpointStubImpl *__fastcall BamoImpl::BamoSystemContextEndpointStubImpl::`scalar deleting destructor'(
        BamoImpl::BamoSystemContextEndpointStubImpl *this,
        char a2)
{
  BamoImpl::BamoSystemContextEndpointStubImpl::~BamoSystemContextEndpointStubImpl(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x50);
  return this;
}
