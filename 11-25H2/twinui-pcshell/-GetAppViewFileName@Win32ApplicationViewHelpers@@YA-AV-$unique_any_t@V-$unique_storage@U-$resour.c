/*
 * XREFs of ?GetAppViewFileName@Win32ApplicationViewHelpers@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@PEAUIWin32ApplicationView@@@Z @ 0x1800ECE90
 * Callers:
 *     ?TryGetViewPropertySetFromHintsForWin32@Win32ApplicationViewHelpers@@YA?AV?$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wil@@PEAUIWin32ApplicationView@@_N@Z @ 0x1800ECBCC (-TryGetViewPropertySetFromHintsForWin32@Win32ApplicationViewHelpers@@YA-AV-$com_ptr_t@UIProperty.c)
 * Callees:
 *     ?GetApplicationViewImageName@Win32ApplicationViewHelpers@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@PEAUIWin32ApplicationView@@@Z @ 0x1800ECFC8 (-GetApplicationViewImageName@Win32ApplicationViewHelpers@@YA-AV-$unique_any_t@V-$unique_storage@.c)
 *     ??$make_unique_string@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@0@PEBG_K@Z @ 0x1800ED02C (--$make_unique_string@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTa.c)
 *     ?find_last_path_segment@wil@@YAPEBGPEBG@Z @ 0x1800ED078 (-find_last_path_segment@wil@@YAPEBGPEBG@Z.c)
 *     ?_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1802ED74C (-_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?close_reset@?$close_invoke_helper@$00P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZPEAG@details@wil@@SAXPEAG@Z @ 0x1802EDB7C (-close_reset@-$close_invoke_helper@$00P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZPEAG@details@wil@@SAXPEA.c)
 */

// Hidden C++ exception states: #wind=2
LPVOID *__fastcall Win32ApplicationViewHelpers::GetAppViewFileName(LPVOID *a1)
{
  const unsigned __int16 *v2; // rdx
  void *v3; // rcx
  const unsigned __int16 *last_path_segment; // rax
  const char *v5; // r9
  void *v6; // rdi
  void *v7; // rcx
  void *v9; // [rsp+28h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+8h]
  LPVOID pv; // [rsp+50h] [rbp+20h] BYREF

  *a1 = 0LL;
  Win32ApplicationViewHelpers::GetApplicationViewImageName(&pv);
  v3 = pv;
  if ( pv )
  {
    last_path_segment = wil::find_last_path_segment((LPCWSTR)pv, v2);
    wil::make_unique_string<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>(
      &v9,
      last_path_segment,
      -1LL);
    if ( a1 == &v9 )
    {
      v7 = v9;
    }
    else
    {
      v6 = v9;
      if ( *a1 )
        wil::details::close_invoke_helper<1,void (*)(void *),&void CoTaskMemFree(void *),unsigned short *>::close_reset(*a1);
      *a1 = v6;
      v7 = 0LL;
      v9 = 0LL;
    }
    if ( v7 )
      CoTaskMemFree(v7);
    if ( !*a1 )
      wil::details::in1diag3::_Throw_NullAlloc(
        retaddr,
        (void *)0x34,
        (unsigned int)"onecoreuap\\internal\\shell\\inc\\Win32ApplicationViewHelpers.h",
        v5);
    v3 = pv;
  }
  if ( v3 )
    CoTaskMemFree(v3);
  return a1;
}
