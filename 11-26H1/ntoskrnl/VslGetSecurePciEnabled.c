/*
 * XREFs of VslGetSecurePciEnabled @ 0x1405C3230
 * Callers:
 *     HvlGetEnlightenmentInfo @ 0x1405BCB70 (HvlGetEnlightenmentInfo.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1403685AC (VslpEnterIumSecureMode.c)
 *     HvlQueryVsmConnection @ 0x1404851C8 (HvlQueryVsmConnection.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

char VslGetSecurePciEnabled()
{
  _BYTE v1[16]; // [rsp+20h] [rbp-88h] BYREF
  int v2; // [rsp+30h] [rbp-78h]

  memset_0(v1, 0, 0x68uLL);
  if ( HvlQueryVsmConnection(0LL) && (v2 = 1, (int)VslpEnterIumSecureMode(2u, 0x11Au, 0, (__int64)v1) >= 0) )
    return v2 & 1;
  else
    return 0;
}
