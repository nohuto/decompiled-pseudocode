/*
 * XREFs of ??_EDragData@@UEAAPEAXI@Z @ 0x180531A70
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1DragData@@UEAA@XZ @ 0x180531A00 (--1DragData@@UEAA@XZ.c)
 */

DragData *__fastcall DragData::`vector deleting destructor'(DragData *this, char a2)
{
  DragData::~DragData(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0xA8);
  return this;
}
