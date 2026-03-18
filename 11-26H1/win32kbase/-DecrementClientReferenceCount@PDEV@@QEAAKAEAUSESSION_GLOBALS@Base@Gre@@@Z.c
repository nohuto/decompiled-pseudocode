/*
 * XREFs of ?DecrementClientReferenceCount@PDEV@@QEAAKAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140189100
 * Callers:
 *     <none>
 * Callees:
 *     ?TrackObjectReferenceDecrement@@YAXAEAUSESSION_GLOBALS@Base@Gre@@W4ReferenceTrackerCountedType@@PEAX@Z @ 0x140019E4C (-TrackObjectReferenceDecrement@@YAXAEAUSESSION_GLOBALS@Base@Gre@@W4ReferenceTrackerCountedType@@.c)
 */

__int64 __fastcall PDEV::DecrementClientReferenceCount(
        struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **this,
        struct Gre::Base::SESSION_GLOBALS *a2)
{
  TrackObjectReferenceDecrement((__int64)a2, 1u, this[442]);
  return (unsigned int)--*((_DWORD *)this + 2);
}
