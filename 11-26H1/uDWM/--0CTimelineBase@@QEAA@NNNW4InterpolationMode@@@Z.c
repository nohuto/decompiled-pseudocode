/*
 * XREFs of ??0CTimelineBase@@QEAA@NNNW4InterpolationMode@@@Z @ 0x180023144
 * Callers:
 *     ??0?$CTimeline@M@@QEAA@NMMW4InterpolationMode@@@Z @ 0x180003248 (--0-$CTimeline@M@@QEAA@NMMW4InterpolationMode@@@Z.c)
 *     ?Start@CContactStationaryVisual@@QEAAJW4STATIONARY_ANIMATION_TYPE@1@PEBUtagPOINT@@PEBUtagRECT@@_N@Z @ 0x1800036B0 (-Start@CContactStationaryVisual@@QEAAJW4STATIONARY_ANIMATION_TYPE@1@PEBUtagPOINT@@PEBUtagRECT@@_.c)
 *     ?ActivateTimeline@CButton@@AEAAJPEAPEAV?$CTimeline@M@@NMMW4InterpolationMode@@@Z @ 0x180005818 (-ActivateTimeline@CButton@@AEAAJPEAPEAV-$CTimeline@M@@NMMW4InterpolationMode@@@Z.c)
 *     ??0CLivePreviewTimeline@@QEAA@XZ @ 0x180005BCC (--0CLivePreviewTimeline@@QEAA@XZ.c)
 *     ?StartDown@CDirectTouchVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@W4DWM_SHOWCONTACT@@@Z @ 0x180005F38 (-StartDown@CDirectTouchVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@W4DWM_SHOWCONTACT@@@Z.c)
 *     ??0CTimelineBase@@QEAA@NNNUInterpolationParameters@@N@Z @ 0x1800233AC (--0CTimelineBase@@QEAA@NNNUInterpolationParameters@@N@Z.c)
 *     ?SetupDelayBeforeEntranceAnimation@CDisplaySecondaryOnlyAnimatedVisual@@AEAAJXZ @ 0x180070D5C (-SetupDelayBeforeEntranceAnimation@CDisplaySecondaryOnlyAnimatedVisual@@AEAAJXZ.c)
 *     ?SetupDelay@CDisplayDisconnectAnimatedVisual@@AEAAJXZ @ 0x180070EF8 (-SetupDelay@CDisplayDisconnectAnimatedVisual@@AEAAJXZ.c)
 *     ??0?$CTimeline@I@@QEAA@NIIW4InterpolationMode@@@Z @ 0x1800DE6D8 (--0-$CTimeline@I@@QEAA@NIIW4InterpolationMode@@@Z.c)
 * Callees:
 *     ??0CBaseObject@@QEAA@XZ @ 0x180021380 (--0CBaseObject@@QEAA@XZ.c)
 *     ?RegisterTimeline@CDesktopManager@@SAXPEAVCTimelineBase@@@Z @ 0x1800231AC (-RegisterTimeline@CDesktopManager@@SAXPEAVCTimelineBase@@@Z.c)
 *     ?Restart@CTimelineBase@@QEAAXN@Z @ 0x1800231D4 (-Restart@CTimelineBase@@QEAAXN@Z.c)
 */

__int64 __fastcall CTimelineBase::CTimelineBase(CBaseObject *a1, double a2, double a3, double a4, int a5)
{
  __int64 v5; // r8
  struct CTimelineBase *v6; // rcx
  __int64 v7; // r8

  CBaseObject::CBaseObject(a1);
  *(_QWORD *)v5 = &CTimelineBase::`vftable';
  *(_DWORD *)(v5 + 56) = a5;
  *(_QWORD *)(v5 + 64) = 0LL;
  *(double *)(v5 + 32) = a3;
  *(double *)(v5 + 40) = a4;
  CTimelineBase::Restart((CTimelineBase *)v5, a2);
  CDesktopManager::RegisterTimeline(v6);
  return v7;
}
