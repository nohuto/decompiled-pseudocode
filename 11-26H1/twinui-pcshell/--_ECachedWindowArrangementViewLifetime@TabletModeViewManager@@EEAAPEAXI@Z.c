/*
 * XREFs of ??_ECachedWindowArrangementViewLifetime@TabletModeViewManager@@EEAAPEAXI@Z @ 0x18051EF30
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CachedWindowArrangementViewLifetime@TabletModeViewManager@@EEAA@XZ @ 0x18051ED78 (--1CachedWindowArrangementViewLifetime@TabletModeViewManager@@EEAA@XZ.c)
 */

TabletModeViewManager::CachedWindowArrangementViewLifetime *__fastcall TabletModeViewManager::CachedWindowArrangementViewLifetime::`vector deleting destructor'(
        TabletModeViewManager::CachedWindowArrangementViewLifetime *this,
        char a2)
{
  TabletModeViewManager::CachedWindowArrangementViewLifetime::~CachedWindowArrangementViewLifetime(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x20);
  return this;
}
