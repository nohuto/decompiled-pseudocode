/*
 * XREFs of ?GetSpatialResourceRevocationTime@CSaDeviceProxy@@UEAAJPEA_J@Z @ 0x1800FDEC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CSaDeviceProxy::GetSpatialResourceRevocationTime(CSaDeviceProxy *this, __int64 *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 12) + 128LL))(*((_QWORD *)this + 12), a2);
}
