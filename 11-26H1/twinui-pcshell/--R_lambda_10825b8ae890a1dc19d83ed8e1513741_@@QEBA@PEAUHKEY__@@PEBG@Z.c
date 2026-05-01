/*
 * XREFs of ??R_lambda_10825b8ae890a1dc19d83ed8e1513741_@@QEBA@PEAUHKEY__@@PEBG@Z @ 0x1803D9BA0
 * Callers:
 *     ??$ForEachValueName@V_lambda_10825b8ae890a1dc19d83ed8e1513741_@@@@YAXPEAUHKEY__@@$$QEAV_lambda_10825b8ae890a1dc19d83ed8e1513741_@@@Z @ 0x1803D9010 (--$ForEachValueName@V_lambda_10825b8ae890a1dc19d83ed8e1513741_@@@@YAXPEAUHKEY__@@$$QEAV_lambda_1.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180031D20 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?IsClassAvailable@ComponentCreator@@SA_NAEBUImmersiveComponentInfo@@@Z @ 0x18018BFCC (-IsClassAvailable@ComponentCreator@@SA_NAEBUImmersiveComponentInfo@@@Z.c)
 *     ?TryGetString@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAUHKEY__@@PEBG1@Z @ 0x18020BA00 (-TryGetString@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@PEAUHKEY__@@PEB.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??$emplace_back@UClassIdAndInfo@ImmersiveShellComponentsConfiguration@@@?$vector@UClassIdAndInfo@ImmersiveShellComponentsConfiguration@@V?$allocator@UClassIdAndInfo@ImmersiveShellComponentsConfiguration@@@std@@@std@@QEAAAEAUClassIdAndInfo@ImmersiveShellComponentsConfiguration@@$$QEAU23@@Z @ 0x1803D92F0 (--$emplace_back@UClassIdAndInfo@ImmersiveShellComponentsConfiguration@@@-$vector@UClassIdAndInfo.c)
 *     ?GetComponentInfo@@YAAEBUImmersiveComponentInfo@@AEBU_GUID@@@Z @ 0x1803E4DC4 (-GetComponentInfo@@YAAEBUImmersiveComponentInfo@@AEBU_GUID@@@Z.c)
 */

char __fastcall _lambda_10825b8ae890a1dc19d83ed8e1513741_::operator()(__int64 a1, __int64 a2, const WCHAR *a3)
{
  const OLECHAR *v5; // rcx
  char result; // al
  const struct ImmersiveComponentInfo *ComponentInfo; // rdi
  LPCLSID v8; // rdx
  _QWORD *v9; // rcx
  LPCOLESTR lpsz[2]; // [rsp+20h] [rbp-38h] BYREF
  const struct ImmersiveComponentInfo *v11; // [rsp+30h] [rbp-28h]
  unsigned __int64 v12; // [rsp+38h] [rbp-20h]

  if ( CLSIDFromString(a3, *(LPCLSID *)a1) < 0 )
  {
    TryGetString((__int64 *)lpsz, **(HKEY **)(a1 + 8), 0LL, a3);
    v5 = (const OLECHAR *)lpsz;
    if ( v12 > 7 )
      v5 = lpsz[0];
    if ( CLSIDFromString(v5, *(LPCLSID *)a1) < 0 )
      return std::wstring::_Tidy_deallocate(lpsz);
    std::wstring::_Tidy_deallocate(lpsz);
  }
  ComponentInfo = GetComponentInfo(*(const struct _GUID **)a1);
  result = ComponentCreator::IsClassAvailable(ComponentInfo);
  if ( result )
  {
    v8 = *(LPCLSID *)a1;
    v9 = *(_QWORD **)(a1 + 16);
    v11 = ComponentInfo;
    *(GUID *)lpsz = *v8;
    return (unsigned __int8)std::vector<ImmersiveShellComponentsConfiguration::ClassIdAndInfo>::emplace_back<ImmersiveShellComponentsConfiguration::ClassIdAndInfo>(
                              v9,
                              (__int64)lpsz);
  }
  return result;
}
