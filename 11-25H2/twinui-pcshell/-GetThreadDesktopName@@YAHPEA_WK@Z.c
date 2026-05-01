/*
 * XREFs of ?GetThreadDesktopName@@YAHPEA_WK@Z @ 0x1801E11F4
 * Callers:
 *     ?GetDesktopUniqueName@@YAXPEB_WPEA_WK@Z @ 0x1802AEFCC (-GetDesktopUniqueName@@YAXPEB_WPEA_WK@Z.c)
 * Callees:
 *     ?StringCchCopyW@@YAJPEA_W_KPEB_W@Z @ 0x18013602C (-StringCchCopyW@@YAJPEA_W_KPEB_W@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 */

__int64 __fastcall GetThreadDesktopName(wchar_t *a1)
{
  DWORD CurrentThreadId; // eax
  HDESK ThreadDesktop; // rax
  __int64 v4; // rdx
  signed __int64 v5; // r8
  unsigned int v6; // ecx
  wchar_t v7; // ax
  wchar_t *v8; // rax
  DWORD nLengthNeeded[4]; // [rsp+30h] [rbp-238h] BYREF
  _BYTE pvInfo[528]; // [rsp+40h] [rbp-228h] BYREF

  nLengthNeeded[0] = 0;
  CurrentThreadId = GetCurrentThreadId();
  ThreadDesktop = GetThreadDesktop(CurrentThreadId);
  if ( ThreadDesktop && GetUserObjectInformationW(ThreadDesktop, 2, pvInfo, 0x208u, nLengthNeeded) )
  {
    v4 = 260LL;
    v5 = pvInfo - (_BYTE *)a1;
    v6 = 1;
    do
    {
      if ( v4 == -2147483386 )
        break;
      v7 = *(wchar_t *)((char *)a1 + v5);
      if ( !v7 )
        break;
      *a1++ = v7;
      --v4;
    }
    while ( v4 );
    v8 = a1 - 1;
    if ( v4 )
      v8 = a1;
    *v8 = 0;
  }
  else
  {
    StringCchCopyW(a1, 260LL, &LocaleName);
    return 0;
  }
  return v6;
}
