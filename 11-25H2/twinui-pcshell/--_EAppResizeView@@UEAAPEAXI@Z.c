/*
 * XREFs of ??_EAppResizeView@@UEAAPEAXI@Z @ 0x18050B060
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1AppResizeView@@UEAA@XZ @ 0x18050AF88 (--1AppResizeView@@UEAA@XZ.c)
 */

AppResizeView *__fastcall AppResizeView::`vector deleting destructor'(AppResizeView *this, char a2)
{
  AppResizeView::~AppResizeView(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x1E8);
  return this;
}
