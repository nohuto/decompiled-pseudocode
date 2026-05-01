/*
 * XREFs of ??_EWindowDragInputProvider@@UEAAPEAXI@Z @ 0x18058E720
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1WindowDragInputProvider@@UEAA@XZ @ 0x18059B65C (--1WindowDragInputProvider@@UEAA@XZ.c)
 */

WindowDragInputProvider *__fastcall WindowDragInputProvider::`vector deleting destructor'(
        WindowDragInputProvider *this,
        char a2)
{
  WindowDragInputProvider::~WindowDragInputProvider(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x68);
  return this;
}
