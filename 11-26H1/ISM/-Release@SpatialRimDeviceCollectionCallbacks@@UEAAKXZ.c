/*
 * XREFs of ?Release@SpatialRimDeviceCollectionCallbacks@@UEAAKXZ @ 0x1800D7670
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall SpatialRimDeviceCollectionCallbacks::Release(SpatialRimDeviceCollectionCallbacks *this)
{
  return (unsigned int)--*((_DWORD *)this + 6);
}
