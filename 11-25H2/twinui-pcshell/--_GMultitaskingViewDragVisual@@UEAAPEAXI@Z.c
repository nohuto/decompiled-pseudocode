/*
 * XREFs of ??_GMultitaskingViewDragVisual@@UEAAPEAXI@Z @ 0x1804CE520
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1MultitaskingViewDragVisual@@UEAA@XZ @ 0x1804CE484 (--1MultitaskingViewDragVisual@@UEAA@XZ.c)
 */

MultitaskingViewDragVisual *__fastcall MultitaskingViewDragVisual::`scalar deleting destructor'(
        MultitaskingViewDragVisual *this,
        char a2)
{
  MultitaskingViewDragVisual::~MultitaskingViewDragVisual(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x58);
  return this;
}
