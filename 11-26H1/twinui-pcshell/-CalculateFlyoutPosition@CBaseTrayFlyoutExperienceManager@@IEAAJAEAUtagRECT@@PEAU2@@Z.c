/*
 * XREFs of ?CalculateFlyoutPosition@CBaseTrayFlyoutExperienceManager@@IEAAJAEAUtagRECT@@PEAU2@@Z @ 0x1803C1C60
 * Callers:
 *     ?PositionFlyoutCore@CBaseTrayFlyoutExperienceManager@@IEAAJXZ @ 0x1803C49CC (-PositionFlyoutCore@CBaseTrayFlyoutExperienceManager@@IEAAJXZ.c)
 * Callees:
 *     ?ScaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z @ 0x1802AAA08 (-ScaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802C6380 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall CBaseTrayFlyoutExperienceManager::CalculateFlyoutPosition(
        SIZE *this,
        struct tagRECT *a2,
        struct tagRECT *a3)
{
  const RECT *v5; // rcx
  bool v7; // zf
  ExperienceManagerUtils *v8; // rbx
  HMONITOR v9; // r8
  HMONITOR v10; // r8
  const char *v11; // r9
  LONG cy; // r8d
  LONG v14; // eax
  LONG v15; // r8d
  LONG v16; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  SIZE windowSize; // [rsp+50h] [rbp+8h] BYREF
  POINT anchorPoint; // [rsp+68h] [rbp+20h] BYREF

  v5 = (const RECT *)&this[49];
  anchorPoint.x = (v5->left + this[50].cx) / 2;
  v7 = LOBYTE(this[58].cx) == 0;
  anchorPoint.y = (this[49].cy + this[50].cy) / 2;
  windowSize = this[55];
  if ( !v7 )
  {
    v8 = (ExperienceManagerUtils *)MonitorFromRect(v5, 1u);
    windowSize.cx = ExperienceManagerUtils::ScaleByPerMonitorDPI(
                      (ExperienceManagerUtils *)(unsigned int)windowSize.cx,
                      v8,
                      v9);
    windowSize.cy = ExperienceManagerUtils::ScaleByPerMonitorDPI(
                      (ExperienceManagerUtils *)(unsigned int)windowSize.cy,
                      v8,
                      v10);
  }
  if ( !CalculatePopupWindowPosition(&anchorPoint, &windowSize, 0x10054u, a2, a3) )
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0x31A,
             (__int64)"desktop\\internal\\shell\\inc\\private\\BaseTrayFlyoutExperience.cpp",
             v11);
  cy = this[51].cy;
  if ( a3->top >= cy )
  {
    v15 = this[52].cy;
    if ( a3->bottom > v15 )
    {
      OffsetRect(a3, 0, v15 - a3->bottom);
      v16 = this[51].cy;
      if ( a3->top < v16 )
        a3->top = v16;
    }
  }
  else
  {
    OffsetRect(a3, 0, cy - a3->top);
    v14 = this[52].cy;
    if ( a3->bottom > v14 )
      a3->bottom = v14;
  }
  return 0LL;
}
