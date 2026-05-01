/*
 * XREFs of ??_EAppResizeView@@UEAAPEAXI@Z @ 0x18052D500
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1AppResizeView@@UEAA@XZ @ 0x18052D428 (--1AppResizeView@@UEAA@XZ.c)
 */

AppResizeView *__fastcall AppResizeView::`vector deleting destructor'(AppResizeView *this, char a2)
{
  AppResizeView::~AppResizeView(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x1E8);
  return this;
}
