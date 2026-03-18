/*
 * XREFs of ?TrackHmgrReferenceIncrement@@YAXAEAUSESSION_GLOBALS@Base@Gre@@EPEAVOBJECT@@@Z @ 0x140162EF0
 * Callers:
 *     <none>
 * Callees:
 *     ?TrackObjectReferenceIncrement@@YAXAEAUSESSION_GLOBALS@Base@Gre@@W4ReferenceTrackerCountedType@@PEAX@Z @ 0x140019E80 (-TrackObjectReferenceIncrement@@YAXAEAUSESSION_GLOBALS@Base@Gre@@W4ReferenceTrackerCountedType@@.c)
 */

void __fastcall TrackHmgrReferenceIncrement(struct Gre::Base::SESSION_GLOBALS *a1, char a2, struct OBJECT *a3)
{
  struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *v3; // r8
  unsigned int v4; // edx

  switch ( a2 )
  {
    case 4:
      v3 = (struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *)*((_QWORD *)a3 + 14);
      v4 = 2;
      goto LABEL_4;
    case 5:
      v3 = (struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *)*((_QWORD *)a3 + 85);
      v4 = 3;
LABEL_4:
      TrackObjectReferenceIncrement((__int64)a1, v4, v3);
      return;
    case 16:
      v3 = (struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *)*((_QWORD *)a3 + 17);
      v4 = 0;
      goto LABEL_4;
  }
}
