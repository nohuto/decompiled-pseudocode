/*
 * XREFs of ?TrackObjectReferenceDecrement@@YAXAEAUSESSION_GLOBALS@Base@Gre@@W4ReferenceTrackerCountedType@@PEAX@Z @ 0x140019E4C
 * Callers:
 *     ?GrepSelectBitmap@@YA?AVGSBResult@@AEAVXDCOBJ@@PEAUHBITMAP__@@W4GSBOptions@@@Z @ 0x140013360 (-GrepSelectBitmap@@YA-AVGSBResult@@AEAVXDCOBJ@@PEAUHBITMAP__@@W4GSBOptions@@@Z.c)
 *     DEC_SHARE_REF_CNT @ 0x140019380 (DEC_SHARE_REF_CNT.c)
 *     HmgDecrementShareReferenceCount @ 0x140019C10 (HmgDecrementShareReferenceCount.c)
 *     ?bCleanDC@XDCOBJ@@QEAAH_N@Z @ 0x140019F20 (-bCleanDC@XDCOBJ@@QEAAH_N@Z.c)
 *     ?TrackHmgrReferenceDecrement@@YAXAEAUSESSION_GLOBALS@Base@Gre@@EPEAVOBJECT@@@Z @ 0x14001C700 (-TrackHmgrReferenceDecrement@@YAXAEAUSESSION_GLOBALS@Base@Gre@@EPEAVOBJECT@@@Z.c)
 *     ??$hdevEnumerate@$0A@@@YAPEAUHDEV__@@PEAU0@@Z @ 0x14002777C (--$hdevEnumerate@$0A@@@YAPEAUHDEV__@@PEAU0@@Z.c)
 *     ??1PALMEMOBJ@@QEAA@XZ @ 0x1400C4690 (--1PALMEMOBJ@@QEAA@XZ.c)
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400C97A0 (-vUnreferencePdev@PDEVOBJ@@QEAAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?DecrementClientReferenceCount@PDEV@@QEAAKAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140189100 (-DecrementClientReferenceCount@PDEV@@QEAAKAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 * Callees:
 *     ?ReferenceDereferenceCommon@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@AEAAXPEAUSCircularBuffer@123@_N@Z @ 0x140116FFC (-ReferenceDereferenceCommon@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@AEAAXPEAU.c)
 */

void __fastcall TrackObjectReferenceDecrement(
        __int64 a1,
        unsigned int a2,
        struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *a3)
{
  NSInstrumentation::CReferenceTracker::CReferenceCountedType *v3; // rcx

  if ( a3 )
  {
    v3 = *(NSInstrumentation::CReferenceTracker::CReferenceCountedType **)(a1 + 16LL * a2 + 40);
    if ( v3 )
      NSInstrumentation::CReferenceTracker::CReferenceCountedType::ReferenceDereferenceCommon(v3, a3, 0);
  }
}
