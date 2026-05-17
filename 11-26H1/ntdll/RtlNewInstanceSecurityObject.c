/*
 * XREFs of RtlNewInstanceSecurityObject @ 0x18013A1D0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpNewSecurityObject @ 0x18005E6A0 (RtlpNewSecurityObject.c)
 *     NtQueryInformationToken @ 0x18015F360 (NtQueryInformationToken.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 */

__int64 __fastcall RtlNewInstanceSecurityObject(
        char a1,
        char a2,
        _DWORD *a3,
        __int64 a4,
        __int64 a5,
        _OWORD *a6,
        _QWORD *a7,
        unsigned __int8 a8,
        void *a9,
        _DWORD *a10)
{
  __int64 result; // rax
  int v15; // [rsp+50h] [rbp-78h] BYREF
  _DWORD *v16; // [rsp+58h] [rbp-70h]
  _OWORD v17[3]; // [rsp+60h] [rbp-68h] BYREF
  __int64 v18; // [rsp+90h] [rbp-38h]

  v16 = a10;
  memset(v17, 0, sizeof(v17));
  v15 = 0;
  v18 = 0LL;
  result = NtQueryInformationToken(a9, 10LL, v17, 56LL, &v15);
  if ( (int)result >= 0 )
  {
    *(_QWORD *)a4 = v18;
    if ( *(_DWORD *)a4 != *a3 || *(_DWORD *)(a4 + 4) != a3[1] || a1 || a2 )
    {
      return RtlpNewSecurityObject(a5, a6, a7, 0LL, 0, a8, 0, a9, v16);
    }
    else
    {
      *a7 = 0LL;
      return 0LL;
    }
  }
  return result;
}
