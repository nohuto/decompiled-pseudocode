/*
 * XREFs of ?CovertLargeIntegerToDwmCaptureToken@CWindowList@@AEAA?AUDWM_CAPTURE_TOKEN@@AEBT_LARGE_INTEGER@@@Z @ 0x18009A3B4
 * Callers:
 *     ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x1800912D0 (-ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall CWindowList::CovertLargeIntegerToDwmCaptureToken(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  *a2 = *a3;
  return a2;
}
