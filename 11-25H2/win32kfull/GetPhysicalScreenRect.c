/*
 * XREFs of GetPhysicalScreenRect @ 0x1401E2F60
 * Callers:
 *     xxxCreateDesktopEx @ 0x140166938 (xxxCreateDesktopEx.c)
 *     ?xxxDrawDragRectEx@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I1@Z @ 0x140218274 (-xxxDrawDragRectEx@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I1@Z.c)
 *     ?xxxMouseEventDirect@@YAHKKKK_K00H@Z @ 0x140237B0C (-xxxMouseEventDirect@@YAHKKKK_K00H@Z.c)
 *     ?xxxInitializeMoveSizeData@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@IK@Z @ 0x1402507C4 (-xxxInitializeMoveSizeData@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@IK@Z.c)
 *     zzzResetSharedDesktops @ 0x1402557F0 (zzzResetSharedDesktops.c)
 *     xxxSnapWindow @ 0x140266650 (xxxSnapWindow.c)
 *     CreatePseudoDigitizerDevice @ 0x14027BC78 (CreatePseudoDigitizerDevice.c)
 *     GetHimetricScaleForMonitor @ 0x1402842C0 (GetHimetricScaleForMonitor.c)
 *     xxxRemoteConsoleShadowStart @ 0x1402B8C40 (xxxRemoteConsoleShadowStart.c)
 * Callees:
 *     <none>
 */

_OWORD *__fastcall GetPhysicalScreenRect(_OWORD *a1, __int64 a2)
{
  __int128 v3; // xmm0
  _OWORD *result; // rax

  v3 = *(_OWORD *)(**(_QWORD **)(W32GetUserSessionState(a1, a2) + 56968) + 24LL);
  result = a1;
  *a1 = v3;
  return result;
}
