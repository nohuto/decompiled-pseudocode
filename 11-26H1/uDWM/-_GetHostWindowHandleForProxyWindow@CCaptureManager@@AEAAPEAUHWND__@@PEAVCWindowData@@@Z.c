/*
 * XREFs of ?_GetHostWindowHandleForProxyWindow@CCaptureManager@@AEAAPEAUHWND__@@PEAVCWindowData@@@Z @ 0x1800A53AC
 * Callers:
 *     ?OnWindowVisibilityUpdated@CCaptureManager@@UEAAJPEAVCWindowData@@@Z @ 0x180038F30 (-OnWindowVisibilityUpdated@CCaptureManager@@UEAAJPEAVCWindowData@@@Z.c)
 *     ?OnWindowSizeUpdated@CCaptureManager@@UEAAJPEAVCWindowData@@@Z @ 0x180039570 (-OnWindowSizeUpdated@CCaptureManager@@UEAAJPEAVCWindowData@@@Z.c)
 *     ?OnWindowStyleChanged@CCaptureManager@@UEAAJPEAVCWindowData@@@Z @ 0x1800596E0 (-OnWindowStyleChanged@CCaptureManager@@UEAAJPEAVCWindowData@@@Z.c)
 *     ?OnWindowMonitorChanged@CCaptureManager@@UEAAJPEAVCWindowData@@@Z @ 0x180065CC0 (-OnWindowMonitorChanged@CCaptureManager@@UEAAJPEAVCWindowData@@@Z.c)
 *     ?OnWindowTransformUpdated@CCaptureManager@@UEAAJPEAVCWindowData@@@Z @ 0x180075160 (-OnWindowTransformUpdated@CCaptureManager@@UEAAJPEAVCWindowData@@@Z.c)
 *     ?OnWindowMinimized@CCaptureManager@@UEAAJPEAVCWindowData@@@Z @ 0x180076610 (-OnWindowMinimized@CCaptureManager@@UEAAJPEAVCWindowData@@@Z.c)
 *     ?OnWindowRestored@CCaptureManager@@UEAAJPEAVCWindowData@@@Z @ 0x1800A0C90 (-OnWindowRestored@CCaptureManager@@UEAAJPEAVCWindowData@@@Z.c)
 *     ?_UpdateCaptureControllerDefaultSDRBoost@CCaptureManager@@AEAAJPEAUHWND__@@@Z @ 0x1800A60F8 (-_UpdateCaptureControllerDefaultSDRBoost@CCaptureManager@@AEAAJPEAUHWND__@@@Z.c)
 * Callees:
 *     <none>
 */

HWND __fastcall CCaptureManager::_GetHostWindowHandleForProxyWindow(CCaptureManager *this, struct CWindowData *a2)
{
  __int64 v2; // rcx
  HWND result; // rax

  v2 = *((_QWORD *)a2 + 82);
  result = (HWND)*((_QWORD *)a2 + 5);
  if ( v2 )
    return *(HWND *)(v2 + 40);
  return result;
}
