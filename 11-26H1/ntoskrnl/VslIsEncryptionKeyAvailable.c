/*
 * XREFs of VslIsEncryptionKeyAvailable @ 0x140B29000
 * Callers:
 *     ExpQuerySystemInformation @ 0x140B169CC (ExpQuerySystemInformation.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14036A34C (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

bool VslIsEncryptionKeyAvailable()
{
  _BYTE v1[16]; // [rsp+20h] [rbp-88h] BYREF
  __int64 v2; // [rsp+30h] [rbp-78h]

  memset_0(v1, 0, 0x68uLL);
  return (int)VslpEnterIumSecureMode(2u, 0x24u, 0, (__int64)v1) >= 0 && v2 != 0;
}
