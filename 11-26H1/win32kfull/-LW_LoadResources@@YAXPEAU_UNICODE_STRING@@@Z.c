/*
 * XREFs of ?LW_LoadResources@@YAXPEAU_UNICODE_STRING@@@Z @ 0x140232700
 * Callers:
 *     xxxUpdatePerUserSystemParameters @ 0x14023F980 (xxxUpdatePerUserSystemParameters.c)
 * Callees:
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

void __fastcall LW_LoadResources(struct _UNICODE_STRING *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  BOOL v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 UserSessionState; // rax
  __int64 v13; // [rsp+40h] [rbp-18h] BYREF

  FastGetProfileStringFromIDW(a1, 12LL, 5LL, L"N", &v13, 4, 0);
  v4 = (_WORD)v13 == 49 || (_WORD)v13 == 89 || (_WORD)v13 == 121;
  *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v3, v2) + 19904) + 1988LL) = v4;
  FastGetProfileStringFromIDW(a1, 11LL, 9LL, L"Y", &v13, 4, 0);
  if ( (((_WORD)v13 - 89) & 0xFFDF) != 0 )
  {
    UserSessionState = W32GetUserSessionState(v6, v5);
    *(_DWORD *)(UserSessionState + 66792) &= ~0x80000u;
  }
  else
  {
    v7 = W32GetUserSessionState(v6, v5);
    *(_DWORD *)(v7 + 66792) |= 0x80000u;
  }
  FastGetProfileStringFromIDW(a1, 11LL, 220LL, L"N", &v13, 4, 0);
  if ( (((_WORD)v13 - 89) & 0xFFDF) != 0 )
  {
    v10 = W32GetUserSessionState(v9, v8);
    *(_DWORD *)(v10 + 66792) &= ~0x1000000u;
  }
  else
  {
    v11 = W32GetUserSessionState(v9, v8);
    *(_DWORD *)(v11 + 66792) |= 0x1000000u;
  }
}
