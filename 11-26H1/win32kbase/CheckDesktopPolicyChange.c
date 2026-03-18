/*
 * XREFs of CheckDesktopPolicyChange @ 0x1401CDFC0
 * Callers:
 *     <none>
 * Callees:
 *     OpenCacheKeyEx @ 0x1400E1D30 (OpenCacheKeyEx.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 */

__int64 __fastcall CheckDesktopPolicyChange(PCUNICODE_STRING Source, int a2, int a3)
{
  unsigned int v3; // esi
  __int64 UserSessionState; // rdi
  int v6; // edx
  int v7; // ecx
  int v8; // r8d
  void *v9; // r14
  NTSTATUS v10; // ebx
  int v11; // edx
  int v12; // ecx
  int v13; // r8d
  __int64 v15; // rax
  __int64 v16; // rax
  int v17; // edx
  int v18; // ecx
  void *v19; // rbx
  int v20; // r8d
  int v21; // edx
  int v22; // ecx
  int v23; // r8d
  __int64 v24; // rax
  __int64 v25; // rax
  int v26; // [rsp+30h] [rbp-30h] BYREF
  ULONG ResultLength; // [rsp+34h] [rbp-2Ch] BYREF
  __int64 KeyInformation; // [rsp+38h] [rbp-28h] BYREF
  __int128 v29; // [rsp+40h] [rbp-20h]

  v3 = 0;
  v29 = 0LL;
  ResultLength = 0;
  v26 = 4;
  KeyInformation = 0LL;
  UserSessionState = W32GetUserSessionState((_DWORD)Source, a2, a3);
  v9 = OpenCacheKeyEx(Source, 4u, 0x20019u, &v26);
  if ( v9 )
  {
    v10 = ZwQueryKey(v9, KeyBasicInformation, &KeyInformation, 0x18u, &ResultLength);
    ZwClose(v9);
    if ( v10 < 0 )
      return 0LL;
    v15 = W32GetUserSessionState(v12, v11, v13);
    *(_DWORD *)(v15 + 62776) |= 4u;
  }
  else
  {
    v16 = W32GetUserSessionState(v7, v6, v8);
    *(_DWORD *)(v16 + 62776) &= ~4u;
  }
  if ( *(_QWORD *)(UserSessionState + 67288) != KeyInformation )
  {
    *(_QWORD *)(UserSessionState + 67288) = KeyInformation;
    v3 = 1;
  }
  v26 = 2;
  KeyInformation = 0LL;
  v19 = OpenCacheKeyEx(Source, 4u, 0x20019u, &v26);
  if ( v19 )
  {
    ZwQueryKey(v19, KeyBasicInformation, &KeyInformation, 0x18u, &ResultLength);
    ZwClose(v19);
    v24 = W32GetUserSessionState(v22, v21, v23);
    *(_DWORD *)(v24 + 62776) |= 2u;
  }
  else
  {
    v25 = W32GetUserSessionState(v18, v17, v20);
    *(_DWORD *)(v25 + 62776) &= ~2u;
  }
  if ( *(_QWORD *)(UserSessionState + 67296) != KeyInformation )
  {
    *(_QWORD *)(UserSessionState + 67296) = KeyInformation;
    return 1;
  }
  return v3;
}
