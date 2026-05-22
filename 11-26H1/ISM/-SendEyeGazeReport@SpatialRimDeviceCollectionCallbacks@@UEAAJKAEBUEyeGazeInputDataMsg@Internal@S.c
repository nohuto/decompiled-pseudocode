/*
 * XREFs of ?SendEyeGazeReport@SpatialRimDeviceCollectionCallbacks@@UEAAJKAEBUEyeGazeInputDataMsg@Internal@Spatial@Input@UI@Windows@@@Z @ 0x1800D79A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall SpatialRimDeviceCollectionCallbacks::SendEyeGazeReport(
        SpatialRimDeviceCollectionCallbacks *this,
        __int64 a2,
        const struct Windows::UI::Input::Spatial::Internal::EyeGazeInputDataMsg *a3)
{
  return (*(__int64 (__fastcall **)(_QWORD, __int64, const struct Windows::UI::Input::Spatial::Internal::EyeGazeInputDataMsg *))(**((_QWORD **)this + 2) + 176LL))(
           *((_QWORD *)this + 2),
           a2,
           a3);
}
