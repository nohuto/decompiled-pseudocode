/*
 * XREFs of BiAdjustPrivilege @ 0x1409D1E78
 * Callers:
 *     BiAcquirePrivilege @ 0x1409D1D68 (BiAcquirePrivilege.c)
 *     BiReleasePrivilege @ 0x1409D1E1C (BiReleasePrivilege.c)
 * Callees:
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     ZwClose @ 0x1407235D0 (ZwClose.c)
 *     ZwAdjustPrivilegesToken @ 0x140723C10 (ZwAdjustPrivilegesToken.c)
 *     BiOpenEffectiveToken @ 0x1409D1F90 (BiOpenEffectiveToken.c)
 */

__int64 __fastcall BiAdjustPrivilege(unsigned int a1, char a2, bool *a3)
{
  int v6; // ebx
  int v7; // eax
  HANDLE Handle[2]; // [rsp+38h] [rbp-38h] BYREF
  int v10; // [rsp+48h] [rbp-28h]
  __int64 v11; // [rsp+4Ch] [rbp-24h]
  int v12; // [rsp+54h] [rbp-1Ch]
  __int128 v13; // [rsp+58h] [rbp-18h]

  v12 = 0;
  Handle[0] = (HANDLE)-1LL;
  v13 = 0LL;
  v6 = BiOpenEffectiveToken(Handle);
  if ( v6 >= 0 )
  {
    Handle[1] = (HANDLE)a1;
    v11 = a1;
    v12 = 0;
    v10 = 1;
    if ( a2 )
      v12 = 2;
    v7 = ZwAdjustPrivilegesToken((__int64)Handle[0], 0LL);
    v6 = v7;
    if ( v7 == 262 )
    {
      v6 = -1073741727;
    }
    else if ( v7 >= 0 )
    {
      if ( (_DWORD)v13 )
        *a3 = (BYTE12(v13) & 2) != 0;
      else
        *a3 = a2 != 0;
    }
    if ( Handle[0] != (HANDLE)-1LL )
      ZwClose(Handle[0]);
  }
  return (unsigned int)v6;
}
