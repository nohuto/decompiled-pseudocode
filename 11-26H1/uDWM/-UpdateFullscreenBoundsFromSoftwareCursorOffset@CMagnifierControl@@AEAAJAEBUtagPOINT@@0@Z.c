/*
 * XREFs of ?UpdateFullscreenBoundsFromSoftwareCursorOffset@CMagnifierControl@@AEAAJAEBUtagPOINT@@0@Z @ 0x1800BABA8
 * Callers:
 *     ?OnSoftwareCursorOffsetUpdated@CMagnifierControl@@UEAAJPEAVCVisual@@AEBUtagPOINT@@@Z @ 0x1800BA9B0 (-OnSoftwareCursorOffsetUpdated@CMagnifierControl@@UEAAJPEAVCVisual@@AEBUtagPOINT@@@Z.c)
 * Callees:
 *     ?OnSetDesktopMagnificationFactor@CFullScreenMagnifier@@QEAAJNHH@Z @ 0x18008C4F4 (-OnSetDesktopMagnificationFactor@CFullScreenMagnifier@@QEAAJNHH@Z.c)
 *     ?GetPoint@CFullScreenMagnifier@@QEAA?AUtagPOINT@@XZ @ 0x1800B508C (-GetPoint@CFullScreenMagnifier@@QEAA-AUtagPOINT@@XZ.c)
 *     ?GetFullScreenMagnifierOffset@MagnifierExperienceHelper@@QEAA?AUtagPOINT@@AEBU2@AEBN00@Z @ 0x1800BADE0 (-GetFullScreenMagnifierOffset@MagnifierExperienceHelper@@QEAA-AUtagPOINT@@AEBU2@AEBN00@Z.c)
 */

__int64 __fastcall CMagnifierControl::UpdateFullscreenBoundsFromSoftwareCursorOffset(
        CMagnifierControl *this,
        const struct tagPOINT *a2,
        const struct tagPOINT *a3)
{
  const struct tagPOINT *v4; // r8
  const double *v5; // r10
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF
  struct tagPOINT v8; // [rsp+58h] [rbp+20h] BYREF

  CFullScreenMagnifier::GetPoint(*((CFullScreenMagnifier **)this + 6), &v7);
  MagnifierExperienceHelper::GetFullScreenMagnifierOffset(
    *((RECT **)this + 20),
    &v8,
    v5,
    (const struct tagPOINT *)this + 19,
    v4);
  if ( v7 != v8 )
    CFullScreenMagnifier::OnSetDesktopMagnificationFactor(
      *((CFullScreenMagnifier **)this + 6),
      *((double *)this + 19),
      -v8.x,
      -v8.y);
  return 0LL;
}
