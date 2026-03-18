/*
 * XREFs of CheckDesktopPolicyChange @ 0x1401AB1F0
 * Callers:
 *     <none>
 * Callees:
 *     OpenCacheKeyEx @ 0x1400A9CE0 (OpenCacheKeyEx.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 */

__int64 __fastcall CheckDesktopPolicyChange(PCUNICODE_STRING Source, __int64 a2)
{
  unsigned int v2; // esi
  __int64 UserSessionState; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx
  void *v7; // r14
  NTSTATUS v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  void *v16; // r14
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rax
  int v21; // [rsp+30h] [rbp-30h] BYREF
  ULONG ResultLength; // [rsp+34h] [rbp-2Ch] BYREF
  __int64 KeyInformation; // [rsp+38h] [rbp-28h] BYREF
  __int128 v24; // [rsp+40h] [rbp-20h]

  v2 = 0;
  ResultLength = 0;
  v24 = 0LL;
  KeyInformation = 0LL;
  v21 = 4;
  UserSessionState = W32GetUserSessionState(Source, a2);
  v7 = OpenCacheKeyEx(Source, 4u, 0x20019u, &v21);
  if ( v7 )
  {
    v8 = ZwQueryKey(v7, KeyBasicInformation, &KeyInformation, 0x18u, &ResultLength);
    ZwClose(v7);
    if ( v8 < 0 )
      return 0LL;
    v12 = W32GetUserSessionState(v10, v9);
    *(_DWORD *)(v12 + 62784) |= 4u;
  }
  else
  {
    v13 = W32GetUserSessionState(v6, v5);
    *(_DWORD *)(v13 + 62784) &= ~4u;
  }
  if ( *(_QWORD *)(UserSessionState + 67296) != KeyInformation )
  {
    *(_QWORD *)(UserSessionState + 67296) = KeyInformation;
    v2 = 1;
  }
  KeyInformation = 0LL;
  v21 = 2;
  v16 = OpenCacheKeyEx(Source, 4u, 0x20019u, &v21);
  if ( v16 )
  {
    ZwQueryKey(v16, KeyBasicInformation, &KeyInformation, 0x18u, &ResultLength);
    ZwClose(v16);
    v19 = W32GetUserSessionState(v18, v17);
    *(_DWORD *)(v19 + 62784) |= 2u;
  }
  else
  {
    v20 = W32GetUserSessionState(v15, v14);
    *(_DWORD *)(v20 + 62784) &= ~2u;
  }
  if ( *(_QWORD *)(UserSessionState + 67304) != KeyInformation )
  {
    *(_QWORD *)(UserSessionState + 67304) = KeyInformation;
    return 1;
  }
  return v2;
}
