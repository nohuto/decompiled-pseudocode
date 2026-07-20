/*
 * XREFs of SmpEstablishClientSecurity @ 0x140018A80
 * Callers:
 *     SmpApiCallback @ 0x140005960 (SmpApiCallback.c)
 * Callees:
 *     __security_check_cookie @ 0x14001EFE0 (__security_check_cookie.c)
 */

__int64 __fastcall SmpEstablishClientSecurity(__int64 a1, __int64 a2)
{
  int v4; // edi
  __int64 v5; // rdx
  NTSTATUS v6; // ebx
  __int64 v7; // r8
  ULONG ReturnLength; // [rsp+30h] [rbp-19h] BYREF
  void *TokenHandle; // [rsp+38h] [rbp-11h] BYREF
  __int64 ThreadInformation; // [rsp+40h] [rbp-9h] BYREF
  __int128 TokenInformation; // [rsp+48h] [rbp-1h] BYREF
  __int128 v13; // [rsp+58h] [rbp+Fh]
  __int128 v14; // [rsp+68h] [rbp+1Fh]
  __int64 v15; // [rsp+78h] [rbp+2Fh]

  ThreadInformation = 0LL;
  ReturnLength = 0;
  TokenHandle = 0LL;
  v15 = 0LL;
  v4 = 2;
  TokenInformation = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  if ( !*(_QWORD *)(a2 + 16) )
  {
    RtlAcquireSRWLockShared(a2 + 24);
    RtlReleaseSRWLockShared(a2 + 24);
  }
  v6 = NtAlpcImpersonateClientOfPort(*(_QWORD *)(a2 + 16), a1, 0LL);
  if ( v6 >= 0 )
  {
    v6 = NtOpenThreadToken((HANDLE)0xFFFFFFFFFFFFFFFELL, 0xCu, 0, &TokenHandle);
    if ( v6 >= 0 )
    {
      v6 = NtQueryInformationToken(TokenHandle, TokenStatistics, &TokenInformation, 0x38u, &ReturnLength);
      if ( v6 >= 0 && (DWORD2(v13) != 2 || SHIDWORD(v13) >= 2) && *((_QWORD *)&TokenInformation + 1) == 999LL )
        v4 = 4;
      NtClose(TokenHandle);
    }
    NtSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadImpersonationToken, &ThreadInformation, 8u);
  }
  RtlAcquireSRWLockExclusive(a2 + 24, v5, v7);
  if ( (*(_DWORD *)a2 & 6) != 0 )
  {
    v6 = 0;
  }
  else if ( v6 >= 0 )
  {
    *(_DWORD *)a2 |= v4;
  }
  RtlReleaseSRWLockExclusive(a2 + 24);
  return (unsigned int)v6;
}
