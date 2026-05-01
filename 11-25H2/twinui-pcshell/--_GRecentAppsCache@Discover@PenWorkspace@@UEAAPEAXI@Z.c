/*
 * XREFs of ??_GRecentAppsCache@Discover@PenWorkspace@@UEAAPEAXI@Z @ 0x1803DEC40
 * Callers:
 *     <none>
 * Callees:
 *     ??1RecentAppsCache@Discover@PenWorkspace@@UEAA@XZ @ 0x1801B0CF0 (--1RecentAppsCache@Discover@PenWorkspace@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

PenWorkspace::Discover::RecentAppsCache *__fastcall PenWorkspace::Discover::RecentAppsCache::`scalar deleting destructor'(
        PenWorkspace::Discover::RecentAppsCache *this,
        char a2)
{
  PenWorkspace::Discover::RecentAppsCache::~RecentAppsCache(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0xE8);
  return this;
}
