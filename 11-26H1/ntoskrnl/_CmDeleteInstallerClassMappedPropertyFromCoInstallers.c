/*
 * XREFs of _CmDeleteInstallerClassMappedPropertyFromCoInstallers @ 0x1408A1878
 * Callers:
 *     _CmSetInstallerClassMappedProperty @ 0x140B40214 (_CmSetInstallerClassMappedProperty.c)
 * Callees:
 *     _PnpCtxGetCachedContextBaseKey @ 0x140957518 (_PnpCtxGetCachedContextBaseKey.c)
 *     _PnpCtxRegDeleteValue @ 0x1409AD448 (_PnpCtxRegDeleteValue.c)
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
