/*
 * XREFs of ??_EAppSizeConstraintsCache@@UEAAPEAXI@Z @ 0x1801B2630
 * Callers:
 *     <none>
 * Callees:
 *     ??1AppSizeConstraintsCache@@UEAA@XZ @ 0x1801B266C (--1AppSizeConstraintsCache@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

AppSizeConstraintsCache *__fastcall AppSizeConstraintsCache::`vector deleting destructor'(
        AppSizeConstraintsCache *this,
        char a2)
{
  AppSizeConstraintsCache::~AppSizeConstraintsCache(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x30);
  return this;
}
