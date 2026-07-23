/*
 * XREFs of _CmSetInstallerClassMappedPropertyFromCoInstallers @ 0x1408A261C
 * Callers:
 *     _CmSetInstallerClassMappedProperty @ 0x140B40214 (_CmSetInstallerClassMappedProperty.c)
 * Callees:
 *     _PnpCtxGetCachedContextBaseKey @ 0x140957518 (_PnpCtxGetCachedContextBaseKey.c)
 *     _PnpCtxRegSetValue @ 0x1409AD0CC (_PnpCtxRegSetValue.c)
 */

__int64 __fastcall CmSetInstallerClassMappedPropertyFromCoInstallers(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        int a6)
{
  __int64 result; // rax
  __int64 v8; // rcx
  int v9; // ecx
  __int64 v10; // [rsp+50h] [rbp+18h] BYREF

  v10 = 0LL;
  if ( a4 != 8210 )
    return 3221225485LL;
  result = PnpCtxGetCachedContextBaseKey(a1, 13LL, &v10);
  if ( (int)result >= 0 )
  {
    v9 = PnpCtxRegSetValue(v8, v10, a2, 7LL, a5, a6);
    if ( v9 == -1073741444 )
    {
      return 3221225701LL;
    }
    else
    {
      result = 0LL;
      if ( v9 < 0 )
        return (unsigned int)v9;
    }
  }
  return result;
}
