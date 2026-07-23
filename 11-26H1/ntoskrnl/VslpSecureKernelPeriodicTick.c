/*
 * XREFs of VslpSecureKernelPeriodicTick @ 0x1404B6B20
 * Callers:
 *     <none>
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14036A34C (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 VslpSecureKernelPeriodicTick()
{
  _BYTE v1[112]; // [rsp+20h] [rbp-88h] BYREF

  memset_0(v1, 0, 0x68uLL);
  VslpEnterIumSecureMode(2u, 0xD1u, 0, (__int64)v1);
  return (unsigned int)_InterlockedExchange((volatile __int32 *)&VslpReservedTransferLock.CycleTime, 0);
}
