/*
 * XREFs of ??_GMultitaskingViewDragVisual@@UEAAPEAXI@Z @ 0x1804E0720
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1MultitaskingViewDragVisual@@UEAA@XZ @ 0x1804E0688 (--1MultitaskingViewDragVisual@@UEAA@XZ.c)
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
