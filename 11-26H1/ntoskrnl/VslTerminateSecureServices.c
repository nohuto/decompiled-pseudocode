/*
 * XREFs of VslTerminateSecureServices @ 0x1405C6AEC
 * Callers:
 *     HalpPowerWriteResetCommand @ 0x140581D44 (HalpPowerWriteResetCommand.c)
 *     HalpShutdown @ 0x140581FB0 (HalpShutdown.c)
 *     HaliAcpiSleep @ 0x1405A4F20 (HaliAcpiSleep.c)
 *     HvlEnterSleepState @ 0x1405BF180 (HvlEnterSleepState.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14036A34C (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 VslTerminateSecureServices()
{
  _BYTE v1[112]; // [rsp+20h] [rbp-88h] BYREF

  memset_0(v1, 0, 0x68uLL);
  return VslpEnterIumSecureMode(2u, 0x125u, 0, (__int64)v1);
}
