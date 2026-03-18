/*
 * XREFs of ScsiLogSenseRequest @ 0x140010E30
 * Callers:
 *     ScsiToNVMe @ 0x140002FA0 (ScsiToNVMe.c)
 * Callees:
 *     NVMeSetSenseData @ 0x140002E20 (NVMeSetSenseData.c)
 *     LogSenseInformationalExceptions @ 0x14001CD6C (LogSenseInformationalExceptions.c)
 *     LogSenseSupportedLogPages @ 0x14001CF20 (LogSenseSupportedLogPages.c)
 *     LogSenseTemperature @ 0x14001CFC8 (LogSenseTemperature.c)
 */

__int64 __fastcall ScsiLogSenseRequest(__int64 a1, __int64 a2, _BYTE *a3)
{
  char v4; // dl
  char v5; // dl

  if ( (a3[1] & 1) != 0 || (v4 = a3[2], (v4 & 0xC0) != 0x40) || (v5 = v4 & 0x3F) != 0 && v5 != 13 && v5 != 47 || a3[3] )
  {
    NVMeSetSenseData(a2, 6, 5, 0x24u);
    return 3238002694LL;
  }
  else if ( v5 )
  {
    if ( v5 == 13 )
      return LogSenseTemperature(a1, a2);
    else
      return LogSenseInformationalExceptions(a1, a2);
  }
  else
  {
    return LogSenseSupportedLogPages(a1, a2);
  }
}
