/*
 * XREFs of HUBDSM_NotifyingDeviceDisconnectedOnDetachWithSpecialFile @ 0x140023400
 * Callers:
 *     <none>
 * Callees:
 *     HUBPDO_NotifyDeviceDisconnected @ 0x140019864 (HUBPDO_NotifyDeviceDisconnected.c)
 */

__int64 __fastcall HUBDSM_NotifyingDeviceDisconnectedOnDetachWithSpecialFile(__int64 a1)
{
  HUBPDO_NotifyDeviceDisconnected(*(_QWORD *)(a1 + 960));
  return 4077LL;
}
