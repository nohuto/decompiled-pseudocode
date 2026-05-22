/*
 * XREFs of ??_EBamoSystemContextEndpointStub@@MEAAPEAXI@Z @ 0x1800A98B0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009ADC0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1BamoSystemContextEndpointStubImpl@BamoImpl@@UEAA@XZ @ 0x1800A9778 (--1BamoSystemContextEndpointStubImpl@BamoImpl@@UEAA@XZ.c)
 */

BamoSystemContextEndpointStub *__fastcall BamoSystemContextEndpointStub::`vector deleting destructor'(
        BamoSystemContextEndpointStub *this,
        char a2)
{
  BamoImpl::BamoSystemContextEndpointStubImpl::~BamoSystemContextEndpointStubImpl((BamoSystemContextEndpointStub *)((char *)this + 16));
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x60);
  return this;
}
