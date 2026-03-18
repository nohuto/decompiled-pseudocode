/*
 * XREFs of IoControlPnpDeviceActionQueue @ 0x1404D7784
 * Callers:
 *     WmipRegistrationWorker @ 0x140A0B650 (WmipRegistrationWorker.c)
 *     PopDirectedDripsInitializeBroadcast @ 0x140AC54E8 (PopDirectedDripsInitializeBroadcast.c)
 *     IoDiagTraceDevicesRundown @ 0x140ADDEB0 (IoDiagTraceDevicesRundown.c)
 * Callees:
 *     PnpUnlockDeviceActionQueue @ 0x1404D77A4 (PnpUnlockDeviceActionQueue.c)
 *     PnpLockDeviceActionQueue @ 0x1404D783C (PnpLockDeviceActionQueue.c)
 */

__int64 __fastcall IoControlPnpDeviceActionQueue(char a1)
{
  if ( a1 )
    return PnpLockDeviceActionQueue();
  else
    return PnpUnlockDeviceActionQueue();
}
