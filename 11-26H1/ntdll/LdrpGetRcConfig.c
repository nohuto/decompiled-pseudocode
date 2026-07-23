/*
 * XREFs of LdrpGetRcConfig @ 0x180018F20
 * Callers:
 *     LdrpLoadResourceFromAlternativeModule @ 0x180019070 (LdrpLoadResourceFromAlternativeModule.c)
 *     LdrpSearchResourceSection_U @ 0x180019960 (LdrpSearchResourceSection_U.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x18001B390 (LdrLoadAlternateResourceModuleEx.c)
 *     LdrpVerifyAlternateResourceModuleEx @ 0x1800A601C (LdrpVerifyAlternateResourceModuleEx.c)
 *     LdrLoadAlternateResourceModule @ 0x1800E2E40 (LdrLoadAlternateResourceModule.c)
 *     LdrpCompareServiceChecksum @ 0x1800E324C (LdrpCompareServiceChecksum.c)
 * Callees:
 *     LdrpSetAlternateResourceModuleHandle @ 0x1800175C0 (LdrpSetAlternateResourceModuleHandle.c)
 *     LdrpGetFromMUIMemCache @ 0x180018D20 (LdrpGetFromMUIMemCache.c)
 *     LdrpSearchResourceSection_U @ 0x180019960 (LdrpSearchResourceSection_U.c)
 *     LdrpAccessResourceDataNoMultipleLanguage @ 0x18001CA40 (LdrpAccessResourceDataNoMultipleLanguage.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 */

_DWORD *__fastcall LdrpGetRcConfig(PVOID BaseOfImage, __int64 a2, char a3, char a4)
{
  _DWORD *result; // rax
  int v7; // eax
  _DWORD *v8; // rsi
  __int64 v9; // r9
  _DWORD *v10; // [rsp+40h] [rbp-48h]
  __int64 v11[5]; // [rsp+48h] [rbp-40h] BYREF

  v11[0] = 0LL;
  v10 = 0LL;
  if ( !a4 )
    goto LABEL_6;
  result = LdrpGetFromMUIMemCache((unsigned __int64)BaseOfImage, 0, 0LL, 8);
  v10 = result;
  if ( result == (_DWORD *)-1LL )
    return 0LL;
  if ( !result )
  {
LABEL_6:
    v11[2] = (__int64)L"MUI";
    v11[3] = 1LL;
    v11[4] = 0LL;
    v7 = LdrpSearchResourceSection_U(BaseOfImage, (__int64)v11);
    if ( v7 >= 0 )
    {
      v7 = LdrpAccessResourceDataNoMultipleLanguage(BaseOfImage);
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
            LdrpSetAlternateResourceModuleHandle((__int64)BaseOfImage, 0LL, 0LL, v9, 0, 2, v7, 0LL);
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
