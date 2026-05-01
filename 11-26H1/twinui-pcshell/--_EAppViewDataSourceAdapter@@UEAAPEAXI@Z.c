/*
 * XREFs of ??_EAppViewDataSourceAdapter@@UEAAPEAXI@Z @ 0x1806C21B0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1AppViewDataSourceAdapter@@UEAA@XZ @ 0x1806C2058 (--1AppViewDataSourceAdapter@@UEAA@XZ.c)
 */

AppViewDataSourceAdapter *__fastcall AppViewDataSourceAdapter::`vector deleting destructor'(
        AppViewDataSourceAdapter *this,
        char a2)
{
  AppViewDataSourceAdapter::~AppViewDataSourceAdapter(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x100);
  return this;
}
