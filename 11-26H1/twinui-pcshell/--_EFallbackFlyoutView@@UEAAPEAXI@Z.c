/*
 * XREFs of ??_EFallbackFlyoutView@@UEAAPEAXI@Z @ 0x1805FABF0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1FallbackFlyoutView@@UEAA@XZ @ 0x1805FABC8 (--1FallbackFlyoutView@@UEAA@XZ.c)
 */

FallbackFlyoutView *__fastcall FallbackFlyoutView::`vector deleting destructor'(FallbackFlyoutView *this, char a2)
{
  FallbackFlyoutView::~FallbackFlyoutView(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x20);
  return this;
}
