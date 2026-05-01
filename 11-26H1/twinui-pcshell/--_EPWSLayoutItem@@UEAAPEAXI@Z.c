/*
 * XREFs of ??_EPWSLayoutItem@@UEAAPEAXI@Z @ 0x1803F2D70
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1PWSLayoutItem@@UEAA@XZ @ 0x1803F2D34 (--1PWSLayoutItem@@UEAA@XZ.c)
 */

PWSLayoutItem *__fastcall PWSLayoutItem::`vector deleting destructor'(PWSLayoutItem *this, char a2)
{
  PWSLayoutItem::~PWSLayoutItem(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x40);
  return this;
}
