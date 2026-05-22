/*
 * XREFs of ?AddRef@SpatialRimDeviceCollectionCallbacks@@UEAAKXZ @ 0x1800D4DE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall SpatialRimDeviceCollectionCallbacks::AddRef(SpatialRimDeviceCollectionCallbacks *this)
{
  return (unsigned int)++*((_DWORD *)this + 6);
}
