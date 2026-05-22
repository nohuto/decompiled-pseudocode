/*
 * XREFs of ?OnTargetWithFocusChanged@ControllerProcessor@@UEAAJPEAUIInputTarget@@0@Z @ 0x1800874E0
 * Callers:
 *     <none>
 * Callees:
 *     ?StopAutoRepeatTimer@ControllerProcessor@@AEAAJXZ @ 0x180069D58 (-StopAutoRepeatTimer@ControllerProcessor@@AEAAJXZ.c)
 *     ?UpdateFocusedProcessId@ControllerProcessor@@AEAAXPEAUIInputTarget@@@Z @ 0x1801809D8 (-UpdateFocusedProcessId@ControllerProcessor@@AEAAXPEAUIInputTarget@@@Z.c)
 */

__int64 __fastcall ControllerProcessor::OnTargetWithFocusChanged(
        ControllerProcessor *this,
        struct IInputTarget *a2,
        struct IInputTarget *a3)
{
  ControllerProcessor::StopAutoRepeatTimer((ControllerProcessor *)((char *)this - 8));
  ControllerProcessor::UpdateFocusedProcessId((ControllerProcessor *)((char *)this - 8), a3);
  return NonPointerProcessor::OnTargetWithFocusChanged(this, a2, a3);
}
