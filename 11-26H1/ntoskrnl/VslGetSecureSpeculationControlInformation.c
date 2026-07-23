/*
 * XREFs of VslGetSecureSpeculationControlInformation @ 0x1405C5B20
 * Callers:
 *     KeQuerySecureSpeculationInformation @ 0x140531AB0 (KeQuerySecureSpeculationInformation.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14036A34C (VslpEnterIumSecureMode.c)
 *     HvlQueryVsmConnection @ 0x14047EB38 (HvlQueryVsmConnection.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 VslGetSecureSpeculationControlInformation()
{
  _BYTE v1[16]; // [rsp+20h] [rbp-88h] BYREF
  unsigned int v2; // [rsp+30h] [rbp-78h]

  memset_0(v1, 0, 0x68uLL);
  if ( HvlQueryVsmConnection(0LL) )
    VslpEnterIumSecureMode(2u, 0x111u, 0, (__int64)v1);
  return v2;
}
