/*
 * XREFs of RtlGetAppContainerNamedObjectPath @ 0x180059320
 * Callers:
 *     <none>
 * Callees:
 *     RtlpGetTokenNamedObjectPath @ 0x180058660 (RtlpGetTokenNamedObjectPath.c)
 *     RtlEqualSid @ 0x180059860 (RtlEqualSid.c)
 *     NtQueryInformationToken @ 0x18015F360 (NtQueryInformationToken.c)
 *     memset$thunk$772440563353939046 @ 0x180170030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlGetAppContainerNamedObjectPath(__int64 a1, _DWORD *a2, char a3, UNICODE_STRING *a4)
{
  char v8; // bl
  char v9; // r15
  __int64 result; // rax
  char v11; // al
  char v12; // r8
  int v13; // [rsp+30h] [rbp-E8h] BYREF
  int v14; // [rsp+34h] [rbp-E4h] BYREF
  int v15; // [rsp+38h] [rbp-E0h] BYREF
  _QWORD v16[12]; // [rsp+40h] [rbp-D8h] BYREF
  _QWORD v17[12]; // [rsp+A0h] [rbp-78h] BYREF
  int v18; // [rsp+138h] [rbp+20h] BYREF

  v13 = 0;
  v18 = 0;
  memset_thunk_772440563353939046(v16, 0, 0x58uLL);
  memset_thunk_772440563353939046(v17, 0, 0x58uLL);
  if ( !a4 )
    return 3221225485LL;
  if ( a1 && a2 )
    return 3221225520LL;
  v15 = 0;
  v14 = 0;
  v8 = 13;
  v9 = 0;
  if ( !a3 )
    v8 = 8;
  if ( a2 )
  {
    a1 = -4LL;
    v11 = 0;
  }
  else
  {
    if ( !a1 )
      a1 = -6LL;
    result = NtQueryInformationToken(a1, 29LL, &v13, 4LL, &v18);
    if ( (int)result < 0 )
      return result;
    v11 = 1;
    if ( !v13 )
    {
      result = 0LL;
      *a4 = 0LL;
      return result;
    }
  }
  if ( !a3 || (v9 = 1, !v11) )
  {
LABEL_14:
    v12 = v8 | 2;
    if ( !v9 )
      v12 = v8;
    return RtlpGetTokenNamedObjectPath(a1, a2, v12, a4);
  }
  result = NtQueryInformationToken(-4LL, 42LL, &v14, 4LL, &v18);
  if ( (int)result < 0 )
    return result;
  if ( !v14 )
  {
    v9 = 0;
    goto LABEL_14;
  }
  result = NtQueryInformationToken(a1, 42LL, &v15, 4LL, &v18);
  if ( (int)result >= 0 )
  {
    if ( !v15 )
      return 3221225659LL;
    result = NtQueryInformationToken(-4LL, 1LL, v16, 88LL, &v18);
    if ( (int)result >= 0 )
    {
      result = NtQueryInformationToken(a1, 1LL, v17, 88LL, &v18);
      if ( (int)result >= 0 )
      {
        if ( !(unsigned __int8)RtlEqualSid(v17[0], v16[0]) )
          return 3221225659LL;
        goto LABEL_14;
      }
    }
  }
  return result;
}
