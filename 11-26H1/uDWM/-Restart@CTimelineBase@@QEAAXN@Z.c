/*
 * XREFs of ?Restart@CTimelineBase@@QEAAXN@Z @ 0x1800231D4
 * Callers:
 *     ?ActivateTimeline@CButton@@AEAAJPEAPEAV?$CTimeline@M@@NMMW4InterpolationMode@@@Z @ 0x180005818 (-ActivateTimeline@CButton@@AEAAJPEAPEAV-$CTimeline@M@@NMMW4InterpolationMode@@@Z.c)
 *     ?RestartTimeline@CLivePreviewTimeline@@QEAAJW4Enum@LivePreviewAnimation@@N@Z @ 0x180005AF0 (-RestartTimeline@CLivePreviewTimeline@@QEAAJW4Enum@LivePreviewAnimation@@N@Z.c)
 *     ??0CTimelineBase@@QEAA@NNNW4InterpolationMode@@@Z @ 0x180023144 (--0CTimelineBase@@QEAA@NNNW4InterpolationMode@@@Z.c)
 *     ?StartAnimation@CTopLevelWindow3D@@QEAAJW4WindowAnimationType@1@@Z @ 0x1800436A0 (-StartAnimation@CTopLevelWindow3D@@QEAAJW4WindowAnimationType@1@@Z.c)
 *     ?OnGlobalTimeUpdated@CWindowIconic@@QEAAJXZ @ 0x180073BBC (-OnGlobalTimeUpdated@CWindowIconic@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CTimelineBase::Restart(CTimelineBase *this, double a2)
{
  *((_QWORD *)this + 6) = *((_QWORD *)this + 4);
  *((double *)this + 3) = a2;
  *((_WORD *)this + 36) = 256;
  CDesktopManager::SetTimelineDirty();
}
