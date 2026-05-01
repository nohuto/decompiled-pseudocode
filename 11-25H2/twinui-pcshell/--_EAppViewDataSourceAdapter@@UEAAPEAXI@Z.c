/*
 * XREFs of ??_EAppViewDataSourceAdapter@@UEAAPEAXI@Z @ 0x18069A430
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1AppViewDataSourceAdapter@@UEAA@XZ @ 0x18069A2DC (--1AppViewDataSourceAdapter@@UEAA@XZ.c)
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
