/*
 * XREFs of ?GetNewInputSourceId@SpatialRimDeviceCollection@@UEAAKXZ @ 0x1800D5D00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall SpatialRimDeviceCollection::GetNewInputSourceId(SpatialRimDeviceCollection *this)
{
  return MPCInputInfoHelper::GetNextSpectrumId();
}
