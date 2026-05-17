/*
 * XREFs of LdrpGetRcConfig @ 0x18002DE20
 * Callers:
 *     LdrpLoadResourceFromAlternativeModule @ 0x18002DF70 (LdrpLoadResourceFromAlternativeModule.c)
 *     LdrpSearchResourceSection_U @ 0x18002E860 (LdrpSearchResourceSection_U.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x180030230 (LdrLoadAlternateResourceModuleEx.c)
 *     LdrpVerifyAlternateResourceModuleEx @ 0x1800A6EEC (LdrpVerifyAlternateResourceModuleEx.c)
 *     LdrLoadAlternateResourceModule @ 0x1800E4F90 (LdrLoadAlternateResourceModule.c)
 *     LdrpCompareServiceChecksum @ 0x1800E539C (LdrpCompareServiceChecksum.c)
 * Callees:
 *     LdrpSetAlternateResourceModuleHandle @ 0x18002C4C0 (LdrpSetAlternateResourceModuleHandle.c)
 *     LdrpGetFromMUIMemCache @ 0x18002DC20 (LdrpGetFromMUIMemCache.c)
 *     LdrpSearchResourceSection_U @ 0x18002E860 (LdrpSearchResourceSection_U.c)
 *     LdrpAccessResourceDataNoMultipleLanguage @ 0x1800318E0 (LdrpAccessResourceDataNoMultipleLanguage.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 */

_DWORD *__fastcall LdrpGetRcConfig(__int64 a1, __int64 a2, char a3, char a4)
{
  _DWORD *result; // rax
  int v7; // eax
  _DWORD *v8; // rsi
  __int64 v9; // r9
  _DWORD *v10; // [rsp+40h] [rbp-48h] BYREF
  __int64 v11; // [rsp+48h] [rbp-40h] BYREF
  _BYTE v12[8]; // [rsp+50h] [rbp-38h] BYREF
  _QWORD v13[3]; // [rsp+58h] [rbp-30h] BYREF

  v11 = 0LL;
  v10 = 0LL;
  if ( !a4 )
    goto LABEL_6;
  result = LdrpGetFromMUIMemCache(a1, 0, 0LL, 8);
  v10 = result;
  if ( result == (_DWORD *)-1LL )
    return 0LL;
  if ( !result )
  {
LABEL_6:
    v13[0] = L"MUI";
    v13[1] = 1LL;
    v13[2] = 0LL;
    v7 = LdrpSearchResourceSection_U(a1, (unsigned int)v13, 3, 33554480, (__int64)&v11);
    if ( v7 >= 0 )
    {
      v7 = LdrpAccessResourceDataNoMultipleLanguage(a1, v11, &v10, v12);
      if ( v7 >= 0 )
      {
        v8 = v10;
        if ( *v10 == -20054323 )
        {
LABEL_11:
          if ( a3 )
          {
            v9 = -1LL;
            if ( v8 )
              v9 = (__int64)v8;
            LdrpSetAlternateResourceModuleHandle(a1, 0LL, 0LL, v9, 0, 2, v7, 0LL);
          }
          return v8;
        }
        v7 = -1073741701;
      }
    }
    v8 = 0LL;
    goto LABEL_11;
  }
  return result;
}
