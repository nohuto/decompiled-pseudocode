/*
 * XREFs of ADAPTER_DISPLAY_DdiCreatePeriodicFrameNotification @ 0x140063730
 * Callers:
 *     <none>
 * Callees:
 *     ?DdiCreatePeriodicFrameNotification@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_CREATEPERIODICFRAMENOTIFICATION@@@Z @ 0x140415790 (-DdiCreatePeriodicFrameNotification@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_CREATEPERIODICFRAMENOTIFI.c)
 */

__int64 __fastcall ADAPTER_DISPLAY_DdiCreatePeriodicFrameNotification(
        ADAPTER_DISPLAY *a1,
        struct _DXGKARG_CREATEPERIODICFRAMENOTIFICATION *a2)
{
  return ADAPTER_DISPLAY::DdiCreatePeriodicFrameNotification(a1, a2);
}
