/*
 * XREFs of RaidSecondaryDumpDeregister @ 0x1400C49D4
 * Callers:
 *     RaidDeleteUnit @ 0x1400459EC (RaidDeleteUnit.c)
 *     RaUnitDeviceUsageNotificationIrp @ 0x14009A788 (RaUnitDeviceUsageNotificationIrp.c)
 *     DllUnload @ 0x1400ADF30 (DllUnload.c)
 * Callees:
 *     <none>
 */

__int64 RaidSecondaryDumpDeregister()
{
  __int64 result; // rax

  if ( SecondaryDumpCallbackRegistered
    && KeDeregisterBugCheckReasonCallback((PKBUGCHECK_REASON_CALLBACK_RECORD)&WPP_MAIN_CB.Reserved) != 1 )
  {
    return 3221225473LL;
  }
  SecondaryDumpCallbackRegistered = 0;
  result = 0LL;
  BootDriveExtension = 0LL;
  return result;
}
