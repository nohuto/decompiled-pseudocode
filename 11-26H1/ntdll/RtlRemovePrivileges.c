/*
 * XREFs of RtlRemovePrivileges @ 0x180109300
 * Callers:
 *     <none>
 * Callees:
 *     NtQueryInformationToken @ 0x18015F260 (NtQueryInformationToken.c)
 *     NtAdjustPrivilegesToken @ 0x18015F660 (NtAdjustPrivilegesToken.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 */

NTSTATUS __cdecl RtlRemovePrivileges(HANDLE TokenHandle, PULONG PrivilegesToKeep, ULONG PrivilegeCount)
{
  __int64 v3; // rbx
  __int64 i; // rcx
  ULONG v7; // edx
  NTSTATUS result; // eax
  DWORD v9; // edx
  __int64 j; // rcx
  unsigned __int64 LowPart; // r9
  ULONG ReturnLength[4]; // [rsp+30h] [rbp-1D8h] BYREF
  _TOKEN_PRIVILEGES TokenInformation[27]; // [rsp+40h] [rbp-1C8h] BYREF

  v3 = 0LL;
  ReturnLength[0] = 0;
  for ( i = 0LL; (unsigned int)i < PrivilegeCount; i = (unsigned int)(i + 1) )
  {
    v7 = PrivilegesToKeep[i];
    if ( v7 - 2 > 0x22 )
      return -1073741811;
    v3 |= 1LL << v7;
  }
  result = NtQueryInformationToken(TokenHandle, 3u, TokenInformation, 0x1B0u, ReturnLength);
  if ( result >= 0 )
  {
    v9 = TokenInformation[0].PrivilegeCount;
    for ( j = 0LL; (unsigned int)j < v9; j = (unsigned int)(j + 1) )
    {
      LowPart = TokenInformation[0].Privileges[j].Luid.LowPart;
      if ( _bittest64(&v3, LowPart) )
      {
        v3 &= ~(1LL << LowPart);
      }
      else
      {
        TokenInformation[0].Privileges[j].Attributes = 4;
        v9 = TokenInformation[0].PrivilegeCount;
      }
    }
    if ( v3 )
      return 262;
    else
      return NtAdjustPrivilegesToken(TokenHandle, 0, TokenInformation, 0x1B0u, 0LL, 0LL);
  }
  return result;
}
