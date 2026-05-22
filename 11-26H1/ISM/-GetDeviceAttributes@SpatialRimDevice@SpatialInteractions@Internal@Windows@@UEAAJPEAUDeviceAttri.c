/*
 * XREFs of ?GetDeviceAttributes@SpatialRimDevice@SpatialInteractions@Internal@Windows@@UEAAJPEAUDeviceAttributes@234@@Z @ 0x1800DFF40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Internal::SpatialInteractions::SpatialRimDevice::GetDeviceAttributes(
        Windows::Internal::SpatialInteractions::SpatialRimDevice *this,
        struct Windows::Internal::SpatialInteractions::DeviceAttributes *a2)
{
  *(_DWORD *)a2 = *((_DWORD *)this + 13);
  *((_WORD *)a2 + 2) = *((_WORD *)this + 28);
  return 0LL;
}
