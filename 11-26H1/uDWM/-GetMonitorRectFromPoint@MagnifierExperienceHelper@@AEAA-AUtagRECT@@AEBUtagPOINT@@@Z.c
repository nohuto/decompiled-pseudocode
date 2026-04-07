/*
 * XREFs of ?GetMonitorRectFromPoint@MagnifierExperienceHelper@@AEAA?AUtagRECT@@AEBUtagPOINT@@@Z @ 0x1800BB070
 * Callers:
 *     ?GetFullScreenMagnifierOffset@MagnifierExperienceHelper@@QEAA?AUtagPOINT@@AEBU2@AEBN00@Z @ 0x1800BADE0 (-GetFullScreenMagnifierOffset@MagnifierExperienceHelper@@QEAA-AUtagPOINT@@AEBU2@AEBN00@Z.c)
 *     ?GetFullScreenMagnifierOffsetForCenterMode@MagnifierExperienceHelper@@QEAA?AUtagPOINT@@AEBU2@AEBN@Z @ 0x1800BAF70 (-GetFullScreenMagnifierOffsetForCenterMode@MagnifierExperienceHelper@@QEAA-AUtagPOINT@@AEBU2@AEB.c)
 * Callees:
 *     __security_check_cookie @ 0x18008E1C0 (__security_check_cookie.c)
 */

struct tagRECT *__fastcall MagnifierExperienceHelper::GetMonitorRectFromPoint(
        MagnifierExperienceHelper *this,
        struct tagRECT *__return_ptr retstr,
        const struct tagPOINT *a3)
{
  HMONITOR v4; // rax
  struct tagMONITORINFO mi; // [rsp+20h] [rbp-38h] BYREF

  *retstr = 0LL;
  v4 = MonitorFromPoint(*a3, 2u);
  if ( v4 )
  {
    memset(&mi, 0, sizeof(mi));
    mi.cbSize = 40;
    GetMonitorInfoW(v4, &mi);
    *retstr = mi.rcMonitor;
  }
  return retstr;
}
