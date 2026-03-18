/*
 * XREFs of ?GetWindowCompositedDpiContext@@YAKPEBUtagWND@@@Z @ 0x140031410
 * Callers:
 *     IsSmallerThanScreen @ 0x14000FB4C (IsSmallerThanScreen.c)
 *     CalcWindowFullScreen @ 0x140010674 (CalcWindowFullScreen.c)
 *     GetMonitorRectForWindow @ 0x1400313D4 (GetMonitorRectForWindow.c)
 *     xxxInitSendValidateMinMaxInfoEx @ 0x14003144C (xxxInitSendValidateMinMaxInfoEx.c)
 *     GetMaxTrackSizeForWindow @ 0x14003289C (GetMaxTrackSizeForWindow.c)
 *     ?CalcVirtualScreenClipRegion@@YAXPEAUHRGN__@@PEAUtagWND@@@Z @ 0x140040BD0 (-CalcVirtualScreenClipRegion@@YAXPEAUHRGN__@@PEAUtagWND@@@Z.c)
 *     xxxBroadcastMessageEx @ 0x140092830 (xxxBroadcastMessageEx.c)
 *     WindowMargins::CWindowMarginProp::CalculateWindowMargins @ 0x1400A7100 (WindowMargins--CWindowMarginProp--CalculateWindowMargins.c)
 *     _anonymous_namespace_::xxxNormalizeRect_0 @ 0x1401623E8 (_anonymous_namespace_--xxxNormalizeRect_0.c)
 *     ?MNGetPopupBoundsRect@@YAXV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagMONITOR@@PEAUtagRECT@@H@Z @ 0x140175E24 (-MNGetPopupBoundsRect@@YAXV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagMONITOR@@PEAUtagRECT@@H@Z.c)
 *     GetMonitorMenuRectForWindow @ 0x140175FCC (GetMonitorMenuRectForWindow.c)
 *     FindBestPos @ 0x14017604C (FindBestPos.c)
 *     CheckFullScreen @ 0x1401D954C (CheckFullScreen.c)
 *     ?GetMonitorMaxArea@@YA?AUtagRECT@@PEBUtagWND@@PEAUtagMONITOR@@@Z @ 0x1401E02A0 (-GetMonitorMaxArea@@YA-AUtagRECT@@PEBUtagWND@@PEAUtagMONITOR@@@Z.c)
 *     GetMonitorWorkRectForWindow @ 0x1401EFBA4 (GetMonitorWorkRectForWindow.c)
 *     GetScreenRectForWindow @ 0x14020E1E0 (GetScreenRectForWindow.c)
 *     ?xxxForceUpdateWindowTreeDpiAwarenessContext@@YAXPEAUtagWND@@KH@Z @ 0x140218B1C (-xxxForceUpdateWindowTreeDpiAwarenessContext@@YAXPEAUtagWND@@KH@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetWindowCompositedDpiContext(const struct tagWND *a1)
{
  unsigned int v1; // r8d
  __int64 v2; // rax

  v1 = 18;
  v2 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 488LL);
  if ( v2 && (*(_DWORD *)(**(_QWORD **)(v2 + 8) + 64LL) & 1) != 0 )
    return *(unsigned int *)(*((_QWORD *)a1 + 5) + 288LL);
  return v1;
}
