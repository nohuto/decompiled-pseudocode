/*
 * XREFs of RtlNewSecurityGrantedAccess @ 0x180112710
 * Callers:
 *     <none>
 * Callees:
 *     NtQueryInformationToken @ 0x18015F260 (NtQueryInformationToken.c)
 *     ZwPrivilegeCheck @ 0x180161690 (ZwPrivilegeCheck.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 */

__int64 __fastcall RtlNewSecurityGrantedAccess(int a1, __int64 a2, _DWORD *a3, __int64 a4, _DWORD *a5, int *a6)
{
  unsigned int v6; // edi
  __int64 v10; // r13
  int v11; // ebx
  int v12; // r14d
  NTSTATUS v13; // eax
  BOOLEAN v14; // cl
  __int64 result; // rax
  __int64 v16; // rax
  BOOLEAN Result[8]; // [rsp+30h] [rbp-59h] BYREF
  __int64 v18; // [rsp+38h] [rbp-51h]
  ULONG ReturnLength; // [rsp+40h] [rbp-49h] BYREF
  _PRIVILEGE_SET RequiredPrivileges; // [rsp+48h] [rbp-41h] BYREF
  _OWORD TokenInformation[3]; // [rsp+60h] [rbp-29h] BYREF
  __int64 v22; // [rsp+90h] [rbp+7h]

  v6 = 0;
  Result[0] = 0;
  v22 = 0LL;
  ReturnLength = 0;
  v10 = -5LL;
  if ( a4 )
    v10 = a4;
  memset(TokenInformation, 0, sizeof(TokenInformation));
  NtQueryInformationToken((HANDLE)v10, 0xAu, TokenInformation, 0x38u, &ReturnLength);
  if ( a1 < 0 )
    a1 |= *a5;
  if ( (a1 & 0x40000000) != 0 )
    a1 |= a5[1];
  if ( (a1 & 0x20000000) != 0 )
    a1 |= a5[2];
  if ( (a1 & 0x10000000) != 0 )
    a1 |= a5[3];
  v11 = a1 & 0xFFFFFFF;
  v12 = 1;
  *a6 = v11;
  if ( (v11 & 0x1000000) != 0 )
  {
    v18 = 8LL;
    RequiredPrivileges.Privilege[0].Luid = (_LUID)8LL;
    RequiredPrivileges.PrivilegeCount = 1;
    RequiredPrivileges.Control = 1;
    RequiredPrivileges.Privilege[0].Attributes = 0;
    v13 = ZwPrivilegeCheck((HANDLE)v10, &RequiredPrivileges, Result);
    v14 = Result[0];
    if ( (v13 < 0 || !Result[0]) && !Result[0] )
      return 3221225569LL;
    *a6 &= ~0x1000000u;
  }
  else
  {
    v14 = Result[0];
  }
  if ( *a3 >= 0x14u )
  {
    *(_DWORD *)(a2 + 4) = 0;
    if ( v14 )
    {
      v18 = 8LL;
      v6 = 0x80000000;
    }
    else
    {
      v18 = 0LL;
      v12 = 0;
    }
    v16 = v18;
    *(_DWORD *)a2 = v12;
    *(_QWORD *)(a2 + 8) = v16;
    result = 0LL;
    *(_DWORD *)(a2 + 16) = v6;
  }
  else
  {
    *a3 = 20;
    return 3221225507LL;
  }
  return result;
}
