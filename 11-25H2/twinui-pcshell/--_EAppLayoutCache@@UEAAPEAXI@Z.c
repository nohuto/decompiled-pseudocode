/*
 * XREFs of ??_EAppLayoutCache@@UEAAPEAXI@Z @ 0x18021A43C
 * Callers:
 *     ??_EAppLayoutCache@@WCI@EAAPEAXI@Z @ 0x1804FEF50 (--_EAppLayoutCache@@WCI@EAAPEAXI@Z.c)
 * Callees:
 *     ??1AppLayoutCache@@UEAA@XZ @ 0x18021A478 (--1AppLayoutCache@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

AppLayoutCache *__fastcall AppLayoutCache::`vector deleting destructor'(AppLayoutCache *this, char a2)
{
  AppLayoutCache::~AppLayoutCache(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0xB0);
  return this;
}
