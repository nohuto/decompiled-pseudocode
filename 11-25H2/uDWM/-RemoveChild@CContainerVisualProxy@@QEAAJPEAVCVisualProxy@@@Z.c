/*
 * XREFs of ?RemoveChild@CContainerVisualProxy@@QEAAJPEAVCVisualProxy@@@Z @ 0x1800071D4
 * Callers:
 *     ?CompNodeDisconnectChild@VisualCollection@@AEAAJPEAVCVisual@@@Z @ 0x180005B58 (-CompNodeDisconnectChild@VisualCollection@@AEAAJPEAVCVisual@@@Z.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x1800065C4 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?SendUnlinkVisualCommand@VisualCollection@@AEAAJPEAVCVisualProxy@@@Z @ 0x1800071F4 (-SendUnlinkVisualCommand@VisualCollection@@AEAAJPEAVCVisualProxy@@@Z.c)
 *     ?ReevaluateSecondaryWindow@CapturedWindowRepresentation@@QEAAJPEAVCWindowData@@@Z @ 0x180025224 (-ReevaluateSecondaryWindow@CapturedWindowRepresentation@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?OnWindowZOrderUpdated@CProjectionBorderManager@@UEAAJPEAVCWindowData@@@Z @ 0x180075770 (-OnWindowZOrderUpdated@CProjectionBorderManager@@UEAAJPEAVCWindowData@@@Z.c)
 *     ?OnWindowClosed@CProjectionBorderManager@@UEAAJPEAVCWindowData@@@Z @ 0x1800902E0 (-OnWindowClosed@CProjectionBorderManager@@UEAAJPEAVCWindowData@@@Z.c)
 *     ?ForceRemoveSecondaryWindow@CapturedWindowRepresentation@@QEAAJPEAVCWindowData@@@Z @ 0x1800A9314 (-ForceRemoveSecondaryWindow@CapturedWindowRepresentation@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?AddRemoveWindowToFilteredDisplayCapture@CProjectionBorderManager@@UEAAJPEAUHWND__@@HAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800BDD80 (-AddRemoveWindowToFilteredDisplayCapture@CProjectionBorderManager@@UEAAJPEAUHWND__@@HAEBUDWM_CAP.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CContainerVisualProxy::RemoveChild(CContainerVisualProxy *this, struct CVisualProxy *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 3) + 136LL))(
           *((_QWORD *)this + 3),
           *((_QWORD *)a2 + 3));
}
