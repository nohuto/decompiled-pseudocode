/*
 * XREFs of ??_EMultitaskingViewGestureHandler@@UEAAPEAXI@Z @ 0x180224EE0
 * Callers:
 *     <none>
 * Callees:
 *     ??1MultitaskingViewGestureHandler@@UEAA@XZ @ 0x180078C90 (--1MultitaskingViewGestureHandler@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

MultitaskingViewGestureHandler *__fastcall MultitaskingViewGestureHandler::`vector deleting destructor'(
        MultitaskingViewGestureHandler *this,
        char a2)
{
  MultitaskingViewGestureHandler::~MultitaskingViewGestureHandler(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x128);
  return this;
}
