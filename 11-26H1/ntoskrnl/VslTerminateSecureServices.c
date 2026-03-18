/*
 * XREFs of VslTerminateSecureServices @ 0x1405C427C
 * Callers:
 *     HalpPowerWriteResetCommand @ 0x14057F824 (HalpPowerWriteResetCommand.c)
 *     HalpShutdown @ 0x14057FA90 (HalpShutdown.c)
 *     HaliAcpiSleep @ 0x1405A2710 (HaliAcpiSleep.c)
 *     HvlEnterSleepState @ 0x1405BC910 (HvlEnterSleepState.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1403685AC (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

__int64 VslTerminateSecureServices()
{
  _BYTE v1[112]; // [rsp+20h] [rbp-88h] BYREF

  memset_0(v1, 0, 0x68uLL);
  return VslpEnterIumSecureMode(2u, 0x125u, 0, (__int64)v1);
}
