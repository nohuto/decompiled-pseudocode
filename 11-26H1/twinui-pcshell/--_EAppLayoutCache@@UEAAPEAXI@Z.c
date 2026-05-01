/*
 * XREFs of ??_EAppLayoutCache@@UEAAPEAXI@Z @ 0x180209948
 * Callers:
 *     ??_EAppLayoutCache@@WCI@EAAPEAXI@Z @ 0x180521030 (--_EAppLayoutCache@@WCI@EAAPEAXI@Z.c)
 * Callees:
 *     ??1AppLayoutCache@@UEAA@XZ @ 0x180209984 (--1AppLayoutCache@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

AppLayoutCache *__fastcall AppLayoutCache::`vector deleting destructor'(AppLayoutCache *this, char a2)
{
  AppLayoutCache::~AppLayoutCache(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0xB0);
  return this;
}
