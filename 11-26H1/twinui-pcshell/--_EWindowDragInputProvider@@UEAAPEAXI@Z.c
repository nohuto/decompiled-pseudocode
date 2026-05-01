/*
 * XREFs of ??_EWindowDragInputProvider@@UEAAPEAXI@Z @ 0x1805B2A20
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1WindowDragInputProvider@@UEAA@XZ @ 0x1805BF8F8 (--1WindowDragInputProvider@@UEAA@XZ.c)
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
