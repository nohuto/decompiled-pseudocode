/*
 * XREFs of VslGetSecurePciDeviceBootConfiguration @ 0x1405C5980
 * Callers:
 *     <none>
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14036A34C (VslpEnterIumSecureMode.c)
 *     HvlQueryVsmConnection @ 0x14047EB38 (HvlQueryVsmConnection.c)
 *     RtlCmEncodeMemIoResource @ 0x14061D140 (RtlCmEncodeMemIoResource.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

int __fastcall VslGetSecurePciDeviceBootConfiguration(
        int a1,
        char a2,
        char a3,
        char a4,
        unsigned int a5,
        struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *a6)
{
  int result; // eax
  __int64 i; // rbx
  _BYTE v12[8]; // [rsp+20h] [rbp-B8h] BYREF
  int v13; // [rsp+28h] [rbp-B0h]
  char v14; // [rsp+2Ch] [rbp-ACh]
  char v15; // [rsp+2Dh] [rbp-ABh]
  char v16; // [rsp+2Eh] [rbp-AAh]
  int v17; // [rsp+30h] [rbp-A8h]
  char v18; // [rsp+34h] [rbp-A4h]
  ULONGLONG Start; // [rsp+38h] [rbp-A0h]
  ULONGLONG Length; // [rsp+40h] [rbp-98h]

  memset_0(v12, 0, 0x68uLL);
  if ( !HvlQueryVsmConnection(0LL) )
    return -1073741637;
  if ( a5 - 1 > 5 || !a6 )
    return -1073741811;
  memset_0(a6, 0, 20LL * a5);
  for ( i = 0LL; (unsigned int)i < a5; i = (unsigned int)(i + 1) )
  {
    v13 = a1;
    v14 = a2;
    v15 = a3;
    v16 = a4;
    v17 = i;
    result = VslpEnterIumSecureMode(2u, 0x11Cu, 0, (__int64)v12);
    if ( result < 0 )
      return result;
    if ( v18 )
    {
      result = RtlCmEncodeMemIoResource(&a6[i], 3u, Length, Start);
      if ( result < 0 )
        return result;
    }
  }
  return 0;
}
