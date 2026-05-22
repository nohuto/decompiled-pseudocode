/*
 * XREFs of ??_EMagnifierGestureTarget@@UEAAPEAXI@Z @ 0x1801B1FA0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009ADC0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1MagnifierToggleTarget@@UEAA@XZ @ 0x1801B1E00 (--1MagnifierToggleTarget@@UEAA@XZ.c)
 */

MagnifierGestureTarget *__fastcall MagnifierGestureTarget::`vector deleting destructor'(
        MagnifierGestureTarget *this,
        char a2)
{
  MagnifierToggleTarget::~MagnifierToggleTarget(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x30);
  return this;
}
