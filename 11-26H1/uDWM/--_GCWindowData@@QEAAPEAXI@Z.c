/*
 * XREFs of ??_GCWindowData@@QEAAPEAXI@Z @ 0x18001AD1C
 * Callers:
 *     ??1CWindowIconic@@MEAA@XZ @ 0x1800085DC (--1CWindowIconic@@MEAA@XZ.c)
 *     ??1CWindowSnapshot@@MEAA@XZ @ 0x180082224 (--1CWindowSnapshot@@MEAA@XZ.c)
 * Callees:
 *     ??1CWindowData@@QEAA@XZ @ 0x18001AD44 (--1CWindowData@@QEAA@XZ.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x180084D50 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 */

CWindowData *__fastcall CWindowData::`scalar deleting destructor'(CWindowData *this)
{
  CWindowData::~CWindowData(this);
  DefaultHeap::Free(this);
  return this;
}
