/*
 * XREFs of ?SetWindowInfos@CCaptureControllerProxy@@QEAAJPEBU_DWMCaptureWindowInformation@@I@Z @ 0x1800A8D0C
 * Callers:
 *     ?OnWindowSizeUpdated@CProjectionBorderManager@@UEAAJPEAVCWindowData@@@Z @ 0x180023F40 (-OnWindowSizeUpdated@CProjectionBorderManager@@UEAAJPEAVCWindowData@@@Z.c)
 *     ?OnWindowOffsetUpdated@CProjectionBorderManager@@UEAAJPEAVCWindowData@@@Z @ 0x1800240E0 (-OnWindowOffsetUpdated@CProjectionBorderManager@@UEAAJPEAVCWindowData@@@Z.c)
 *     ?OnWindowZOrderUpdated@CProjectionBorderManager@@UEAAJPEAVCWindowData@@@Z @ 0x180075770 (-OnWindowZOrderUpdated@CProjectionBorderManager@@UEAAJPEAVCWindowData@@@Z.c)
 *     ?OnWindowVisibilityUpdated@CProjectionBorderManager@@UEAAJPEAVCWindowData@@@Z @ 0x180086700 (-OnWindowVisibilityUpdated@CProjectionBorderManager@@UEAAJPEAVCWindowData@@@Z.c)
 *     ?OnWindowClosed@CProjectionBorderManager@@UEAAJPEAVCWindowData@@@Z @ 0x1800902E0 (-OnWindowClosed@CProjectionBorderManager@@UEAAJPEAVCWindowData@@@Z.c)
 *     ?AddRemoveWindowToFilteredDisplayCapture@CProjectionBorderManager@@UEAAJPEAUHWND__@@HAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800BDD80 (-AddRemoveWindowToFilteredDisplayCapture@CProjectionBorderManager@@UEAAJPEAUHWND__@@HAEBUDWM_CAP.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CCaptureControllerProxy::SetWindowInfos(
        CCaptureControllerProxy *this,
        const struct _DWMCaptureWindowInformation *a2,
        unsigned int a3)
{
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD, const struct _DWMCaptureWindowInformation *, _QWORD))(**(_QWORD **)(*((_QWORD *)this + 2) + 16LL) + 784LL))(
           *(_QWORD *)(*((_QWORD *)this + 2) + 16LL),
           *(unsigned int *)(*((_QWORD *)this + 2) + 24LL),
           a2,
           a3);
}
