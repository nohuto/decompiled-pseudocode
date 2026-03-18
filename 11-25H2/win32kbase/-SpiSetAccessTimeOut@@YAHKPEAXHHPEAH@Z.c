/*
 * XREFs of ?SpiSetAccessTimeOut@@YAHKPEAXHHPEAH@Z @ 0x14019D2A0
 * Callers:
 *     xxxSystemParametersInfo @ 0x1400A70D0 (xxxSystemParametersInfo.c)
 * Callees:
 *     ?SetAccessEnabledFlag@@YAXXZ @ 0x1400A6B70 (-SetAccessEnabledFlag@@YAXXZ.c)
 *     ?AccessTimeOutReset@@YAXXZ @ 0x1400A6CD0 (-AccessTimeOutReset@@YAXXZ.c)
 *     ?RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1400A87F8 (-RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?WriteRegStringValue@@YAHIPEBG0@Z @ 0x1401C14FC (-WriteRegStringValue@@YAHIPEBG0@Z.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 *     memset @ 0x140243000 (memset.c)
 *     memmove @ 0x140243540 (memmove.c)
 */

__int64 __fastcall SpiSetAccessTimeOut(int a1, unsigned int *a2, int a3, int a4, int *a5)
{
  __int64 v8; // rcx
  unsigned int *UserSessionState; // rdi
  int v10; // eax
  bool v11; // zf
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  unsigned __int16 v17[40]; // [rsp+20h] [rbp-78h] BYREF

  if ( a1 && a1 != 12 )
    return 0LL;
  if ( !a2 )
    return 0LL;
  if ( *a2 != 12 )
    return 0LL;
  v8 = a2[1];
  if ( (a2[1] & 3) != (_DWORD)v8 || a2[2] > 0x36EE80 )
    return 0LL;
  UserSessionState = (unsigned int *)W32GetUserSessionState(v8, a2);
  if ( a3 )
  {
    memset(v17, 0, sizeof(v17));
    RtlStringCchPrintfW(v17, 40LL, L"%d", a2[1]);
    *a5 = WriteRegStringValue(0x12u, L"Flags", v17);
    RtlStringCchPrintfW(v17, 40LL, L"%d", a2[2]);
    v10 = WriteRegStringValue(0x12u, L"TimeToWait", v17);
    v11 = (v10 & *a5) == 0;
    *a5 &= v10;
    a4 = *a5;
    if ( v11 )
    {
      RtlStringCchPrintfW(v17, 40LL, L"%d", UserSessionState[5223]);
      WriteRegStringValue(0x12u, L"Flags", v17);
      RtlStringCchPrintfW(v17, 40LL, L"%d", UserSessionState[5224]);
      WriteRegStringValue(0x12u, L"TimeToWait", v17);
      return 0LL;
    }
  }
  if ( !a4 )
    return 0LL;
  memmove(UserSessionState + 5222, a2, *a2);
  UserSessionState[5222] = 12;
  SetAccessEnabledFlag(v14, v13);
  AccessTimeOutReset(v16, v15);
  return 1LL;
}
