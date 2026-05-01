/*
 * XREFs of ??R_lambda_10825b8ae890a1dc19d83ed8e1513741_@@QEBA@PEAUHKEY__@@PEBG@Z @ 0x1803CFF30
 * Callers:
 *     ??$ForEachValueName@V_lambda_10825b8ae890a1dc19d83ed8e1513741_@@@@YAXPEAUHKEY__@@$$QEAV_lambda_10825b8ae890a1dc19d83ed8e1513741_@@@Z @ 0x1803CF3E0 (--$ForEachValueName@V_lambda_10825b8ae890a1dc19d83ed8e1513741_@@@@YAXPEAUHKEY__@@$$QEAV_lambda_1.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180058780 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?IsClassAvailable@ComponentCreator@@SA_NAEBUImmersiveComponentInfo@@@Z @ 0x1801920BC (-IsClassAvailable@ComponentCreator@@SA_NAEBUImmersiveComponentInfo@@@Z.c)
 *     ?TryGetString@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAUHKEY__@@PEBG1@Z @ 0x1802197C4 (-TryGetString@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@PEAUHKEY__@@PEB.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ??$emplace_back@UClassIdAndInfo@ImmersiveShellComponentsConfiguration@@@?$vector@UClassIdAndInfo@ImmersiveShellComponentsConfiguration@@V?$allocator@UClassIdAndInfo@ImmersiveShellComponentsConfiguration@@@std@@@std@@QEAA?A_T$$QEAUClassIdAndInfo@ImmersiveShellComponentsConfiguration@@@Z @ 0x1803CF674 (--$emplace_back@UClassIdAndInfo@ImmersiveShellComponentsConfiguration@@@-$vector@UClassIdAndInfo.c)
 *     ?GetComponentInfo@@YAAEBUImmersiveComponentInfo@@AEBU_GUID@@@Z @ 0x1803DBE58 (-GetComponentInfo@@YAAEBUImmersiveComponentInfo@@AEBU_GUID@@@Z.c)
 */

void __fastcall _lambda_10825b8ae890a1dc19d83ed8e1513741_::operator()(__int64 a1, __int64 a2, const WCHAR *a3)
{
  struct _GUID *v3; // rbx
  const OLECHAR *v6; // rcx
  const struct ImmersiveComponentInfo *ComponentInfo; // rdi
  struct _GUID v8; // xmm0
  __int64 v9; // rcx
  LPCOLESTR lpsz[2]; // [rsp+20h] [rbp-38h] BYREF
  const struct ImmersiveComponentInfo *v11; // [rsp+30h] [rbp-28h]
  unsigned __int64 v12; // [rsp+38h] [rbp-20h]

  v3 = *(struct _GUID **)a1;
  if ( CLSIDFromString(a3, *(LPCLSID *)a1) < 0 )
  {
    TryGetString((wchar_t *)lpsz, **(HKEY **)(a1 + 8), 0LL, a3);
    v6 = (const OLECHAR *)lpsz;
    if ( v12 > 7 )
      v6 = lpsz[0];
    if ( CLSIDFromString(v6, v3) < 0 )
    {
      std::wstring::_Tidy_deallocate((void **)lpsz);
      return;
    }
    std::wstring::_Tidy_deallocate((void **)lpsz);
  }
  ComponentInfo = GetComponentInfo(v3);
  if ( ComponentCreator::IsClassAvailable(ComponentInfo) )
  {
    v8 = *v3;
    v9 = *(_QWORD *)(a1 + 16);
    v11 = ComponentInfo;
    *(struct _GUID *)lpsz = v8;
    std::vector<ImmersiveShellComponentsConfiguration::ClassIdAndInfo>::emplace_back<ImmersiveShellComponentsConfiguration::ClassIdAndInfo>(
      v9,
      (__int64)lpsz);
  }
}
