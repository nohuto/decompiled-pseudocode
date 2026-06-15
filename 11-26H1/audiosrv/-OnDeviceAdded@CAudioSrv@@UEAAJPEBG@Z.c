/*
 * XREFs of ?OnDeviceAdded@CAudioSrv@@UEAAJPEBG@Z @ 0x1800D9740
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioSrv::OnDeviceAdded(CAudioSrv *this, const unsigned __int16 *a2)
{
  return CAudioSrv::QueueOnDeviceWorkItem((__int64)this - 72, (__int64)a2, 2u, 0);
}
