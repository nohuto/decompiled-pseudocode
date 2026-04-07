/*
 * XREFs of McGenEventWrite_EtwEventWriteTransfer @ 0x18006E69C
 * Callers:
 *     ?ProcessAnimationTick@CDesktopManager@@CAJPEAT_LARGE_INTEGER@@0PEA_N@Z @ 0x180008980 (-ProcessAnimationTick@CDesktopManager@@CAJPEAT_LARGE_INTEGER@@0PEA_N@Z.c)
 *     ?AdvanceTimelines@CDesktopManager@@AEAAXN@Z @ 0x180008BF0 (-AdvanceTimelines@CDesktopManager@@AEAAXN@Z.c)
 *     ?ForceUpdateScene@CWindowList@@QEAAJXZ @ 0x180016C80 (-ForceUpdateScene@CWindowList@@QEAAJXZ.c)
 *     ?StartAnimation@CLoginTransition@@QEAAJHPEAVCVisual@@0_K@Z @ 0x18002246C (-StartAnimation@CLoginTransition@@QEAAJHPEAVCVisual@@0_K@Z.c)
 *     ?_CleanupAnimation@CLoginTransition@@AEAAXXZ @ 0x180022B18 (-_CleanupAnimation@CLoginTransition@@AEAAXXZ.c)
 *     ?ProcessSnapshotOnVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@AEBUtagRECT@@@Z @ 0x180023514 (-ProcessSnapshotOnVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@AEBUtagRECT@@@Z.c)
 *     ?NotifyTouchDrag@CTouchDragVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x18002D6B0 (-NotifyTouchDrag@CTouchDragVisual@@QEAAJPEBUtagPOINT@@@Z.c)
 *     ?StartDown@CDirectTouchVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@W4DWM_SHOWCONTACT@@@Z @ 0x18003031C (-StartDown@CDirectTouchVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@W4DWM_SHOWCONTACT@@@Z.c)
 *     ?StopDownTimeline@CDirectTouchVisual@@IEAAXXZ @ 0x180030758 (-StopDownTimeline@CDirectTouchVisual@@IEAAXXZ.c)
 *     ?LoadTheme@CDesktopManager@@AEAAJXZ @ 0x180030B7C (-LoadTheme@CDesktopManager@@AEAAJXZ.c)
 *     ?OnWindowArrangementContinue@CWindowArrangementTransition@@QEAAJAEBUtagRECT@@@Z @ 0x180038C1C (-OnWindowArrangementContinue@CWindowArrangementTransition@@QEAAJAEBUtagRECT@@@Z.c)
 *     ?Activate@CLivePreview@@QEAAJXZ @ 0x180045718 (-Activate@CLivePreview@@QEAAJXZ.c)
 *     ?DeActivate@CLivePreview@@QEAAJ_N@Z @ 0x180045A38 (-DeActivate@CLivePreview@@QEAAJ_N@Z.c)
 *     ?_EnsureCVIResource@CTransitionWindowSnapshot@@AEAAJPEBUtagRECT@@@Z @ 0x180051944 (-_EnsureCVIResource@CTransitionWindowSnapshot@@AEAAJPEBUtagRECT@@@Z.c)
 *     ?OnNotifyRoundTripReply@CLivePreview@@QEAA_NI@Z @ 0x18006E4A4 (-OnNotifyRoundTripReply@CLivePreview@@QEAA_NI@Z.c)
 *     ?Stop@CTouchDragVisual@@UEAAXXZ @ 0x180080730 (-Stop@CTouchDragVisual@@UEAAXXZ.c)
 *     ?OnWindowArrangementStart@CWindowArrangementTransition@@QEAAJPEAVCWindowData@@AEBUtagRECT@@@Z @ 0x180087058 (-OnWindowArrangementStart@CWindowArrangementTransition@@QEAAJPEAVCWindowData@@AEBUtagRECT@@@Z.c)
 *     ?OnWindowArrangementEnd@CWindowArrangementTransition@@QEAAXXZ @ 0x18008A0E0 (-OnWindowArrangementEnd@CWindowArrangementTransition@@QEAAXXZ.c)
 *     ?OnWindowCloakChange@CAnimationScheduler@@QEAAJPEBVCWindowData@@_N1PEA_N@Z @ 0x18008F730 (-OnWindowCloakChange@CAnimationScheduler@@QEAAJPEBVCWindowData@@_N1PEA_N@Z.c)
 *     ?DwmEventThreadProc@CDesktopManager@@CAKPEAX@Z @ 0x18008F8D0 (-DwmEventThreadProc@CDesktopManager@@CAKPEAX@Z.c)
 *     McTemplateU0ppd_EtwEventWriteTransfer @ 0x180096A14 (McTemplateU0ppd_EtwEventWriteTransfer.c)
 *     McTemplateU0qdq_EtwEventWriteTransfer @ 0x180096C50 (McTemplateU0qdq_EtwEventWriteTransfer.c)
 *     McTemplateU0jdd_EtwEventWriteTransfer @ 0x180096E4C (McTemplateU0jdd_EtwEventWriteTransfer.c)
 *     McTemplateU0qp_EtwEventWriteTransfer @ 0x1800972A4 (McTemplateU0qp_EtwEventWriteTransfer.c)
 *     McTemplateU0jq_EtwEventWriteTransfer @ 0x1800974E8 (McTemplateU0jq_EtwEventWriteTransfer.c)
 *     McTemplateU0q_EtwEventWriteTransfer @ 0x180097EBC (McTemplateU0q_EtwEventWriteTransfer.c)
 *     McTemplateU0p_EtwEventWriteTransfer @ 0x180097F20 (McTemplateU0p_EtwEventWriteTransfer.c)
 *     McTemplateU0ddddddddddffffqqq_EtwEventWriteTransfer @ 0x1800A5128 (McTemplateU0ddddddddddffffqqq_EtwEventWriteTransfer.c)
 *     McTemplateU0ddqqqqqqp_EtwEventWriteTransfer @ 0x1800A52D8 (McTemplateU0ddqqqqqqp_EtwEventWriteTransfer.c)
 *     McTemplateU0j_EtwEventWriteTransfer @ 0x1800A5D84 (McTemplateU0j_EtwEventWriteTransfer.c)
 *     McTemplateU0ji_EtwEventWriteTransfer @ 0x1800A5DE0 (McTemplateU0ji_EtwEventWriteTransfer.c)
 *     McTemplateU0jqi_EtwEventWriteTransfer @ 0x1800A5E54 (McTemplateU0jqi_EtwEventWriteTransfer.c)
 *     McTemplateU0pdd_EtwEventWriteTransfer @ 0x1800A6570 (McTemplateU0pdd_EtwEventWriteTransfer.c)
 *     McTemplateU0qffff_EtwEventWriteTransfer @ 0x1800A7210 (McTemplateU0qffff_EtwEventWriteTransfer.c)
 *     McTemplateU0qqqp_EtwEventWriteTransfer @ 0x1800A7604 (McTemplateU0qqqp_EtwEventWriteTransfer.c)
 *     McTemplateU0pd_EtwEventWriteTransfer @ 0x1800A8A84 (McTemplateU0pd_EtwEventWriteTransfer.c)
 *     ?NotifyRedirectionShutdown@CDesktopManager@@QEAAJXZ @ 0x1800AD224 (-NotifyRedirectionShutdown@CDesktopManager@@QEAAJXZ.c)
 *     McTemplateU0qqq_EtwEventWriteTransfer @ 0x1800ADD68 (McTemplateU0qqq_EtwEventWriteTransfer.c)
 *     McTemplateU0qq_EtwEventWriteTransfer @ 0x1800B9D18 (McTemplateU0qq_EtwEventWriteTransfer.c)
 *     ?Start@CPressTapVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@0@Z @ 0x1800BCA24 (-Start@CPressTapVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@0@Z.c)
 *     ?Stop@CPressTapVisual@@UEAAXXZ @ 0x1800BCDA0 (-Stop@CPressTapVisual@@UEAAXXZ.c)
 *     McTemplateU0pp_EtwEventWriteTransfer @ 0x1800C5CD4 (McTemplateU0pp_EtwEventWriteTransfer.c)
 *     McTemplateU0z_EtwEventWriteTransfer @ 0x1800C5D4C (McTemplateU0z_EtwEventWriteTransfer.c)
 *     McTemplateU0qd_EtwEventWriteTransfer @ 0x1800CE1F4 (McTemplateU0qd_EtwEventWriteTransfer.c)
 *     McTemplateU0tttt_EtwEventWriteTransfer @ 0x1800CE274 (McTemplateU0tttt_EtwEventWriteTransfer.c)
 *     ?Start@CTetherVisual@@QEAAJAEBUtagPOINT@@0@Z @ 0x1800CE9F0 (-Start@CTetherVisual@@QEAAJAEBUtagPOINT@@0@Z.c)
 *     ?Stop@CTetherVisual@@UEAAXXZ @ 0x1800CEAA0 (-Stop@CTetherVisual@@UEAAXXZ.c)
 *     McTemplateU0pq_EtwEventWriteTransfer @ 0x1800D0B7C (McTemplateU0pq_EtwEventWriteTransfer.c)
 *     McTemplateU0pddddddd_EtwEventWriteTransfer @ 0x1800D30E0 (McTemplateU0pddddddd_EtwEventWriteTransfer.c)
 *     McTemplateU0pddddq_EtwEventWriteTransfer @ 0x1800D31C4 (McTemplateU0pddddq_EtwEventWriteTransfer.c)
 *     McTemplateU0pdddd_EtwEventWriteTransfer @ 0x1800D9280 (McTemplateU0pdddd_EtwEventWriteTransfer.c)
 *     ?ForceDisconnectClientNode@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x1800E4430 (-ForceDisconnectClientNode@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     McTemplateU0pddddd_EtwEventWriteTransfer @ 0x1800E9368 (McTemplateU0pddddd_EtwEventWriteTransfer.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall McGenEventWrite_EtwEventWriteTransfer(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned __int16 *v5; // r10
  int v6; // eax
  int v7; // r9d

  v5 = (unsigned __int16 *)a1[1];
  v6 = 0;
  if ( v5 )
  {
    *(_QWORD *)a5 = v5;
    v6 = 2;
    v7 = *v5;
  }
  else
  {
    *(_QWORD *)a5 = 0LL;
    v7 = 0;
  }
  *(_DWORD *)(a5 + 8) = v7;
  *(_DWORD *)(a5 + 12) = v6;
  return EtwEventWriteTransfer(*a1, a2);
}
