/*
 * XREFs of ??_GBamoEdgyNotificationSourceClientProxy@@MEAAPEAXI@Z @ 0x1801173A0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009ADC0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1BamoEdgyNotificationSourceClientProxyImpl@BamoImpl@@UEAA@XZ @ 0x180116FCC (--1BamoEdgyNotificationSourceClientProxyImpl@BamoImpl@@UEAA@XZ.c)
 */

BamoEdgyNotificationSourceClientProxy *__fastcall BamoEdgyNotificationSourceClientProxy::`scalar deleting destructor'(
        BamoEdgyNotificationSourceClientProxy *this,
        char a2)
{
  BamoImpl::BamoEdgyNotificationSourceClientProxyImpl::~BamoEdgyNotificationSourceClientProxyImpl((BamoEdgyNotificationSourceClientProxy *)((char *)this + 16));
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x40);
  return this;
}
