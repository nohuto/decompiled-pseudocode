/*
 * XREFs of VslIsEncryptionKeyAvailable @ 0x140B26DA0
 * Callers:
 *     ExpQuerySystemInformation @ 0x140B145DC (ExpQuerySystemInformation.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1403685AC (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

bool VslIsEncryptionKeyAvailable()
{
  _BYTE v1[16]; // [rsp+20h] [rbp-88h] BYREF
  __int64 v2; // [rsp+30h] [rbp-78h]

  memset_0(v1, 0, 0x68uLL);
  return (int)VslpEnterIumSecureMode(2u, 0x24u, 0, (__int64)v1) >= 0 && v2 != 0;
}
