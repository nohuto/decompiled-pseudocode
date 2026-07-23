/*
 * XREFs of BiAdjustPrivilege @ 0x1409A2E58
 * Callers:
 *     BiAcquirePrivilege @ 0x1409A2D48 (BiAcquirePrivilege.c)
 *     BiReleasePrivilege @ 0x1409A2DFC (BiReleasePrivilege.c)
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwAdjustPrivilegesToken @ 0x1407287E0 (ZwAdjustPrivilegesToken.c)
 *     BiOpenEffectiveToken @ 0x1409A2F70 (BiOpenEffectiveToken.c)
 */

__int64 __fastcall BiAdjustPrivilege(unsigned int a1, char a2, bool *a3)
{
  int v6; // ebx
  NTSTATUS v7; // eax
  ULONG ReturnLength; // [rsp+30h] [rbp-40h] BYREF
  HANDLE TokenHandle[2]; // [rsp+38h] [rbp-38h] BYREF
  struct _TOKEN_PRIVILEGES NewState; // [rsp+48h] [rbp-28h] BYREF
  struct _TOKEN_PRIVILEGES PreviousState; // [rsp+58h] [rbp-18h] BYREF

  ReturnLength = 0;
  NewState.Privileges[0].Attributes = 0;
  TokenHandle[0] = (HANDLE)-1LL;
  PreviousState = 0LL;
  v6 = BiOpenEffectiveToken(TokenHandle);
  if ( v6 >= 0 )
  {
    TokenHandle[1] = (HANDLE)a1;
    NewState.Privileges[0].Luid = (LUID)a1;
    NewState.Privileges[0].Attributes = 0;
    NewState.PrivilegeCount = 1;
    if ( a2 )
      NewState.Privileges[0].Attributes = 2;
    v7 = ZwAdjustPrivilegesToken(TokenHandle[0], 0, &NewState, 0x10u, &PreviousState, &ReturnLength);
    v6 = v7;
    if ( v7 == 262 )
    {
      v6 = -1073741727;
    }
    else if ( v7 >= 0 )
    {
      if ( PreviousState.PrivilegeCount )
        *a3 = (PreviousState.Privileges[0].Attributes & 2) != 0;
      else
        *a3 = a2 != 0;
    }
    if ( TokenHandle[0] != (HANDLE)-1LL )
      ZwClose(TokenHandle[0]);
  }
  return (unsigned int)v6;
}
