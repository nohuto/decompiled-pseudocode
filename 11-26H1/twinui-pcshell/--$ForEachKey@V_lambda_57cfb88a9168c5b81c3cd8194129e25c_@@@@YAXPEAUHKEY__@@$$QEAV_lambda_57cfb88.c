/*
 * XREFs of ??$ForEachKey@V_lambda_57cfb88a9168c5b81c3cd8194129e25c_@@@@YAXPEAUHKEY__@@$$QEAV_lambda_57cfb88a9168c5b81c3cd8194129e25c_@@@Z @ 0x1803D8F48
 * Callers:
 *     ?GetComponents@ImmersiveShellComponentsConfiguration@@CA?AV?$vector@UClassIdAndInfo@ImmersiveShellComponentsConfiguration@@V?$allocator@UClassIdAndInfo@ImmersiveShellComponentsConfiguration@@@std@@@std@@PEAUHKEY__@@PEBG1@Z @ 0x1803E4EC8 (-GetComponents@ImmersiveShellComponentsConfiguration@@CA-AV-$vector@UClassIdAndInfo@ImmersiveShe.c)
 * Callees:
 *     ?IsClassAvailable@ComponentCreator@@SA_NAEBUImmersiveComponentInfo@@@Z @ 0x18018BFCC (-IsClassAvailable@ComponentCreator@@SA_NAEBUImmersiveComponentInfo@@@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??$emplace_back@UClassIdAndInfo@ImmersiveShellComponentsConfiguration@@@?$vector@UClassIdAndInfo@ImmersiveShellComponentsConfiguration@@V?$allocator@UClassIdAndInfo@ImmersiveShellComponentsConfiguration@@@std@@@std@@QEAAAEAUClassIdAndInfo@ImmersiveShellComponentsConfiguration@@$$QEAU23@@Z @ 0x1803D92F0 (--$emplace_back@UClassIdAndInfo@ImmersiveShellComponentsConfiguration@@@-$vector@UClassIdAndInfo.c)
 *     ?GetComponentInfo@@YAAEBUImmersiveComponentInfo@@AEBU_GUID@@@Z @ 0x1803E4DC4 (-GetComponentInfo@@YAAEBUImmersiveComponentInfo@@AEBU_GUID@@@Z.c)
 */

LSTATUS __fastcall ForEachKey<_lambda_57cfb88a9168c5b81c3cd8194129e25c_>(HKEY hKey, __int64 a2)
{
  DWORD v2; // esi
  DWORD v4; // edx
  HKEY v5; // rbp
  const struct ImmersiveComponentInfo *ComponentInfo; // rdi
  const struct _GUID *v7; // rcx
  struct _GUID v8; // xmm0
  __int64 v9; // rcx
  LSTATUS result; // eax
  struct _GUID v11; // [rsp+20h] [rbp-248h] BYREF
  const struct ImmersiveComponentInfo *v12; // [rsp+30h] [rbp-238h]
  OLECHAR sz[256]; // [rsp+40h] [rbp-228h] BYREF

  v2 = 0;
  v4 = 0;
  v5 = hKey;
  while ( 1 )
  {
    result = RegEnumKeyW(hKey, v4, sz, 0xFFu);
    if ( result )
      break;
    if ( CLSIDFromString(sz, *(LPCLSID *)a2) >= 0 )
    {
      ComponentInfo = GetComponentInfo(*(const struct _GUID **)a2);
      if ( ComponentCreator::IsClassAvailable(ComponentInfo) )
      {
        v7 = *(const struct _GUID **)a2;
        v12 = ComponentInfo;
        v8 = *v7;
        v9 = *(_QWORD *)(a2 + 8);
        v11 = v8;
        std::vector<ImmersiveShellComponentsConfiguration::ClassIdAndInfo>::emplace_back<ImmersiveShellComponentsConfiguration::ClassIdAndInfo>(
          v9,
          &v11);
      }
    }
    ++v2;
    hKey = v5;
    v4 = v2;
  }
  return result;
}
