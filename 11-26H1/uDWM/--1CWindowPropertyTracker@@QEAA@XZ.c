/*
 * XREFs of ??1CWindowPropertyTracker@@QEAA@XZ @ 0x18009A0E0
 * Callers:
 *     ??1CAnimationScheduler@@QEAA@XZ @ 0x18009A068 (--1CAnimationScheduler@@QEAA@XZ.c)
 * Callees:
 *     ?StopTrackingAllWindows@CWindowPropertyTracker@@QEAAXXZ @ 0x18002A2D0 (-StopTrackingAllWindows@CWindowPropertyTracker@@QEAAXXZ.c)
 */

void __fastcall CWindowPropertyTracker::~CWindowPropertyTracker(CWindowPropertyTracker *this)
{
  CWindowPropertyTracker::StopTrackingAllWindows(this);
  CBitmapSourceArray::~CBitmapSourceArray((void **)this);
}
