/*
 * XREFs of ?_GetHostWindowHandleForProxyWindow@CProjectionBorderManager@@AEAAPEAUHWND__@@PEAVCWindowData@@@Z @ 0x1800C4120
 * Callers:
 *     ?OnWindowSizeUpdated@CProjectionBorderManager@@UEAAJPEAVCWindowData@@@Z @ 0x180023F40 (-OnWindowSizeUpdated@CProjectionBorderManager@@UEAAJPEAVCWindowData@@@Z.c)
 *     ?OnWindowMonitorChanged@CProjectionBorderManager@@UEAAJPEAVCWindowData@@@Z @ 0x180069000 (-OnWindowMonitorChanged@CProjectionBorderManager@@UEAAJPEAVCWindowData@@@Z.c)
 *     ?OnWindowTransformUpdated@CProjectionBorderManager@@UEAAJPEAVCWindowData@@@Z @ 0x1800752E0 (-OnWindowTransformUpdated@CProjectionBorderManager@@UEAAJPEAVCWindowData@@@Z.c)
 *     ?OnWindowMinimized@CProjectionBorderManager@@UEAAJPEAVCWindowData@@@Z @ 0x180086650 (-OnWindowMinimized@CProjectionBorderManager@@UEAAJPEAVCWindowData@@@Z.c)
 *     ?OnWindowVisibilityUpdated@CProjectionBorderManager@@UEAAJPEAVCWindowData@@@Z @ 0x180086700 (-OnWindowVisibilityUpdated@CProjectionBorderManager@@UEAAJPEAVCWindowData@@@Z.c)
 *     ?OnWindowRestored@CProjectionBorderManager@@UEAAJPEAVCWindowData@@@Z @ 0x180093DF0 (-OnWindowRestored@CProjectionBorderManager@@UEAAJPEAVCWindowData@@@Z.c)
 *     ?OnWindowStyleChanged@CProjectionBorderManager@@UEAAJPEAVCWindowData@@@Z @ 0x1800BFFE0 (-OnWindowStyleChanged@CProjectionBorderManager@@UEAAJPEAVCWindowData@@@Z.c)
 *     ?_UpdateCaptureControllerDefaultSDRBoost@CProjectionBorderManager@@AEAAJPEAUHWND__@@@Z @ 0x1800C4A2C (-_UpdateCaptureControllerDefaultSDRBoost@CProjectionBorderManager@@AEAAJPEAUHWND__@@@Z.c)
 * Callees:
 *     <none>
 */

HWND __fastcall CProjectionBorderManager::_GetHostWindowHandleForProxyWindow(
        CProjectionBorderManager *this,
        struct CWindowData *a2)
{
  __int64 v2; // rcx
  HWND result; // rax

  v2 = *((_QWORD *)a2 + 82);
  result = (HWND)*((_QWORD *)a2 + 5);
  if ( v2 )
    return *(HWND *)(v2 + 40);
  return result;
}
