/*
 * XREFs of ?GetFullScreenMagnifierOffsetForCenterMode@MagnifierExperienceHelper@@QEAA?AUtagPOINT@@AEBU2@AEBN@Z @ 0x1800BAF70
 * Callers:
 *     ?GetFullScreenMagnifierOffset@MagnifierExperienceHelper@@QEAA?AUtagPOINT@@AEBU2@AEBN00@Z @ 0x1800BADE0 (-GetFullScreenMagnifierOffset@MagnifierExperienceHelper@@QEAA-AUtagPOINT@@AEBU2@AEBN00@Z.c)
 * Callees:
 *     ?ClampToMonitorBounds@MagnifierExperienceHelper@@AEAAXAEAN0@Z @ 0x18007872C (-ClampToMonitorBounds@MagnifierExperienceHelper@@AEAAXAEAN0@Z.c)
 *     __security_check_cookie @ 0x18008E1C0 (__security_check_cookie.c)
 *     ?GetMonitorRectFromPoint@MagnifierExperienceHelper@@AEAA?AUtagRECT@@AEBUtagPOINT@@@Z @ 0x1800BB070 (-GetMonitorRectFromPoint@MagnifierExperienceHelper@@AEAA-AUtagRECT@@AEBUtagPOINT@@@Z.c)
 *     ?SetMagnificationFactor@MagnifierExperienceHelper@@QEAAXAEBN@Z @ 0x1800BB4CC (-SetMagnificationFactor@MagnifierExperienceHelper@@QEAAXAEBN@Z.c)
 *     ?SetMonitorRect@MagnifierExperienceHelper@@AEAAXAEBUtagRECT@@@Z @ 0x1800BB4F8 (-SetMonitorRect@MagnifierExperienceHelper@@AEAAXAEBUtagRECT@@@Z.c)
 */

struct tagPOINT __fastcall MagnifierExperienceHelper::GetFullScreenMagnifierOffsetForCenterMode(
        MagnifierExperienceHelper *this,
        const struct tagPOINT *a2,
        const struct tagPOINT *a3,
        const double *a4)
{
  RECT *MonitorRectFromPoint; // rax
  double v9; // xmm3_8
  double v10; // xmm5_8
  struct tagPOINT result; // rax
  double v12; // xmm2_8
  double v13; // [rsp+20h] [rbp-38h] BYREF
  struct tagRECT v14; // [rsp+28h] [rbp-30h] BYREF

  MonitorRectFromPoint = MagnifierExperienceHelper::GetMonitorRectFromPoint(this, &v14, a3);
  MagnifierExperienceHelper::SetMonitorRect(this, MonitorRectFromPoint);
  MagnifierExperienceHelper::SetMagnificationFactor(this, a4);
  v9 = (double)a3->x - *((double *)this + 12);
  v13 = (double)a3->y - *((double *)this + 13);
  *(double *)&v14.left = v9;
  MagnifierExperienceHelper::ClampToMonitorBounds(this, (double *)&v14.left, &v13);
  v10 = *((double *)this + 14);
  result = (struct tagPOINT)a2;
  v12 = (v13 - (double)*((int *)this + 13) / v10) * v10 + 0.5;
  a2->x = (int)((*(double *)&v14.left - (double)*((int *)this + 12) / v10) * v10 + 0.5);
  a2->y = (int)v12;
  return result;
}
