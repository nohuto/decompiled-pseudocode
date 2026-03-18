/*
 * XREFs of ?OnChanged@CLayerVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180173EF0
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateBackdropBlurFlagForTreeEffect@CLayerVisual@@AEAAXXZ @ 0x180173F30 (-UpdateBackdropBlurFlagForTreeEffect@CLayerVisual@@AEAAXXZ.c)
 */

__int64 __fastcall CLayerVisual::OnChanged(
        CLayerVisual *a1,
        unsigned int a2,
        int (__fastcall ***a3)(_QWORD, GUID *, _QWORD *))
{
  CLayerVisual::UpdateBackdropBlurFlagForTreeEffect(a1);
  return CVisual::OnChanged((__int64)a1, a2, a3);
}
