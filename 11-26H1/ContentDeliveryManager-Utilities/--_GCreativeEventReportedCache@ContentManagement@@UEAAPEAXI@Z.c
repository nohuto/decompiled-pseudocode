/*
 * XREFs of ??_GCreativeEventReportedCache@ContentManagement@@UEAAPEAXI@Z @ 0x18004E550
 * Callers:
 *     <none>
 * Callees:
 *     ??1CreativeEventReportedCache@ContentManagement@@UEAA@XZ @ 0x18004D090 (--1CreativeEventReportedCache@ContentManagement@@UEAA@XZ.c)
 */

ContentManagement::CreativeEventReportedCache *__fastcall ContentManagement::CreativeEventReportedCache::`scalar deleting destructor'(
        ContentManagement::CreativeEventReportedCache *this,
        char a2)
{
  ContentManagement::CreativeEventReportedCache::~CreativeEventReportedCache(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
