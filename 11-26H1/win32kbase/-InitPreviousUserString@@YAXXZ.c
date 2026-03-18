/*
 * XREFs of ?InitPreviousUserString@@YAXXZ @ 0x1400E2140
 * Callers:
 *     ?CreateProfileUserName@@YAPEAU_UNICODE_STRING@@PEAU?$Win32RawOptionalLockedItemAlways@UtagPROFILEUSERNAME@@$1?Win32FreePool@@YAXPEAX@Z@@@Z @ 0x1400E11C0 (-CreateProfileUserName@@YAPEAU_UNICODE_STRING@@PEAU-$Win32RawOptionalLockedItemAlways@UtagPROFIL.c)
 *     OpenCacheKeyEx @ 0x1400E1D30 (OpenCacheKeyEx.c)
 * Callees:
 *     GetProcessLuid @ 0x1400E2240 (GetProcessLuid.c)
 */

void __fastcall InitPreviousUserString(int a1, int a2, int a3)
{
  struct _LUID *UserSessionState; // rbx
  LONG HighPart; // edx
  int v5; // r8d
  DWORD LowPart; // ecx
  __int64 v7; // rbx
  struct _UNICODE_STRING *v8; // rbx
  struct _UNICODE_STRING KeyPath; // [rsp+20h] [rbp-18h] BYREF
  struct _LUID AuthenticationId; // [rsp+40h] [rbp+8h] BYREF

  AuthenticationId = 0LL;
  KeyPath = 0LL;
  UserSessionState = (struct _LUID *)W32GetUserSessionState(a1, a2, a3);
  GetProcessLuid(0LL, &AuthenticationId);
  LowPart = AuthenticationId.LowPart;
  if ( AuthenticationId.LowPart != UserSessionState[8479].LowPart
    || (HighPart = UserSessionState[8479].HighPart, AuthenticationId.HighPart != HighPart) )
  {
    UserSessionState[8479] = AuthenticationId;
    v7 = W32GetUserSessionState(LowPart, HighPart, v5);
    if ( AuthenticationId.LowPart == 999 && !AuthenticationId.HighPart || RtlFormatCurrentUserKeyPath(&KeyPath) < 0 )
    {
      v8 = (struct _UNICODE_STRING *)(v7 + 67816);
      RtlCopyUnicodeString(v8, &stru_140255DF0);
    }
    else
    {
      v8 = (struct _UNICODE_STRING *)(v7 + 67816);
      RtlCopyUnicodeString(v8, &KeyPath);
      RtlFreeUnicodeString(&KeyPath);
    }
    RtlAppendUnicodeToString(v8, L"\\");
  }
}
