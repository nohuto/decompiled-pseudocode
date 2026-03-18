/*
 * XREFs of _CmDeleteInstallerClassMappedPropertyFromCoInstallers @ 0x14089B478
 * Callers:
 *     _CmSetInstallerClassMappedProperty @ 0x140B3E1DC (_CmSetInstallerClassMappedProperty.c)
 * Callees:
 *     _PnpCtxRegDeleteValue @ 0x14090B324 (_PnpCtxRegDeleteValue.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x140996AB8 (_PnpCtxGetCachedContextBaseKey.c)
 */

__int64 __fastcall CmDeleteInstallerClassMappedPropertyFromCoInstallers(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  int CachedContextBaseKey; // eax
  __int64 v5; // rcx
  int v6; // eax
  __int64 v8; // [rsp+40h] [rbp+18h] BYREF

  v2 = 0;
  v8 = 0LL;
  CachedContextBaseKey = PnpCtxGetCachedContextBaseKey(a1, 13LL, &v8);
  if ( CachedContextBaseKey >= 0 )
  {
    v6 = PnpCtxRegDeleteValue(v5, v8, a2);
    if ( v6 != -1073741772 && v6 != -1073741444 && v6 < 0 )
      return (unsigned int)v6;
  }
  else
  {
    return (unsigned int)CachedContextBaseKey;
  }
  return v2;
}
