/*
 * XREFs of ??_GBamoInputSpacePayloadProxy@@MEAAPEAXI@Z @ 0x180117420
 * Callers:
 *     <none>
 * Callees:
 *     ??1BamoDragManagerClientProxyImpl@BamoImpl@@UEAA@XZ @ 0x180075AA4 (--1BamoDragManagerClientProxyImpl@BamoImpl@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009ADC0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

BamoInputSpacePayloadProxy *__fastcall BamoInputSpacePayloadProxy::`scalar deleting destructor'(
        BamoInputSpacePayloadProxy *this,
        const struct std::nothrow_t *a2)
{
  char v3; // bl

  v3 = (char)a2;
  BamoImpl::BamoDragManagerClientProxyImpl::~BamoDragManagerClientProxyImpl(
    (BamoInputSpacePayloadProxy *)((char *)this + 16),
    a2);
  if ( (v3 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x50);
  return this;
}
