/*
 * XREFs of ?SpiSetAccessTimeOut@@YAHKPEAXHHPEAH@Z @ 0x1401B9CA4
 * Callers:
 *     xxxSystemParametersInfo @ 0x1401ACFA0 (xxxSystemParametersInfo.c)
 * Callees:
 *     ?AccessTimeOutReset@@YAXXZ @ 0x1400DF600 (-AccessTimeOutReset@@YAXXZ.c)
 *     ?SetAccessEnabledFlag@@YAXXZ @ 0x1400DF670 (-SetAccessEnabledFlag@@YAXXZ.c)
 *     ?RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1400E2B44 (-RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?WriteRegStringValue@@YAHIPEBG0@Z @ 0x1401EA0EC (-WriteRegStringValue@@YAHIPEBG0@Z.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 *     memset @ 0x14024BD80 (memset.c)
 *     memmove @ 0x14024C2C0 (memmove.c)
 */

__int64 __fastcall SpiSetAccessTimeOut(int a1, unsigned int *a2, int a3, int a4, int *a5)
{
  unsigned int v8; // ecx
  unsigned int *UserSessionState; // rdi
  int v10; // eax
  bool v11; // zf
  int v13; // edx
  int v14; // ecx
  int v15; // r8d
  int v16; // edx
  int v17; // ecx
  int v18; // r8d
  unsigned __int16 v19[40]; // [rsp+20h] [rbp-78h] BYREF

  if ( a1 && a1 != 12 )
    return 0LL;
  if ( !a2 )
    return 0LL;
  if ( *a2 != 12 )
    return 0LL;
  v8 = a2[1];
  if ( (v8 & 3) != v8 || a2[2] > 0x36EE80 )
    return 0LL;
  UserSessionState = (unsigned int *)W32GetUserSessionState(v8, (_DWORD)a2, a3);
  if ( a3 )
  {
    memset(v19, 0, sizeof(v19));
    RtlStringCchPrintfW(v19, 40LL, L"%d", a2[1]);
    *a5 = WriteRegStringValue(0x12u, L"Flags", v19);
    RtlStringCchPrintfW(v19, 40LL, L"%d", a2[2]);
    v10 = WriteRegStringValue(0x12u, L"TimeToWait", v19);
    v11 = (v10 & *a5) == 0;
    *a5 &= v10;
    a4 = *a5;
    if ( v11 )
    {
      RtlStringCchPrintfW(v19, 40LL, L"%d", UserSessionState[5231]);
      WriteRegStringValue(0x12u, L"Flags", v19);
      RtlStringCchPrintfW(v19, 40LL, L"%d", UserSessionState[5232]);
      WriteRegStringValue(0x12u, L"TimeToWait", v19);
      return 0LL;
    }
  }
  if ( !a4 )
    return 0LL;
  memmove(UserSessionState + 5230, a2, *a2);
  UserSessionState[5230] = 12;
  SetAccessEnabledFlag(v14, v13, v15);
  AccessTimeOutReset(v17, v16, v18);
  return 1LL;
}
