/*
 * XREFs of HUBDSM_PurgingDeviceIoOnDetachInConfigured @ 0x1400234F0
 * Callers:
 *     <none>
 * Callees:
 *     HUBPDO_NotifyDeviceDisconnected @ 0x140019864 (HUBPDO_NotifyDeviceDisconnected.c)
 *     HUBUCX_PurgeDeviceIoUsingUCXIoctl @ 0x140028AB8 (HUBUCX_PurgeDeviceIoUsingUCXIoctl.c)
 */

__int64 __fastcall HUBDSM_PurgingDeviceIoOnDetachInConfigured(__int64 a1)
{
  __int64 v1; // rbx

  v1 = *(_QWORD *)(a1 + 960);
  HUBPDO_NotifyDeviceDisconnected(v1);
  HUBUCX_PurgeDeviceIoUsingUCXIoctl(v1);
  return 1000LL;
}
