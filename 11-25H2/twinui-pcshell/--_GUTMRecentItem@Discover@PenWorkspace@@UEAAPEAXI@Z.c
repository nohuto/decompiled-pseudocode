/*
 * XREFs of ??_GUTMRecentItem@Discover@PenWorkspace@@UEAAPEAXI@Z @ 0x1803E2190
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1UTMRecentItem@Discover@PenWorkspace@@UEAA@XZ @ 0x1803E20E0 (--1UTMRecentItem@Discover@PenWorkspace@@UEAA@XZ.c)
 */

PenWorkspace::Discover::UTMRecentItem *__fastcall PenWorkspace::Discover::UTMRecentItem::`scalar deleting destructor'(
        PenWorkspace::Discover::UTMRecentItem *this,
        char a2)
{
  PenWorkspace::Discover::UTMRecentItem::~UTMRecentItem(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x40);
  return this;
}
