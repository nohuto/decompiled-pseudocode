/*
 * XREFs of _GetAsyncKeyState @ 0x1400E8D50
 * Callers:
 *     NtUserGetAsyncKeyState @ 0x1400E8790 (NtUserGetAsyncKeyState.c)
 * Callees:
 *     UserSetLastError @ 0x140087A14 (UserSetLastError.c)
 *     Feature_AsyncKeyStateRecentDown_Removal2__private_IsEnabledDeviceUsageNoInline @ 0x1400E8AFC (Feature_AsyncKeyStateRecentDown_Removal2__private_IsEnabledDeviceUsageNoInline.c)
 */

__int16 __fastcall GetAsyncKeyState(unsigned int a1)
{
  unsigned __int8 v1; // di
  __int16 v2; // r14
  int v3; // edx
  int v4; // ecx
  int v5; // r8d
  unsigned __int8 v6; // dl
  __int16 result; // ax
  int v8; // r12d
  unsigned __int64 v9; // rbp
  __int64 UserSessionState; // rax
  __int64 v11; // rax

  v1 = a1;
  if ( a1 >= 0x100 )
  {
    UserSetLastError(87);
    return 0;
  }
  else
  {
    v2 = 0;
    if ( !(unsigned int)Feature_AsyncKeyStateRecentDown_Removal2__private_IsEnabledDeviceUsageNoInline() )
    {
      v8 = v1 & 7;
      v9 = (unsigned __int64)v1 >> 3;
      UserSessionState = W32GetUserSessionState(v4, v3, v5);
      v4 = v8;
      LOBYTE(v3) = *(_BYTE *)(UserSessionState + v9 + 14456);
      if ( ((unsigned __int8)v3 & (unsigned __int8)(1 << v8)) != 0 )
      {
        v11 = W32GetUserSessionState(v8, v3, v5);
        v2 = 1;
        v4 = *(unsigned __int8 *)(v11 + v9 + 14456) & ~(1 << v8);
        *(_BYTE *)(v11 + v9 + 14456) = v4;
      }
    }
    v6 = *(_BYTE *)(W32GetUserSessionState(v4, v3, v5) + ((unsigned __int64)v1 >> 2) + 14328);
    result = v2 | 0x8000;
    if ( (v6 & (unsigned __int8)(1 << (2 * (v1 & 3)))) == 0 )
      return v2;
  }
  return result;
}
