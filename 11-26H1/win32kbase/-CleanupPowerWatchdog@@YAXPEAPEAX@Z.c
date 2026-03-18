/*
 * XREFs of ?CleanupPowerWatchdog@@YAXPEAPEAX@Z @ 0x1401D54D4
 * Callers:
 *     CleanupPowerRequestList @ 0x140193020 (CleanupPowerRequestList.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

void __fastcall CleanupPowerWatchdog(void **a1)
{
  __int64 v1; // rdi
  _QWORD InputBuffer[12]; // [rsp+30h] [rbp-68h] BYREF

  v1 = (__int64)*a1;
  if ( *a1 )
  {
    memset(InputBuffer, 0, sizeof(InputBuffer));
    LODWORD(InputBuffer[0]) = 21;
    LOBYTE(InputBuffer[11]) = 1;
    InputBuffer[1] = v1;
    *a1 = 0LL;
    if ( ZwPowerInformation(SystemPowerStateLogging|0x40, InputBuffer, 0x60u, 0LL, 0) < 0 )
      MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 658);
  }
}
