/*
 * XREFs of SepSetTokenAllApplicationPackagesPolicy @ 0x140B71BB8
 * Callers:
 *     SeSubProcessToken @ 0x140B84D74 (SeSubProcessToken.c)
 * Callees:
 *     AuthzBasepSetSecurityAttributesToken @ 0x1403AFD64 (AuthzBasepSetSecurityAttributesToken.c)
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 */

__int64 __fastcall SepSetTokenAllApplicationPackagesPolicy(__int64 a1, unsigned int a2)
{
  _DWORD *v3; // rcx
  _DWORD v5[2]; // [rsp+20h] [rbp-40h] BYREF
  UNICODE_STRING *p_DestinationString; // [rsp+28h] [rbp-38h]
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-30h] BYREF
  __int128 v8; // [rsp+40h] [rbp-20h]
  __int64 *v9; // [rsp+50h] [rbp-10h]
  __int64 v10; // [rsp+70h] [rbp+10h] BYREF
  int v11; // [rsp+78h] [rbp+18h] BYREF

  v9 = 0LL;
  v10 = a2;
  DestinationString = 0LL;
  v8 = 0LL;
  RtlInitUnicodeString(&DestinationString, L"WIN://NOALLAPPPKG");
  *(_QWORD *)&v8 = 2LL;
  DWORD2(v8) = 1;
  v9 = &v10;
  v5[0] = 1;
  v5[1] = 1;
  v3 = *(_DWORD **)(a1 + 776);
  p_DestinationString = &DestinationString;
  v11 = 4;
  return AuthzBasepSetSecurityAttributesToken(v3, &v11, (__int64)v5);
}
