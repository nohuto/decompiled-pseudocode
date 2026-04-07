/*
 * XREFs of ??1CWindowPropertyTracker@@QEAA@XZ @ 0x1800A7720
 * Callers:
 *     ??1CAnimationScheduler@@QEAA@XZ @ 0x1800A76A8 (--1CAnimationScheduler@@QEAA@XZ.c)
 * Callees:
 *     ?StopTrackingAllWindows@CWindowPropertyTracker@@QEAAXXZ @ 0x1800299F4 (-StopTrackingAllWindows@CWindowPropertyTracker@@QEAAXXZ.c)
 */

void __fastcall CWindowPropertyTracker::~CWindowPropertyTracker(CWindowPropertyTracker *this)
{
  CWindowPropertyTracker::StopTrackingAllWindows(this);
  DynArrayImpl<0>::~DynArrayImpl<0>((void **)this);
}
