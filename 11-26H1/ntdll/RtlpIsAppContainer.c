/*
 * XREFs of RtlpIsAppContainer @ 0x180115654
 * Callers:
 *     RtlpCapabilityCheckSystemCapability @ 0x18000D958 (RtlpCapabilityCheckSystemCapability.c)
 * Callees:
 *     NtClose @ 0x18015F120 (NtClose.c)
 *     NtQueryInformationToken @ 0x18015F360 (NtQueryInformationToken.c)
 *     NtOpenThreadTokenEx @ 0x18015F520 (NtOpenThreadTokenEx.c)
 *     NtOpenProcessTokenEx @ 0x18015F540 (NtOpenProcessTokenEx.c)
 *     NtDuplicateToken @ 0x18015F780 (NtDuplicateToken.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 */

__int64 __fastcall RtlpIsAppContainer(HANDLE a1, bool *a2, __int64 a3)
{
  int v4; // ebx
  int v6; // [rsp+30h] [rbp-19h] BYREF
  HANDLE v7; // [rsp+38h] [rbp-11h] BYREF
  int v8; // [rsp+40h] [rbp-9h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-1h] BYREF
  __int128 v10; // [rsp+50h] [rbp+7h] BYREF
  __int128 v11; // [rsp+60h] [rbp+17h]
  __int64 v12; // [rsp+70h] [rbp+27h]
  __int64 *v13; // [rsp+78h] [rbp+2Fh]
  __int64 v14; // [rsp+80h] [rbp+37h] BYREF
  int v15; // [rsp+88h] [rbp+3Fh]

  v6 = 0;
  Handle = 0LL;
  v7 = 0LL;
  v12 = 0LL;
  LODWORD(v13) = 0;
  v14 = 0LL;
  v15 = 0;
  *a2 = 0;
  v10 = 0LL;
  v11 = 0LL;
  if ( a1 )
  {
LABEL_7:
    v8 = 0;
    v4 = NtQueryInformationToken(a1, 29LL, &v6, 4LL, &v8);
    if ( v4 >= 0 )
      *a2 = v6 != 0;
    goto LABEL_9;
  }
  LOBYTE(a3) = 1;
  v4 = NtOpenThreadTokenEx(-2LL, 8LL, a3, 0LL, &v7);
  if ( v4 == -1073741700 )
  {
    v4 = NtOpenProcessTokenEx(-1LL, 10LL, 0LL, &Handle);
    if ( v4 < 0 )
      goto LABEL_9;
    LODWORD(v10) = 48;
    v13 = &v14;
    *((_QWORD *)&v10 + 1) = 0LL;
    DWORD2(v11) = 0;
    *(_QWORD *)&v11 = 0LL;
    v12 = 0LL;
    v14 = 0x20000000CLL;
    LOWORD(v15) = 1;
    v4 = NtDuplicateToken(Handle, 8LL, &v10, 0LL, 2, &v7);
    NtClose(Handle);
  }
  if ( v4 >= 0 )
  {
    a1 = v7;
    goto LABEL_7;
  }
LABEL_9:
  if ( v7 )
    NtClose(v7);
  return (unsigned int)v4;
}
