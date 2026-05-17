/*
 * XREFs of RtlpQueryProcessMachine @ 0x180090A84
 * Callers:
 *     RtlQueryProcessDebugInformation @ 0x18008F550 (RtlQueryProcessDebugInformation.c)
 * Callees:
 *     NtQuerySystemInformationEx @ 0x180161D10 (NtQuerySystemInformationEx.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 *     _alloca_probe @ 0x180163610 (_alloca_probe.c)
 */

__int64 __fastcall RtlpQueryProcessMachine(__int64 a1, _WORD *a2)
{
  unsigned int *v3; // rbx
  int v4; // ecx
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // rcx
  void *v7; // rsp
  void *v8; // rsp
  int i; // edx
  __int16 v10; // ax
  unsigned int v12; // [rsp+30h] [rbp+0h] BYREF
  __int64 v13; // [rsp+38h] [rbp+8h] BYREF
  _BYTE v14[24]; // [rsp+40h] [rbp+10h] BYREF

  v13 = a1;
  v12 = 20;
  v3 = (unsigned int *)v14;
  v4 = NtQuerySystemInformationEx(230LL, &v13, 8LL, v14, 20, &v12);
  if ( v4 == -1073741789 )
  {
    v5 = v12 + 15LL;
    if ( v5 <= v12 )
      v5 = 0xFFFFFFFFFFFFFF0LL;
    v6 = v5 & 0xFFFFFFFFFFFFFFF0uLL;
    v7 = alloca(v6);
    v8 = alloca(v6);
    v3 = &v12;
    v4 = NtQuerySystemInformationEx(230LL, &v13, 8LL, &v12, v12, &v12);
  }
  if ( v4 >= 0 )
  {
    for ( i = 0; LOWORD(v3[i]); ++i )
    {
      if ( (v3[i] & 0x80000) != 0 )
      {
        v10 = v3[i];
        if ( v10 )
        {
          *a2 = v10;
          return (unsigned int)v4;
        }
        break;
      }
    }
    return (unsigned int)-1073741816;
  }
  return (unsigned int)v4;
}
