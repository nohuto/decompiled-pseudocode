/*
 * XREFs of VslRelaxQuotas @ 0x1407955EC
 * Callers:
 *     NtSetSystemInformation @ 0x140839A80 (NtSetSystemInformation.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14036A34C (VslpEnterIumSecureMode.c)
 *     HvlQueryVsmConnection @ 0x14047EB38 (HvlQueryVsmConnection.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 VslRelaxQuotas()
{
  char v0; // cl
  _BYTE v2[112]; // [rsp+20h] [rbp-88h] BYREF

  memset_0(v2, 0, 0x68uLL);
  if ( !HvlQueryVsmConnection(0LL) )
    return 3224698910LL;
  if ( (_BYTE)KdDebuggerEnabled == v0 )
    return 3221226324LL;
  return VslpEnterIumSecureMode(2u, 0x39u, 0, (__int64)v2);
}
