/*
 * XREFs of ??1CAppArrangementBase@@UEAA@XZ @ 0x1800C668C
 * Callers:
 *     ??1CAppArrangementImmediate@@UEAA@XZ @ 0x1800C66B4 (--1CAppArrangementImmediate@@UEAA@XZ.c)
 *     ??_GCAppArrangementDelayed@@UEAAPEAXI@Z @ 0x1800C68D0 (--_GCAppArrangementDelayed@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180009130 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 */

void __fastcall CAppArrangementBase::~CAppArrangementBase(void **this)
{
  DynArrayImpl<0>::~DynArrayImpl<0>(this + 19);
  CGroupingStoryboard::~CGroupingStoryboard((CGroupingStoryboard *)this);
}
