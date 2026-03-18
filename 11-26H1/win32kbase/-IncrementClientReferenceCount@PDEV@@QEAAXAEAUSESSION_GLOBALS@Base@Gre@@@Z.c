/*
 * XREFs of ?IncrementClientReferenceCount@PDEV@@QEAAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140183530
 * Callers:
 *     <none>
 * Callees:
 *     ?TrackObjectReferenceIncrement@@YAXAEAUSESSION_GLOBALS@Base@Gre@@W4ReferenceTrackerCountedType@@PEAX@Z @ 0x140019E80 (-TrackObjectReferenceIncrement@@YAXAEAUSESSION_GLOBALS@Base@Gre@@W4ReferenceTrackerCountedType@@.c)
 */

void __fastcall PDEV::IncrementClientReferenceCount(PDEV *this, struct Gre::Base::SESSION_GLOBALS *a2)
{
  struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *v2; // r8

  v2 = (struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *)*((_QWORD *)this + 442);
  ++*((_DWORD *)this + 2);
  TrackObjectReferenceIncrement((__int64)a2, 1u, v2);
}
