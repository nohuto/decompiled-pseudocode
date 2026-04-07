/*
 * XREFs of ??1CAppArrangementBase@@UEAA@XZ @ 0x1800C0320
 * Callers:
 *     ??1CAppArrangementImmediate@@UEAA@XZ @ 0x1800C0348 (--1CAppArrangementImmediate@@UEAA@XZ.c)
 *     ??_ECAppArrangementBase@@UEAAPEAXI@Z @ 0x1800C05B0 (--_ECAppArrangementBase@@UEAAPEAXI@Z.c)
 *     ??_GCAppArrangementDelayed@@UEAAPEAXI@Z @ 0x1800C05F0 (--_GCAppArrangementDelayed@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1CBitmapSourceArray@@QEAA@XZ @ 0x1800088C0 (--1CBitmapSourceArray@@QEAA@XZ.c)
 */

void __fastcall CAppArrangementBase::~CAppArrangementBase(void **this)
{
  CBitmapSourceArray::~CBitmapSourceArray(this + 19);
  CGroupingStoryboard::~CGroupingStoryboard((CGroupingStoryboard *)this);
}
