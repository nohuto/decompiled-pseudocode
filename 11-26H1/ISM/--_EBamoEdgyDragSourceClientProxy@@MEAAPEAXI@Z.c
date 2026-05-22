/*
 * XREFs of ??_EBamoEdgyDragSourceClientProxy@@MEAAPEAXI@Z @ 0x180117320
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009ADC0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1BamoEdgyDragSourceClientProxyImpl@BamoImpl@@UEAA@XZ @ 0x180116F90 (--1BamoEdgyDragSourceClientProxyImpl@BamoImpl@@UEAA@XZ.c)
 */

BamoEdgyDragSourceClientProxy *__fastcall BamoEdgyDragSourceClientProxy::`vector deleting destructor'(
        BamoEdgyDragSourceClientProxy *this,
        const struct std::nothrow_t *a2)
{
  char v3; // bl

  v3 = (char)a2;
  BamoImpl::BamoEdgyDragSourceClientProxyImpl::~BamoEdgyDragSourceClientProxyImpl(
    (BamoEdgyDragSourceClientProxy *)((char *)this + 16),
    a2);
  if ( (v3 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x60);
  return this;
}
