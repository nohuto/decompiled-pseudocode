/*
 * XREFs of ??_GBamoEdgyDragSourceClientProxyImpl@BamoImpl@@UEAAPEAXI@Z @ 0x180117360
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009ADC0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1BamoEdgyDragSourceClientProxyImpl@BamoImpl@@UEAA@XZ @ 0x180116F90 (--1BamoEdgyDragSourceClientProxyImpl@BamoImpl@@UEAA@XZ.c)
 */

BamoImpl::BamoEdgyDragSourceClientProxyImpl *__fastcall BamoImpl::BamoEdgyDragSourceClientProxyImpl::`scalar deleting destructor'(
        BamoImpl::BamoEdgyDragSourceClientProxyImpl *this,
        const struct std::nothrow_t *a2)
{
  char v2; // bl

  v2 = (char)a2;
  BamoImpl::BamoEdgyDragSourceClientProxyImpl::~BamoEdgyDragSourceClientProxyImpl(this, a2);
  if ( (v2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x50);
  return this;
}
