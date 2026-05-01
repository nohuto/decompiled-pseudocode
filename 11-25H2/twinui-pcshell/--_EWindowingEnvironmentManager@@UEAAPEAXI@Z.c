/*
 * XREFs of ??_EWindowingEnvironmentManager@@UEAAPEAXI@Z @ 0x18043D348
 * Callers:
 *     ??_EWindowingEnvironmentManager@@WEI@EAAPEAXI@Z @ 0x18043D2F0 (--_EWindowingEnvironmentManager@@WEI@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1WindowingEnvironmentManager@@UEAA@XZ @ 0x18043D27C (--1WindowingEnvironmentManager@@UEAA@XZ.c)
 */

WindowingEnvironmentManager *__fastcall WindowingEnvironmentManager::`vector deleting destructor'(
        WindowingEnvironmentManager *this,
        char a2)
{
  WindowingEnvironmentManager::~WindowingEnvironmentManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0xD0);
  return this;
}
