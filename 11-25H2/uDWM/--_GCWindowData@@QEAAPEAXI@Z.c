/*
 * XREFs of ??_GCWindowData@@QEAAPEAXI@Z @ 0x18001A630
 * Callers:
 *     ??1CWindowSnapshot@@MEAA@XZ @ 0x180052B8C (--1CWindowSnapshot@@MEAA@XZ.c)
 *     ??1CWindowIconic@@MEAA@XZ @ 0x1800793CC (--1CWindowIconic@@MEAA@XZ.c)
 * Callees:
 *     ??1CWindowData@@QEAA@XZ @ 0x18001A658 (--1CWindowData@@QEAA@XZ.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x1800938B4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 */

CWindowData *__fastcall CWindowData::`scalar deleting destructor'(CWindowData *this)
{
  CWindowData::~CWindowData(this);
  DefaultHeap::Free(this);
  return this;
}
