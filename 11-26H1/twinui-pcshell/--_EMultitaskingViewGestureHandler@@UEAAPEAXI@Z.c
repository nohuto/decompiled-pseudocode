/*
 * XREFs of ??_EMultitaskingViewGestureHandler@@UEAAPEAXI@Z @ 0x180215D90
 * Callers:
 *     <none>
 * Callees:
 *     ??1MultitaskingViewGestureHandler@@UEAA@XZ @ 0x180090AF8 (--1MultitaskingViewGestureHandler@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
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
