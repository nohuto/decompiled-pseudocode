/*
 * XREFs of ??_EDragInputHandler@@EEAAPEAXI@Z @ 0x1804C2520
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1DragInputHandler@@EEAA@XZ @ 0x1804C24DC (--1DragInputHandler@@EEAA@XZ.c)
 */

DragInputHandler *__fastcall DragInputHandler::`vector deleting destructor'(DragInputHandler *this, char a2)
{
  DragInputHandler::~DragInputHandler(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x30);
  return this;
}
