/*
 * XREFs of ?ComposeWin32AppId@AppLimits@FamilySafety@Internal@Windows@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBGAEBV56@1@Z @ 0x1805767F4
 * Callers:
 *     ?ComputeAppIdFromExePath@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG@Z @ 0x180576934 (-ComputeAppIdFromExePath@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@PEBG.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180031D20 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??4?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180033674 (--4-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x180034F0C (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@XZ.c)
 *     ?find_last_path_segment@wil@@YAPEBGPEBG@Z @ 0x1800F7688 (-find_last_path_segment@wil@@YAPEBGPEBG@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800F7C64 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??$str_printf@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@wil@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBGZZ @ 0x1803D9688 (--$str_printf@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@wil@@YA-AV-$basic_s.c)
 *     ?PercentEncodeAndToLower@AppLimits@FamilySafety@Internal@Windows@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@PEBG@Z @ 0x180576DD0 (-PercentEncodeAndToLower@AppLimits@FamilySafety@Internal@Windows@@YA-AV-$unique_any_t@V-$unique_.c)
 *     ?TrimWhitespaceAndLimit@AppLimits@FamilySafety@Internal@Windows@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEBV56@_K@Z @ 0x180576F00 (-TrimWhitespaceAndLimit@AppLimits@FamilySafety@Internal@Windows@@YA-AV-$basic_string@GU-$char_tr.c)
 */

// Hidden C++ exception states: #wind=4
_QWORD *__fastcall Windows::Internal::FamilySafety::AppLimits::ComposeWin32AppId(_QWORD *a1, __int64 a2, _QWORD *a3)
{
  LPCWSTR v5; // rdx
  const unsigned __int16 *last_path_segment; // rax
  _QWORD *v7; // rax
  _QWORD *v8; // rdx
  _QWORD *v9; // rax
  void *v11; // [rsp+20h] [rbp-39h] BYREF
  int v12; // [rsp+28h] [rbp-31h]
  void *v13[2]; // [rsp+30h] [rbp-29h] BYREF
  _QWORD Src[4]; // [rsp+40h] [rbp-19h] BYREF
  _QWORD v15[4]; // [rsp+60h] [rbp+7h] BYREF

  v13[1] = a1;
  std::wstring::wstring((__int64)a1);
  v12 = 1;
  last_path_segment = wil::find_last_path_segment(v5, v5);
  Windows::Internal::FamilySafety::AppLimits::PercentEncodeAndToLower(&v11, last_path_segment);
  Windows::Internal::FamilySafety::AppLimits::TrimWhitespaceAndLimit(Src);
  if ( a3[2] )
  {
    if ( a3[3] > 7uLL )
      a3 = (_QWORD *)*a3;
    v7 = (_QWORD *)wil::str_printf<std::wstring>((__int64)v15, (__int64)L"win32:%s_%s", v11, a3);
    goto LABEL_10;
  }
  if ( !Src[2] )
  {
    v7 = (_QWORD *)wil::str_printf<std::wstring>((__int64)v15, (__int64)L"win32:%s_", v11);
LABEL_10:
    std::wstring::operator=(a1, v7);
    std::wstring::_Tidy_deallocate(v15);
    goto LABEL_11;
  }
  v8 = Src;
  if ( Src[3] > 7uLL )
    v8 = (_QWORD *)Src[0];
  Windows::Internal::FamilySafety::AppLimits::PercentEncodeAndToLower(v13, v8);
  v9 = (_QWORD *)wil::str_printf<std::wstring>((__int64)v15, (__int64)L"win32:%s_!dev=%s", v11, v13[0]);
  std::wstring::operator=(a1, v9);
  std::wstring::_Tidy_deallocate(v15);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(v13);
LABEL_11:
  std::wstring::_Tidy_deallocate(Src);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(&v11);
  return a1;
}
