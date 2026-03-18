/*
 * XREFs of _GetAsyncKeyState @ 0x14018D230
 * Callers:
 *     NtUserGetAsyncKeyState @ 0x14016FB90 (NtUserGetAsyncKeyState.c)
 * Callees:
 *     UserSetLastError @ 0x14003F714 (UserSetLastError.c)
 *     Feature_AsyncKeyStateRecentDown_Removal2__private_IsEnabledDeviceUsageNoInline @ 0x1401B9BF8 (Feature_AsyncKeyStateRecentDown_Removal2__private_IsEnabledDeviceUsageNoInline.c)
 */

__int16 __fastcall GetAsyncKeyState(unsigned int a1)
{
  unsigned __int8 v1; // bp
  __int16 result; // ax
  __int16 v3; // r15
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 UserSessionState; // rax
  unsigned __int64 v7; // rdi
  __int64 v8; // rax
  char v9; // si

  v1 = a1;
  if ( a1 < 0x100 )
  {
    v3 = 0;
    if ( !(unsigned int)Feature_AsyncKeyStateRecentDown_Removal2__private_IsEnabledDeviceUsageNoInline() )
    {
      UserSessionState = W32GetUserSessionState(v5, v4);
      v7 = (unsigned __int64)v1 >> 3;
      v5 = v1 & 7;
      LOBYTE(v4) = *(_BYTE *)(v7 + UserSessionState + 14464);
      if ( ((unsigned __int8)v4 & (unsigned __int8)(1 << v5)) != 0 )
      {
        v8 = W32GetUserSessionState(v5, v4);
        v3 = 1;
        v5 = *(unsigned __int8 *)(v8 + v7 + 14464);
        LODWORD(v5) = v5 & ~(1 << (v1 & 7));
        *(_BYTE *)(v8 + v7 + 14464) = v5;
      }
    }
    v9 = *(_BYTE *)(((unsigned __int64)v1 >> 2) + W32GetUserSessionState(v5, v4) + 14336) & (1 << (2 * (v1 & 3)));
    result = v3 | 0x8000;
    if ( !v9 )
      return v3;
  }
  else
  {
    UserSetLastError(87);
    return 0;
  }
  return result;
}
