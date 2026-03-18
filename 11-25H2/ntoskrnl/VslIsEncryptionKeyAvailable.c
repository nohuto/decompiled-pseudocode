/*
 * XREFs of VslIsEncryptionKeyAvailable @ 0x140A84954
 * Callers:
 *     ExpQuerySystemInformation @ 0x1409DB5B0 (ExpQuerySystemInformation.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x140282F50 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

bool VslIsEncryptionKeyAvailable()
{
  _BYTE v1[16]; // [rsp+20h] [rbp-88h] BYREF
  __int64 v2; // [rsp+30h] [rbp-78h]

  memset_0(v1, 0, 0x68uLL);
  return (int)VslpEnterIumSecureMode(2u, 0x24u, 0, (__int64)v1) >= 0 && v2 != 0;
}
