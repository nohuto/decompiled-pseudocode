/*
 * XREFs of HalpSetShutdownResetHandler @ 0x140581F4C
 * Callers:
 *     HalpKsrCallbackRoutine @ 0x140788BB0 (HalpKsrCallbackRoutine.c)
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwPowerInformation @ 0x140728BA0 (ZwPowerInformation.c)
 */

NTSTATUS __fastcall HalpSetShutdownResetHandler(__int64 a1)
{
  _QWORD InputBuffer[3]; // [rsp+30h] [rbp-28h] BYREF

  InputBuffer[2] = 0LL;
  InputBuffer[1] = a1;
  InputBuffer[0] = 5LL;
  return ZwPowerInformation(SystemPowerStateHandler, InputBuffer, 0x18u, 0LL, 0);
}
