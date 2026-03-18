/*
 * XREFs of Controller_LogRestoreTimeout @ 0x1400421E8
 * Callers:
 *     Controller_D0EntryRestoreState @ 0x140039BB0 (Controller_D0EntryRestoreState.c)
 * Callees:
 *     WPP_RECORDER_SF_I @ 0x1400324D4 (WPP_RECORDER_SF_I.c)
 *     MicrosoftTelemetryAssertTriggeredArgsMsgKM @ 0x1400578F0 (MicrosoftTelemetryAssertTriggeredArgsMsgKM.c)
 */

__int64 __fastcall Controller_LogRestoreTimeout(__int64 a1, unsigned int a2, int a3)
{
  unsigned int v3; // edi
  __int64 v5; // rdx

  v3 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 2;
    WPP_RECORDER_SF_I(*(_QWORD *)(a1 + 72), a2, a3, 112);
  }
  if ( *(_DWORD *)(a1 + 644) == 1 )
    v5 = *(unsigned __int16 *)(a1 + 652) | (*(unsigned __int16 *)(a1 + 648) << 16);
  else
    v5 = 0LL;
  return MicrosoftTelemetryAssertTriggeredArgsMsgKM(
           "USBXHCI.SYS",
           v5,
           v3,
           "Controller Restore State failed to complete");
}
