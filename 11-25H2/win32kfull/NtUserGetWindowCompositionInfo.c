/*
 * XREFs of NtUserGetWindowCompositionInfo @ 0x140299510
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026E830 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 NtUserGetWindowCompositionInfo()
{
  ULONG v0; // eax

  MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000, 19003);
  v0 = RtlNtStatusToDosError(-1073741816);
  UserSetLastError(v0);
  return 0LL;
}
