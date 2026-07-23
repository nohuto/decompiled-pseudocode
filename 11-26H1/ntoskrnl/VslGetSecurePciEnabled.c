/*
 * XREFs of VslGetSecurePciEnabled @ 0x1405C5AA0
 * Callers:
 *     HvlGetEnlightenmentInfo @ 0x1405BF3E0 (HvlGetEnlightenmentInfo.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14036A34C (VslpEnterIumSecureMode.c)
 *     HvlQueryVsmConnection @ 0x14047EB38 (HvlQueryVsmConnection.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
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
