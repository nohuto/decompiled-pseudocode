/*
 * XREFs of ?InitPreviousUserString@@YAXXZ @ 0x1400AA174
 * Callers:
 *     ?CreateProfileUserName@@YAPEAU_UNICODE_STRING@@PEAU?$Win32RawOptionalLockedItemAlways@UtagPROFILEUSERNAME@@$1?Win32FreePool@@YAXPEAX@Z@@@Z @ 0x1400A9270 (-CreateProfileUserName@@YAPEAU_UNICODE_STRING@@PEAU-$Win32RawOptionalLockedItemAlways@UtagPROFIL.c)
 *     OpenCacheKeyEx @ 0x1400A9CE0 (OpenCacheKeyEx.c)
 * Callees:
 *     GetProcessLuid @ 0x1400AA270 (GetProcessLuid.c)
 */

void __fastcall InitPreviousUserString(__int64 a1, __int64 a2)
{
  struct _LUID *UserSessionState; // rbx
  __int64 HighPart; // rdx
  struct _LUID v4; // rcx
  __int64 v5; // rbx
  struct _UNICODE_STRING *v6; // rbx
  struct _UNICODE_STRING KeyPath; // [rsp+20h] [rbp-18h] BYREF
  struct _LUID AuthenticationId; // [rsp+40h] [rbp+8h] BYREF

  AuthenticationId = 0LL;
  KeyPath = 0LL;
  UserSessionState = (struct _LUID *)W32GetUserSessionState(a1, a2);
  GetProcessLuid(0LL, &AuthenticationId);
  v4 = AuthenticationId;
  if ( AuthenticationId.LowPart != UserSessionState[8480].LowPart
    || (HighPart = (unsigned int)UserSessionState[8480].HighPart, AuthenticationId.HighPart != (_DWORD)HighPart) )
  {
    UserSessionState[8480] = AuthenticationId;
    v5 = ((__int64 (__fastcall *)(_QWORD, _QWORD))W32GetUserSessionState)(v4, HighPart);
    if ( AuthenticationId.LowPart == 999 && !AuthenticationId.HighPart || RtlFormatCurrentUserKeyPath(&KeyPath) < 0 )
    {
      v6 = (struct _UNICODE_STRING *)(v5 + 67824);
      RtlCopyUnicodeString(v6, &stru_14024B340);
    }
    else
    {
      v6 = (struct _UNICODE_STRING *)(v5 + 67824);
      RtlCopyUnicodeString(v6, &KeyPath);
      RtlFreeUnicodeString(&KeyPath);
    }
    RtlAppendUnicodeToString(v6, L"\\");
  }
}
