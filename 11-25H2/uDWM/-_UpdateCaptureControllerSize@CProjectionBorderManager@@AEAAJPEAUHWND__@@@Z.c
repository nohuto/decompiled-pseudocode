/*
 * XREFs of ?_UpdateCaptureControllerSize@CProjectionBorderManager@@AEAAJPEAUHWND__@@@Z @ 0x1800C4CC4
 * Callers:
 *     ?OnWindowSizeUpdated@CProjectionBorderManager@@UEAAJPEAVCWindowData@@@Z @ 0x180023F40 (-OnWindowSizeUpdated@CProjectionBorderManager@@UEAAJPEAVCWindowData@@@Z.c)
 * Callees:
 *     ??$UpdateCaptureControllerSize@AEAPEAUHWND__@@@WindowFrameLoggingTelemetry@@SAXAEAPEAUHWND__@@@Z @ 0x1800BD838 (--$UpdateCaptureControllerSize@AEAPEAUHWND__@@@WindowFrameLoggingTelemetry@@SAXAEAPEAUHWND__@@@Z.c)
 */

__int64 __fastcall CProjectionBorderManager::_UpdateCaptureControllerSize(struct _RTL_GENERIC_TABLE *this, __int64 a2)
{
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = a2;
  WindowFrameLoggingTelemetry::UpdateCaptureControllerSize<HWND__ * &>(&v5);
  return CProjectionBorderManager::_UpdateCaptureControllerProperty(
           this,
           (__int64 (__fastcall *)(struct _RTL_GENERIC_TABLE *, __int64, _QWORD))CProjectionBorderManager::_SendBoundsToCaptureControllerFromWindow,
           a2);
}
