/*
 * XREFs of ivrLoadImage @ 0x14021FD7C
 * Callers:
 *     ?ivrInitialize@@YAJXZ @ 0x14021F8E0 (-ivrInitialize@@YAJXZ.c)
 * Callees:
 *     UserGetLoadedImageInformation @ 0x1401D9CF0 (UserGetLoadedImageInformation.c)
 */

__int64 __fastcall ivrLoadImage(int a1, int a2, int a3)
{
  __int64 UserSessionState; // rax
  struct _UNICODE_STRING *v4; // rbx
  NTSTATUS v5; // eax
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  DestinationString = 0LL;
  UserSessionState = W32GetUserSessionState(a1, a2, a3);
  v4 = (struct _UNICODE_STRING *)(UserSessionState + 19416);
  *(_OWORD *)(UserSessionState + 19416) = 0LL;
  *(_OWORD *)(UserSessionState + 19432) = 0LL;
  *(_OWORD *)(UserSessionState + 19448) = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\SystemRoot\\System32\\win32kns.sys");
  *v4 = DestinationString;
  v5 = ZwSetSystemInformation(SystemLoadGdiDriverInSystemSpaceInformation, v4, 0x30uLL);
  if ( v5 >= 0 )
    return (__int64)v4;
  if ( v5 == -1073741554 )
    return (unsigned __int64)v4 & -(__int64)((unsigned int)UserGetLoadedImageInformation(
                                                             (wchar_t *)L"\\SystemRoot\\System32\\win32kns.sys",
                                                             v4) != 0);
  return 0LL;
}
