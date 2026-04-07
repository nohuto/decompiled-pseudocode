/*
 * XREFs of ??0CTimelineBase@@QEAA@NNNW4InterpolationMode@@@Z @ 0x18004958C
 * Callers:
 *     ?StartDown@CDirectTouchVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@W4DWM_SHOWCONTACT@@@Z @ 0x18003031C (-StartDown@CDirectTouchVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@W4DWM_SHOWCONTACT@@@Z.c)
 *     ??0CLivePreviewTimeline@@QEAA@XZ @ 0x1800490A4 (--0CLivePreviewTimeline@@QEAA@XZ.c)
 *     ??0?$CTimeline@M@@QEAA@NMMW4InterpolationMode@@@Z @ 0x1800490E4 (--0-$CTimeline@M@@QEAA@NMMW4InterpolationMode@@@Z.c)
 *     ??0CTimelineBase@@QEAA@NNNUInterpolationParameters@@N@Z @ 0x18004952C (--0CTimelineBase@@QEAA@NNNUInterpolationParameters@@N@Z.c)
 *     ?StartAnimation@CTopLevelWindow3D@@QEAAJW4WindowAnimationType@1@@Z @ 0x180049AF4 (-StartAnimation@CTopLevelWindow3D@@QEAAJW4WindowAnimationType@1@@Z.c)
 *     ?SetupDelayBeforeEntranceAnimation@CDisplaySecondaryOnlyAnimatedVisual@@AEAAJXZ @ 0x18008D96C (-SetupDelayBeforeEntranceAnimation@CDisplaySecondaryOnlyAnimatedVisual@@AEAAJXZ.c)
 *     ?SetupDelay@CDisplayDisconnectAnimatedVisual@@AEAAJXZ @ 0x180093E98 (-SetupDelay@CDisplayDisconnectAnimatedVisual@@AEAAJXZ.c)
 *     ??0?$CTimeline@I@@QEAA@NIIW4InterpolationMode@@@Z @ 0x1800E1834 (--0-$CTimeline@I@@QEAA@NIIW4InterpolationMode@@@Z.c)
 * Callees:
 *     ??0CBaseObject@@QEAA@XZ @ 0x1800088E4 (--0CBaseObject@@QEAA@XZ.c)
 *     ?RegisterTimeline@CDesktopManager@@SAXPEAVCTimelineBase@@@Z @ 0x1800495EC (-RegisterTimeline@CDesktopManager@@SAXPEAVCTimelineBase@@@Z.c)
 *     ?Restart@CTimelineBase@@QEAAXN@Z @ 0x180049614 (-Restart@CTimelineBase@@QEAAXN@Z.c)
 */

__int64 __fastcall CTimelineBase::CTimelineBase(CBaseObject *a1, double a2, double a3, double a4, int a5)
{
  __int64 v5; // r8
  struct CTimelineBase *v6; // rcx
  __int64 v7; // r8

  CBaseObject::CBaseObject(a1);
  *(_QWORD *)(v5 + 64) = 0LL;
  *(_QWORD *)v5 = &CTimelineBase::`vftable';
  *(_DWORD *)(v5 + 56) = a5;
  *(double *)(v5 + 32) = a3;
  *(double *)(v5 + 40) = a4;
  CTimelineBase::Restart((CTimelineBase *)v5, a2);
  CDesktopManager::RegisterTimeline(v6);
  return v7;
}
