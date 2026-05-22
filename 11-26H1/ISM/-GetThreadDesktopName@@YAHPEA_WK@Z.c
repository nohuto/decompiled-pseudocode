/*
 * XREFs of ?GetThreadDesktopName@@YAHPEA_WK@Z @ 0x180057FE8
 * Callers:
 *     ?GetDesktopUniqueName@@YAXPEB_WPEA_WK@Z @ 0x180057EC8 (-GetDesktopUniqueName@@YAXPEB_WPEA_WK@Z.c)
 * Callees:
 *     ?StringCchCopyW@@YAJPEA_W_KPEB_W@Z @ 0x180058250 (-StringCchCopyW@@YAJPEA_W_KPEB_W@Z.c)
 *     __security_check_cookie @ 0x18009ACC0 (__security_check_cookie.c)
 */

__int64 __fastcall GetThreadDesktopName(wchar_t *a1)
{
  DWORD CurrentThreadId; // eax
  HDESK ThreadDesktop; // rax
  __int64 v4; // rcx
  signed __int64 v5; // rdx
  wchar_t v6; // ax
  wchar_t *v7; // rax
  unsigned int v8; // r11d
  unsigned __int64 v10; // rdx
  DWORD nLengthNeeded[4]; // [rsp+30h] [rbp-238h] BYREF
  wchar_t pvInfo[264]; // [rsp+40h] [rbp-228h] BYREF

  nLengthNeeded[0] = 0;
  CurrentThreadId = GetCurrentThreadId();
  ThreadDesktop = GetThreadDesktop(CurrentThreadId);
  if ( ThreadDesktop && GetUserObjectInformationW(ThreadDesktop, 2, pvInfo, 0x208u, nLengthNeeded) )
  {
    StringCchCopyW(a1, v10, pvInfo);
    return 1;
  }
  else
  {
    v4 = 260LL;
    v5 = (char *)&WindowName - (char *)a1;
    do
    {
      if ( v4 == -2147483386 )
        break;
      v6 = *(wchar_t *)((char *)a1 + v5);
      if ( !v6 )
        break;
      *a1++ = v6;
      --v4;
    }
    while ( v4 );
    v7 = a1 - 1;
    v8 = 0;
    if ( v4 )
      v7 = a1;
    *v7 = 0;
  }
  return v8;
}
