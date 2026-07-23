/*
 * XREFs of SeQuerySecurityAttributesTokenAccessInformation @ 0x1403B0650
 * Callers:
 *     <none>
 * Callees:
 *     SepTokenFromAccessInformation @ 0x1403B0890 (SepTokenFromAccessInformation.c)
 *     SepInternalQuerySecurityAttributesTokenEx @ 0x1403B0C10 (SepInternalQuerySecurityAttributesTokenEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall SeQuerySecurityAttributesTokenAccessInformation(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        int a5,
        __int64 a6)
{
  _BYTE v11[1184]; // [rsp+40h] [rbp-4E8h] BYREF

  memset_0(v11, 0, sizeof(v11));
  if ( a5 )
  {
    if ( a4 )
    {
LABEL_3:
      SepTokenFromAccessInformation(a1, v11);
      return SepInternalQuerySecurityAttributesTokenEx(v11, 0LL, a2, a3, 0, a4, a5, a6);
    }
  }
  else if ( !a4 )
  {
    goto LABEL_3;
  }
  return 3221225485LL;
}
