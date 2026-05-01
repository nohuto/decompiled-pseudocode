/*
 * XREFs of ?ComposeWin32AppIdForJavaApp@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBGAEBV?$basic_string_view@GU?$char_traits@G@std@@@2@@Z @ 0x1805775C8
 * Callers:
 *     ?GetAppIdForSpecialCategoryApp@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBGI@Z @ 0x1805769D0 (-GetAppIdForSpecialCategoryApp@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180031D20 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??4?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180033674 (--4-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@$$QEAV01@@Z @ 0x180033808 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@$$QEAV01@@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x180034F0C (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@XZ.c)
 *     ?find_last_path_segment@wil@@YAPEBGPEBG@Z @ 0x1800F7688 (-find_last_path_segment@wil@@YAPEBGPEBG@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800F7C64 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??$str_printf@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@wil@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBGZZ @ 0x1803D9688 (--$str_printf@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@wil@@YA-AV-$basic_s.c)
 *     ?GetCertSignerHashFromExe@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG@Z @ 0x180571CD0 (-GetCertSignerHashFromExe@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@PEB.c)
 *     ?PercentEncodeAndToLower@AppLimits@FamilySafety@Internal@Windows@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@PEBG@Z @ 0x180576DD0 (-PercentEncodeAndToLower@AppLimits@FamilySafety@Internal@Windows@@YA-AV-$unique_any_t@V-$unique_.c)
 */

// Hidden C++ exception states: #wind=3
void *__fastcall ComposeWin32AppIdForJavaApp(void *a1, __int64 a2, _QWORD *a3)
{
  const WCHAR *v6; // rdx
  __int64 v7; // r8
  const unsigned __int16 *last_path_segment; // rax
  __int64 v9; // r8
  _QWORD *v10; // r9
  _QWORD *v11; // rax
  void *v13[2]; // [rsp+30h] [rbp-39h] BYREF
  _QWORD v14[4]; // [rsp+40h] [rbp-29h] BYREF
  _QWORD v15[4]; // [rsp+60h] [rbp-9h] BYREF
  _QWORD v16[4]; // [rsp+80h] [rbp+17h] BYREF

  v13[0] = a1;
  std::wstring::wstring((__int64)v15);
  if ( *(_QWORD *)(v7 + 8) )
  {
    last_path_segment = wil::find_last_path_segment(v6, v6);
    Windows::Internal::FamilySafety::AppLimits::PercentEncodeAndToLower(v13, (__int64)last_path_segment);
    GetCertSignerHashFromExe((__int64)v14, a2, v9);
    if ( v14[2] )
    {
      v10 = v14;
      if ( v14[3] > 7uLL )
        v10 = (_QWORD *)v14[0];
      v11 = (_QWORD *)wil::str_printf<std::wstring>((__int64)v16, (__int64)L"win32:%s_%s!java=%s", v13[0], v10, *a3);
    }
    else
    {
      v11 = (_QWORD *)wil::str_printf<std::wstring>((__int64)v16, (__int64)L"win32:%s_!java=%s", v13[0], *a3);
    }
    std::wstring::operator=(v15, v11);
    std::wstring::_Tidy_deallocate(v16);
    std::wstring::wstring((__int64)a1, (__int64)v15);
    std::wstring::_Tidy_deallocate(v14);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(v13);
  }
  else
  {
    std::wstring::wstring((__int64)a1);
  }
  std::wstring::_Tidy_deallocate(v15);
  return a1;
}
