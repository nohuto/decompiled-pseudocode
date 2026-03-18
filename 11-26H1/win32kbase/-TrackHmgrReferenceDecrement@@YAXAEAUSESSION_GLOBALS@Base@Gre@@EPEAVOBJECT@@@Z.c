/*
 * XREFs of ?TrackHmgrReferenceDecrement@@YAXAEAUSESSION_GLOBALS@Base@Gre@@EPEAVOBJECT@@@Z @ 0x14001C700
 * Callers:
 *     HmgRemoveObject @ 0x14001AB00 (HmgRemoveObject.c)
 *     ?bDeleteHandle@RGNOBJAPI@@QEAAHXZ @ 0x14001ED10 (-bDeleteHandle@RGNOBJAPI@@QEAAHXZ.c)
 *     ?HmgRemoveObjectImpl@@YAPEAXAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@JJW4HandleLockOptions@@EPEAK@Z @ 0x1400358D0 (-HmgRemoveObjectImpl@@YAPEAXAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@JJW4HandleLockOptions@@EPE.c)
 *     HmgShareUnlockRemoveObject @ 0x140054820 (HmgShareUnlockRemoveObject.c)
 *     HmgShareUnlock @ 0x140055534 (HmgShareUnlock.c)
 *     ??1PALMEMOBJ@@QEAA@XZ @ 0x1400C4690 (--1PALMEMOBJ@@QEAA@XZ.c)
 *     ?bDeletePalette@XEPALOBJ@@QEAAHW4_CLEANUPTYPE@@@Z @ 0x1400C49EC (-bDeletePalette@XEPALOBJ@@QEAAHW4_CLEANUPTYPE@@@Z.c)
 * Callees:
 *     ?TrackObjectReferenceDecrement@@YAXAEAUSESSION_GLOBALS@Base@Gre@@W4ReferenceTrackerCountedType@@PEAX@Z @ 0x140019E4C (-TrackObjectReferenceDecrement@@YAXAEAUSESSION_GLOBALS@Base@Gre@@W4ReferenceTrackerCountedType@@.c)
 */

void __fastcall TrackHmgrReferenceDecrement(struct Gre::Base::SESSION_GLOBALS *a1, char a2, struct OBJECT *a3)
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
      TrackObjectReferenceDecrement((__int64)a1, v4, v3);
      return;
    case 16:
      v3 = (struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *)*((_QWORD *)a3 + 17);
      v4 = 0;
      goto LABEL_4;
  }
}
