/*
 * XREFs of ivrLoadImage @ 0x14021B83C
 * Callers:
 *     ?ivrInitialize@@YAJXZ @ 0x14021B40C (-ivrInitialize@@YAJXZ.c)
 * Callees:
 *     UserGetLoadedImageInformation @ 0x1401B6DF0 (UserGetLoadedImageInformation.c)
 */

__int64 __fastcall ivrLoadImage(__int64 a1, __int64 a2)
{
  __int64 UserSessionState; // rax
  struct _UNICODE_STRING *v3; // rbx
  NTSTATUS v4; // eax
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  DestinationString = 0LL;
  UserSessionState = W32GetUserSessionState(a1, a2);
  v3 = (struct _UNICODE_STRING *)(UserSessionState + 19384);
  *(_OWORD *)(UserSessionState + 19384) = 0LL;
  *(_OWORD *)(UserSessionState + 19400) = 0LL;
  *(_OWORD *)(UserSessionState + 19416) = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\SystemRoot\\System32\\win32kns.sys");
  *v3 = DestinationString;
  v4 = ZwSetSystemInformation(SystemLoadGdiDriverInSystemSpaceInformation, v3, 0x30uLL);
  if ( v4 >= 0 )
    return (__int64)v3;
  if ( v4 == -1073741554 )
    return (unsigned __int64)v3 & -(__int64)((unsigned int)UserGetLoadedImageInformation(
                                                             (wchar_t *)L"\\SystemRoot\\System32\\win32kns.sys",
                                                             v3) != 0);
  return 0LL;
}
