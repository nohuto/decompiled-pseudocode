/*
 * XREFs of IoControlPnpDeviceActionQueue @ 0x1404D0F4C
 * Callers:
 *     WmipRegistrationWorker @ 0x140A0A880 (WmipRegistrationWorker.c)
 *     PopDirectedDripsInitializeBroadcast @ 0x140AC7158 (PopDirectedDripsInitializeBroadcast.c)
 *     IoDiagTraceDevicesRundown @ 0x140ADAC20 (IoDiagTraceDevicesRundown.c)
 * Callees:
 *     PnpUnlockDeviceActionQueue @ 0x1404D0F6C (PnpUnlockDeviceActionQueue.c)
 *     PnpLockDeviceActionQueue @ 0x1404D1004 (PnpLockDeviceActionQueue.c)
 */

__int64 __fastcall IoControlPnpDeviceActionQueue(char a1)
{
  if ( a1 )
    return PnpLockDeviceActionQueue();
  else
    return PnpUnlockDeviceActionQueue();
}
