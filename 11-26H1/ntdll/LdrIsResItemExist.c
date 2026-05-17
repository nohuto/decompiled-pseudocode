/*
 * XREFs of LdrIsResItemExist @ 0x18002C970
 * Callers:
 *     LdrpResSearchResourceMappedFile @ 0x1800A80C0 (LdrpResSearchResourceMappedFile.c)
 * Callees:
 *     LdrRscIsTypeExist @ 0x18002C2A0 (LdrRscIsTypeExist.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x18002C4C0 (LdrpSetAlternateResourceModuleHandle.c)
 *     LdrpGetFromMUIMemCache @ 0x18002DC20 (LdrpGetFromMUIMemCache.c)
 *     LdrpSearchResourceSection_U @ 0x18002E860 (LdrpSearchResourceSection_U.c)
 *     LdrpAccessResourceDataNoMultipleLanguage @ 0x1800318E0 (LdrpAccessResourceDataNoMultipleLanguage.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 */

int __fastcall LdrIsResItemExist(__int64 a1, const wchar_t **a2, __int64 a3, unsigned int a4)
{
  __int64 v7; // rax
  unsigned int *v8; // rbx
  int v9; // eax
  __int64 v10; // r9
  int result; // eax
  int v12; // [rsp+40h] [rbp-58h] BYREF
  __int64 v13; // [rsp+48h] [rbp-50h] BYREF
  unsigned int *v14; // [rsp+50h] [rbp-48h] BYREF
  char v15[8]; // [rsp+58h] [rbp-40h] BYREF
  _QWORD v16[3]; // [rsp+60h] [rbp-38h] BYREF

  v12 = 0;
  v13 = 0LL;
  v7 = LdrpGetFromMUIMemCache(a1, 0LL, 0LL, 8LL);
  v14 = (unsigned int *)v7;
  v8 = (unsigned int *)v7;
  if ( v7 == -1 )
    return 0x80000;
  if ( !v7 )
  {
    v16[1] = 1LL;
    v16[0] = L"MUI";
    v16[2] = 0LL;
    v9 = LdrpSearchResourceSection_U(a1, (unsigned int)v16, 3, 33554480, (__int64)&v13);
    if ( v9 >= 0 )
    {
      v9 = LdrpAccessResourceDataNoMultipleLanguage(a1, v13, &v14, v15);
      if ( v9 >= 0 )
      {
        v8 = v14;
        if ( *v14 == -20054323 )
          goto LABEL_8;
        v9 = -1073741701;
      }
    }
    v8 = 0LL;
LABEL_8:
    v10 = -1LL;
    if ( v8 )
      v10 = (__int64)v8;
    LdrpSetAlternateResourceModuleHandle(a1, 0LL, 0LL, v10, 0, 2, v9, 0LL);
    if ( v8 )
      goto LABEL_11;
    return 0x80000;
  }
LABEL_11:
  if ( (int)LdrRscIsTypeExist(v8, *a2, a4, &v12) < 0 )
    return 393216;
  result = v12;
  if ( (v8[5] & 0x100) != 0 )
    result = v12 | 0x100000;
  if ( (v8[4] & 0x10) != 0 )
    return result | 0x200000;
  return result;
}
