/*
 * XREFs of RtlpValidLabelSubjectContext @ 0x18005B27C
 * Callers:
 *     RtlpSetSecurityObject @ 0x18005BF70 (RtlpSetSecurityObject.c)
 * Callees:
 *     RtlSidDominates @ 0x1800CBD30 (RtlSidDominates.c)
 *     NtQueryInformationToken @ 0x18015F360 (NtQueryInformationToken.c)
 *     ZwPrivilegeCheck @ 0x180161790 (ZwPrivilegeCheck.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 */

char __fastcall RtlpValidLabelSubjectContext(__int64 a1, _DWORD *a2, char a3, int *a4)
{
  _DWORD *v6; // rbx
  int v8; // eax
  _DWORD *v9; // rax
  int v10; // eax
  _BYTE v13[4]; // [rsp+30h] [rbp-D0h] BYREF
  int v14; // [rsp+34h] [rbp-CCh] BYREF
  __int64 v15; // [rsp+38h] [rbp-C8h]
  _DWORD v16[2]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v17; // [rsp+48h] [rbp-B8h]
  int v18; // [rsp+50h] [rbp-B0h]
  _DWORD Buf2[20]; // [rsp+60h] [rbp-A0h] BYREF
  void *Buf1; // [rsp+B0h] [rbp-50h] BYREF

  v14 = 0;
  v13[0] = 0;
  Buf2[0] = 257;
  Buf2[1] = 0x10000000;
  Buf2[2] = 0x2000;
  v6 = Buf2;
  if ( a2 )
    v6 = a2;
  v8 = NtQueryInformationToken(a1, 25LL, &Buf1, 84LL, &v14);
  *a4 = v8;
  if ( v8 < 0 )
    return 0;
  if ( (a3 & 8) != 0 )
  {
    if ( (int)RtlSidDominates(v6, Buf2) < 0 )
      return 0;
    v9 = v6;
    v6 = Buf2;
    if ( v13[0] )
      v6 = v9;
  }
  v10 = RtlSidDominates(Buf1, v6);
  *a4 = v10;
  if ( v10 < 0 )
    return 0;
  if ( !v13[0] )
  {
    v15 = 32LL;
    v17 = 32LL;
    v16[0] = 1;
    v16[1] = 1;
    v18 = 0;
    if ( !((int)ZwPrivilegeCheck(a1, v16, v13) >= 0 ? v13[0] : 0) )
    {
      *a4 = -1073740730;
      return 0;
    }
  }
  return 1;
}
