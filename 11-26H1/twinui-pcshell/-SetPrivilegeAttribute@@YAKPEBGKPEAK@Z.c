/*
 * XREFs of ?SetPrivilegeAttribute@@YAKPEBGKPEAK@Z @ 0x180675950
 * Callers:
 *     ?HandleEnterFSEDialogResult@GamingPostureController@implementation@Posture@GamingExperiences@Internal@Windows@winrt@@AEAAJUhstring@7@AEAVSetGamingPostureStateActivity@GamingPostureCoreTelemetryProvider@@@Z @ 0x18032C500 (-HandleEnterFSEDialogResult@GamingPostureController@implementation@Posture@GamingExperiences@Int.c)
 * Callees:
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?SHOpenEffectiveToken@@YAJKHPEAPEAX@Z @ 0x18067588C (-SHOpenEffectiveToken@@YAJKHPEAPEAX@Z.c)
 */

__int64 __fastcall SetPrivilegeAttribute(const unsigned __int16 *a1, DWORD a2, unsigned int *a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  DWORD LastError; // ebx
  DWORD ReturnLength; // [rsp+30h] [rbp-40h] BYREF
  HANDLE TokenHandle; // [rsp+38h] [rbp-38h] BYREF
  struct _LUID Luid; // [rsp+40h] [rbp-30h] BYREF
  struct _TOKEN_PRIVILEGES NewState; // [rsp+48h] [rbp-28h] BYREF
  struct _TOKEN_PRIVILEGES PreviousState; // [rsp+58h] [rbp-18h] BYREF

  Luid = 0LL;
  if ( LookupPrivilegeValueW(0LL, L"SeShutdownPrivilege", &Luid)
    && (TokenHandle = 0LL, SHOpenEffectiveToken(v6, v5, &TokenHandle) >= 0) )
  {
    NewState.Privileges[0].Luid = Luid;
    NewState.PrivilegeCount = 1;
    NewState.Privileges[0].Attributes = a2;
    PreviousState = 0LL;
    ReturnLength = 16;
    if ( AdjustTokenPrivileges(TokenHandle, 0, &NewState, 0x10u, &PreviousState, &ReturnLength) && a3 )
      *a3 = PreviousState.Privileges[0].Attributes;
    LastError = GetLastError();
    CloseHandle(TokenHandle);
  }
  else
  {
    return GetLastError();
  }
  return LastError;
}
