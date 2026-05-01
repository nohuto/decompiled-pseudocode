/*
 * XREFs of ??_EElementDragData@@UEAAPEAXI@Z @ 0x1804DB0B0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1ElementDragData@@UEAA@XZ @ 0x1804DAD98 (--1ElementDragData@@UEAA@XZ.c)
 */

ElementDragData *__fastcall ElementDragData::`vector deleting destructor'(ElementDragData *this, char a2)
{
  ElementDragData::~ElementDragData(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x208);
  return this;
}
