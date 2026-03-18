/*
 * XREFs of ??_GFxTagTracker@@QEAAPEAXI@Z @ 0x140082614
 * Callers:
 *     ??1FxPowerIdleMachine@@QEAA@XZ @ 0x14003C450 (--1FxPowerIdleMachine@@QEAA@XZ.c)
 * Callees:
 *     ??3FxStump@@SAXPEAX@Z @ 0x14002E4F4 (--3FxStump@@SAXPEAX@Z.c)
 *     ??1FxTagTracker@@QEAA@XZ @ 0x14008263C (--1FxTagTracker@@QEAA@XZ.c)
 */

FxTagTracker *__fastcall FxTagTracker::`scalar deleting destructor'(FxTagTracker *this)
{
  FxTagTracker::~FxTagTracker(this);
  FxStump::operator delete(this);
  return this;
}
