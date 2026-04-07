/*
 * XREFs of ?SetWindowInfos@CCaptureControllerProxy@@QEAAJPEBU_DWMCaptureWindowInformation@@I@Z @ 0x18009BEB4
 * Callers:
 *     ?OnWindowVisibilityUpdated@CCaptureManager@@UEAAJPEAVCWindowData@@@Z @ 0x180038F30 (-OnWindowVisibilityUpdated@CCaptureManager@@UEAAJPEAVCWindowData@@@Z.c)
 *     ?OnWindowSizeUpdated@CCaptureManager@@UEAAJPEAVCWindowData@@@Z @ 0x180039570 (-OnWindowSizeUpdated@CCaptureManager@@UEAAJPEAVCWindowData@@@Z.c)
 *     ?OnWindowOffsetUpdated@CCaptureManager@@UEAAJPEAVCWindowData@@@Z @ 0x180039710 (-OnWindowOffsetUpdated@CCaptureManager@@UEAAJPEAVCWindowData@@@Z.c)
 *     ?OnWindowZOrderUpdated@CCaptureManager@@UEAAJPEAVCWindowData@@@Z @ 0x180069330 (-OnWindowZOrderUpdated@CCaptureManager@@UEAAJPEAVCWindowData@@@Z.c)
 *     ?OnWindowClosed@CCaptureManager@@UEAAJPEAVCWindowData@@@Z @ 0x18007EC90 (-OnWindowClosed@CCaptureManager@@UEAAJPEAVCWindowData@@@Z.c)
 *     ?AddRemoveWindowToFilteredDisplayCapture@CCaptureManager@@UEAAJPEAUHWND__@@HAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x18009E6A0 (-AddRemoveWindowToFilteredDisplayCapture@CCaptureManager@@UEAAJPEAUHWND__@@HAEBUDWM_CAPTURE_TOKE.c)
 *     ?_AddRemoveWindowToFilteredDisplayCapture@CCaptureManager@@AEAAJPEAUHWND__@@_NPEAUCAPTURE_FILTERED_DISPLAY_MAP_ENTRY@1@@Z @ 0x1800A41D0 (-_AddRemoveWindowToFilteredDisplayCapture@CCaptureManager@@AEAAJPEAUHWND__@@_NPEAUCAPTURE_FILTER.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CCaptureControllerProxy::SetWindowInfos(
        CCaptureControllerProxy *this,
        const struct _DWMCaptureWindowInformation *a2,
        unsigned int a3)
{
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD, const struct _DWMCaptureWindowInformation *, _QWORD))(**((_QWORD **)this + 2) + 608LL))(
           *((_QWORD *)this + 2),
           *((unsigned int *)this + 6),
           a2,
           a3);
}
