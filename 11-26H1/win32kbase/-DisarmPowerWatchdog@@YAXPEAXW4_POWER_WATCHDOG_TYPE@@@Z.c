/*
 * XREFs of ?DisarmPowerWatchdog@@YAXPEAXW4_POWER_WATCHDOG_TYPE@@@Z @ 0x14014B2CC
 * Callers:
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x140112470 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 *     PowerOnMonitor @ 0x1401D6660 (PowerOnMonitor.c)
 * Callees:
 *     McTemplateK0x_EtwWriteTransfer @ 0x1400AA3D4 (McTemplateK0x_EtwWriteTransfer.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

NTSTATUS __fastcall DisarmPowerWatchdog(__int64 a1)
{
  NTSTATUS result; // eax
  __int64 v3; // rcx
  __int64 v4; // r8
  _QWORD InputBuffer[13]; // [rsp+30h] [rbp-68h] BYREF

  if ( a1 )
  {
    memset(InputBuffer, 0, 0x60uLL);
    LODWORD(InputBuffer[0]) = 21;
    InputBuffer[1] = a1;
    LODWORD(InputBuffer[3]) = 412;
    result = ZwPowerInformation(SystemPowerStateLogging|0x40, InputBuffer, 0x60u, 0LL, 0);
    if ( (Microsoft_Windows_Win32kEnableBits & 8) != 0 )
      return McTemplateK0x_EtwWriteTransfer(v3, &StopPowerWatchdog, v4, a1);
  }
  return result;
}
