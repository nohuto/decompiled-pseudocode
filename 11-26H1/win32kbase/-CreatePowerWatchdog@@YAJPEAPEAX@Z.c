/*
 * XREFs of ?CreatePowerWatchdog@@YAJPEAPEAX@Z @ 0x140192300
 * Callers:
 *     InitializePowerRequestList @ 0x1402F51D0 (InitializePowerRequestList.c)
 * Callees:
 *     memset @ 0x14024BD80 (memset.c)
 */

NTSTATUS __fastcall CreatePowerWatchdog(PVOID OutputBuffer)
{
  _DWORD InputBuffer[26]; // [rsp+30h] [rbp-68h] BYREF

  memset(&InputBuffer[1], 0, 0x5CuLL);
  InputBuffer[0] = 21;
  return ZwPowerInformation(SystemPowerStateLogging|0x40, InputBuffer, 0x60u, OutputBuffer, 8u);
}
