/*
 * XREFs of VslpSecureKernelPeriodicTick @ 0x1404BD340
 * Callers:
 *     <none>
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1403685AC (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

__int64 VslpSecureKernelPeriodicTick()
{
  _BYTE v1[112]; // [rsp+20h] [rbp-88h] BYREF

  memset_0(v1, 0, 0x68uLL);
  VslpEnterIumSecureMode(2u, 0xD1u, 0, (__int64)v1);
  return (unsigned int)_InterlockedExchange(&VslpSecureKernelPeriodicTickWorkItemActive, 0);
}
