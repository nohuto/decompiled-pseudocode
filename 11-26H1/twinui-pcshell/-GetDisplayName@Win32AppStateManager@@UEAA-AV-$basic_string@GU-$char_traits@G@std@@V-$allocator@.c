/*
 * XREFs of ?GetDisplayName@Win32AppStateManager@@UEAA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG@Z @ 0x180574E40
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180030428 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x180030E44 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180031D20 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@$$QEAV01@@Z @ 0x180033808 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@$$QEAV01@@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?GetExePathFromAppId@ExePathToAppIdMapping@@QEAA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEBV23@@Z @ 0x180574FB4 (-GetExePathFromAppId@ExePathToAppIdMapping@@QEAA-AV-$basic_string@GU-$char_traits@G@std@@V-$allo.c)
 *     ?TryGetWindowFromAppId@ExeDataCache@@QEAA?AV?$optional@PEAUHWND__@@@std@@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@3@@Z @ 0x1805759A8 (-TryGetWindowFromAppId@ExeDataCache@@QEAA-AV-$optional@PEAUHWND__@@@std@@AEBV-$basic_string@GU-$.c)
 *     ?GetDisplayNameFromExePath@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG@Z @ 0x180576B90 (-GetDisplayNameFromExePath@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@PE.c)
 *     ?GetDisplayNameFromWindow@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAUHWND__@@@Z @ 0x180576D3C (-GetDisplayNameFromWindow@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@PEA.c)
 */

// Hidden C++ exception states: #wind=3
void *__fastcall Win32AppStateManager::GetDisplayName(__int64 a1, void *a2, __int64 a3)
{
  const WCHAR *v5; // rdx
  void *v7; // [rsp+28h] [rbp-21h] BYREF
  char v8; // [rsp+30h] [rbp-19h]
  __int64 v9; // [rsp+38h] [rbp-11h]
  LPCWSTR pszPath[4]; // [rsp+48h] [rbp-1h] BYREF
  _QWORD v11[4]; // [rsp+68h] [rbp+1Fh] BYREF

  v7 = a2;
  std::wstring::wstring((__int64)v11, a3);
  ExePathToAppIdMapping::GetExePathFromAppId(a1 + 120, pszPath, v11);
  if ( !pszPath[2] )
  {
    ExeDataCache::TryGetWindowFromAppId(a1 + 96, &v7, v11);
    if ( v8 )
    {
      GetDisplayNameFromWindow(&v7, v7);
      if ( v9 )
      {
        std::wstring::wstring((__int64)a2, &v7);
        std::wstring::_Tidy_deallocate(&v7);
        goto LABEL_10;
      }
      std::wstring::_Tidy_deallocate(&v7);
    }
    std::wstring::wstring((__int64)a2, (__int64)v11);
    goto LABEL_10;
  }
  v5 = (const WCHAR *)pszPath;
  if ( pszPath[3] > (LPCWSTR)7 )
    v5 = pszPath[0];
  GetDisplayNameFromExePath(a2, v5);
LABEL_10:
  std::wstring::_Tidy_deallocate(pszPath);
  std::wstring::_Tidy_deallocate(v11);
  return a2;
}
