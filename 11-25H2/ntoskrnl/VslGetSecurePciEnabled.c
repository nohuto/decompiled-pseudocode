/*
 * XREFs of VslGetSecurePciEnabled @ 0x140589D60
 * Callers:
 *     HvlGetEnlightenmentInfo @ 0x140583560 (HvlGetEnlightenmentInfo.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x140282F50 (VslpEnterIumSecureMode.c)
 *     HvlQueryVsmConnection @ 0x140456060 (HvlQueryVsmConnection.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

char VslGetSecurePciEnabled()
{
  _BYTE v1[16]; // [rsp+20h] [rbp-88h] BYREF
  int v2; // [rsp+30h] [rbp-78h]

  memset_0(v1, 0, 0x68uLL);
  if ( HvlQueryVsmConnection(0LL) && (v2 = 1, (int)VslpEnterIumSecureMode(2u, 0x10Bu, 0, (__int64)v1) >= 0) )
    return v2 & 1;
  else
    return 0;
}
