/*
 * XREFs of _RegisterTasklist @ 0x1402B6E6C
 * Callers:
 *     NtUserRegisterTasklist @ 0x14029D020 (NtUserRegisterTasklist.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026E830 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall RegisterTasklist(__int64 a1)
{
  MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000, 824);
  _InterlockedOr((volatile signed __int32 *)(*(_QWORD *)(a1 + 16) + 528LL), 0x40u);
  return 1LL;
}
