/*
 * XREFs of LdrIsResItemExist @ 0x180017A70
 * Callers:
 *     LdrpResSearchResourceMappedFile @ 0x1800A71F0 (LdrpResSearchResourceMappedFile.c)
 * Callees:
 *     LdrRscIsTypeExist @ 0x1800173A0 (LdrRscIsTypeExist.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x1800175C0 (LdrpSetAlternateResourceModuleHandle.c)
 *     LdrpGetFromMUIMemCache @ 0x180018D20 (LdrpGetFromMUIMemCache.c)
 *     LdrpSearchResourceSection_U @ 0x180019960 (LdrpSearchResourceSection_U.c)
 *     LdrpAccessResourceDataNoMultipleLanguage @ 0x18001CA40 (LdrpAccessResourceDataNoMultipleLanguage.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 */

int __fastcall LdrIsResItemExist(PVOID BaseOfImage, const wchar_t **a2, __int64 a3, unsigned int a4)
{
  __int64 v7; // rax
  unsigned int *v8; // rbx
  int v9; // eax
  __int64 v10; // r9
  int result; // eax
  int v12; // [rsp+40h] [rbp-58h] BYREF
  __int64 v13; // [rsp+48h] [rbp-50h] BYREF
  unsigned int *v14; // [rsp+50h] [rbp-48h]
  const wchar_t *v15; // [rsp+60h] [rbp-38h]
  __int64 v16; // [rsp+68h] [rbp-30h]
  __int64 v17; // [rsp+70h] [rbp-28h]

  v12 = 0;
  v13 = 0LL;
  v7 = LdrpGetFromMUIMemCache(BaseOfImage);
  v14 = (unsigned int *)v7;
  v8 = (unsigned int *)v7;
  if ( v7 == -1 )
    return 0x80000;
  if ( !v7 )
  {
    v16 = 1LL;
    v15 = L"MUI";
    v17 = 0LL;
    v9 = LdrpSearchResourceSection_U(BaseOfImage, (__int64)&v13);
    if ( v9 >= 0 )
    {
      v9 = LdrpAccessResourceDataNoMultipleLanguage(BaseOfImage);
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
    LdrpSetAlternateResourceModuleHandle((__int64)BaseOfImage, 0LL, 0LL, v10, 0, 2, v9, 0LL);
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
