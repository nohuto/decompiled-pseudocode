/*
 * XREFs of ?GetFullScreenMagnifierOffset@MagnifierExperienceHelper@@QEAA?AUtagPOINT@@AEBU2@AEBN00@Z @ 0x1800BADE0
 * Callers:
 *     ?UpdateFullscreenBoundsFromSoftwareCursorOffset@CMagnifierControl@@AEAAJAEBUtagPOINT@@0@Z @ 0x1800BABA8 (-UpdateFullscreenBoundsFromSoftwareCursorOffset@CMagnifierControl@@AEAAJAEBUtagPOINT@@0@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18008E1C0 (__security_check_cookie.c)
 *     ?ClampToDesktopBounds@MagnifierExperienceHelper@@AEAAXAEAUtagPOINT@@@Z @ 0x1800BACB8 (-ClampToDesktopBounds@MagnifierExperienceHelper@@AEAAXAEAUtagPOINT@@@Z.c)
 *     ?GetFullScreenMagnifierOffsetForCenterMode@MagnifierExperienceHelper@@QEAA?AUtagPOINT@@AEBU2@AEBN@Z @ 0x1800BAF70 (-GetFullScreenMagnifierOffsetForCenterMode@MagnifierExperienceHelper@@QEAA-AUtagPOINT@@AEBU2@AEB.c)
 *     ?GetMonitorRectFromPoint@MagnifierExperienceHelper@@AEAA?AUtagRECT@@AEBUtagPOINT@@@Z @ 0x1800BB070 (-GetMonitorRectFromPoint@MagnifierExperienceHelper@@AEAA-AUtagRECT@@AEBUtagPOINT@@@Z.c)
 *     ?GetStillZoneFromOffset@MagnifierExperienceHelper@@AEBA?AUtagRECT@@AEBUtagPOINT@@0@Z @ 0x1800BB100 (-GetStillZoneFromOffset@MagnifierExperienceHelper@@AEBA-AUtagRECT@@AEBUtagPOINT@@0@Z.c)
 *     ?GetViewportDisplacement@MagnifierExperienceHelper@@AEBAHHHHH@Z @ 0x1800BB42C (-GetViewportDisplacement@MagnifierExperienceHelper@@AEBAHHHHH@Z.c)
 *     ?SetMagnificationFactor@MagnifierExperienceHelper@@QEAAXAEBN@Z @ 0x1800BB4CC (-SetMagnificationFactor@MagnifierExperienceHelper@@QEAAXAEBN@Z.c)
 *     ?SetMonitorRect@MagnifierExperienceHelper@@AEAAXAEBUtagRECT@@@Z @ 0x1800BB4F8 (-SetMonitorRect@MagnifierExperienceHelper@@AEAAXAEBUtagRECT@@@Z.c)
 *     ?ShouldUpdateViewport@MagnifierExperienceHelper@@AEBA_NAEBUtagPOINT@@00@Z @ 0x1800BB57C (-ShouldUpdateViewport@MagnifierExperienceHelper@@AEBA_NAEBUtagPOINT@@00@Z.c)
 */

struct tagPOINT __fastcall MagnifierExperienceHelper::GetFullScreenMagnifierOffset(
        RECT *lprc,
        struct tagPOINT *a2,
        const double *a3,
        const struct tagPOINT *a4,
        const struct tagPOINT *a5,
        int *a6)
{
  RECT *MonitorRectFromPoint; // rax
  double v11; // xmm0_8
  MagnifierExperienceHelper *v12; // rcx
  int ViewportDisplacement; // eax
  MagnifierExperienceHelper *v14; // rcx
  int v15; // eax
  double v16; // xmm1_8
  struct tagPOINT v17; // rax
  struct tagPOINT v19; // [rsp+30h] [rbp-20h] BYREF
  struct tagRECT v20; // [rsp+38h] [rbp-18h] BYREF

  if ( *(float *)&lprc[7].bottom == 0.0 && *(float *)&lprc[7].right == 0.0 )
  {
    MagnifierExperienceHelper::GetFullScreenMagnifierOffsetForCenterMode((MagnifierExperienceHelper *)lprc, a2, a3);
  }
  else
  {
    MonitorRectFromPoint = MagnifierExperienceHelper::GetMonitorRectFromPoint(
                             (MagnifierExperienceHelper *)lprc,
                             &v20,
                             (const struct tagPOINT *)a3);
    MagnifierExperienceHelper::SetMonitorRect((MagnifierExperienceHelper *)lprc, MonitorRectFromPoint);
    MagnifierExperienceHelper::SetMagnificationFactor((MagnifierExperienceHelper *)lprc, (const double *)a4);
    v11 = (double)a6[1];
    v19.x = (int)((double)*a6 / *(double *)&lprc[7].left + 0.5);
    v19.y = (int)(v11 / *(double *)&lprc[7].left + 0.5);
    MagnifierExperienceHelper::GetStillZoneFromOffset(lprc, &v20, &v19, (const struct tagPOINT *)a3);
    if ( MagnifierExperienceHelper::ShouldUpdateViewport(lprc, &v19, (const struct tagPOINT *)a3, a5) )
    {
      ViewportDisplacement = MagnifierExperienceHelper::GetViewportDisplacement(
                               v12,
                               a5->x,
                               v20.left,
                               v20.right,
                               *(_DWORD *)a3);
      v19.x += ViewportDisplacement;
      v15 = MagnifierExperienceHelper::GetViewportDisplacement(v14, a5->y, v20.top, v20.bottom, *((_DWORD *)a3 + 1));
      v19.y += v15;
      MagnifierExperienceHelper::ClampToDesktopBounds((MagnifierExperienceHelper *)lprc, &v19);
      v16 = (double)v19.y * *(double *)&lprc[7].left + 0.5;
      v19.x = (int)((double)v19.x * *(double *)&lprc[7].left + 0.5);
      v19.y = (int)v16;
      v17 = v19;
    }
    else
    {
      v17 = *(struct tagPOINT *)a6;
    }
    *a2 = v17;
  }
  return (struct tagPOINT)a2;
}
