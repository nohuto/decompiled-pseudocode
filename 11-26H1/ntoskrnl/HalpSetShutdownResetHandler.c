/*
 * XREFs of HalpSetShutdownResetHandler @ 0x14057FA2C
 * Callers:
 *     HalpKsrCallbackRoutine @ 0x140786080 (HalpKsrCallbackRoutine.c)
 * Callees:
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     ZwPowerInformation @ 0x140723FD0 (ZwPowerInformation.c)
 */

NTSTATUS __fastcall HalpSetShutdownResetHandler(__int64 a1)
{
  _QWORD InputBuffer[3]; // [rsp+30h] [rbp-28h] BYREF

  InputBuffer[2] = 0LL;
  InputBuffer[1] = a1;
  InputBuffer[0] = 5LL;
  return ZwPowerInformation(SystemPowerStateHandler, InputBuffer, 0x18u, 0LL, 0);
}
