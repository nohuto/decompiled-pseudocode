/*
 * XREFs of ??_EScreenManager@@UEAAPEAXI@Z @ 0x1804FF430
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1ScreenManager@@UEAA@XZ @ 0x1804FF370 (--1ScreenManager@@UEAA@XZ.c)
 */

ScreenManager *__fastcall ScreenManager::`vector deleting destructor'(ScreenManager *this, char a2)
{
  ScreenManager::~ScreenManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x160);
  return this;
}
