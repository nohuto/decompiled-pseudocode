/*
 * XREFs of ?Create@PinOperationContext@@SA?AV?$shared_ptr@VPinOperationContext@@@std@@V?$shared_ptr@VPinRequestContext@@@3@PEFBU_ITEMIDLIST@@V?$basic_string_view@GU?$char_traits@G@std@@@3@@Z @ 0x1805E50B4
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::PinManager::HandleRequestPinItemAsync$_ResumeCoro$1_PinManagerTelemetry::PinManagerRequestPinItem_ @ 0x1805DE960 (winrt--Windows--Internal--Shell--implementation--PinManager--HandleRequestPinItemAsync$_ResumeCo.c)
 * Callees:
 *     ??4?$shared_ptr@VFlyoutView@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18003479C (--4-$shared_ptr@VFlyoutView@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1800373AC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x18013BBB8 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ?RequestorBestAvailableAppId@PinRequestContext@@QEBA?AV?$basic_string_view@GU?$char_traits@G@std@@@std@@XZ @ 0x180288564 (-RequestorBestAvailableAppId@PinRequestContext@@QEBA-AV-$basic_string_view@GU-$char_traits@G@std.c)
 *     ??$make_shared@VPinOperationContext@@$$V@std@@YA?AV?$shared_ptr@VPinOperationContext@@@0@XZ @ 0x18028D10C (--$make_shared@VPinOperationContext@@$$V@std@@YA-AV-$shared_ptr@VPinOperationContext@@@0@XZ.c)
 *     ?reset@?$unique_ptr@U_ITEMIDLIST@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAAXPEAU_ITEMIDLIST@@@Z @ 0x1802B97A0 (-reset@-$unique_ptr@U_ITEMIDLIST@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@Z@wil@@@w.c)
 *     ?RequestorImagePath@PinRequestContext@@QEBA?AV?$basic_string_view@GU?$char_traits@G@std@@@std@@XZ @ 0x1802C05B0 (-RequestorImagePath@PinRequestContext@@QEBA-AV-$basic_string_view@GU-$char_traits@G@std@@@std@@X.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??$OperationContextCreatedCustomPidl@PEBGPEBG@PinManagerTelemetry@@SAX$$QEAPEBG0@Z @ 0x1805DFB18 (--$OperationContextCreatedCustomPidl@PEBGPEBG@PinManagerTelemetry@@SAX$$QEAPEBG0@Z.c)
 */

// Hidden C++ exception states: #wind=2
const WCHAR *__fastcall PinOperationContext::Create(const WCHAR *a1, __int64 a2, const ITEMIDLIST *a3, __int64 a4)
{
  __int64 v8; // rbx
  LPITEMIDLIST v9; // rax
  std::_Ref_count_base *v10; // rcx
  const WCHAR *v12; // [rsp+28h] [rbp-60h] BYREF
  __int128 v13; // [rsp+30h] [rbp-58h] BYREF
  __int128 v14; // [rsp+40h] [rbp-48h] BYREF
  const WCHAR *v15; // [rsp+50h] [rbp-38h] BYREF

  v12 = a1;
  v15 = (const WCHAR *)a2;
  *(_OWORD *)a1 = 0LL;
  std::make_shared<PinOperationContext,>((__int64)a1);
  std::shared_ptr<FlyoutView>::operator=(*(_QWORD **)a1, (_QWORD *)a2);
  *(_DWORD *)(*(_QWORD *)a1 + 16LL) = 2;
  v8 = *(_QWORD *)a1;
  v9 = ILClone(a3);
  wistd::unique_ptr<_ITEMIDLIST,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
    (void **)(v8 + 88),
    v9);
  std::wstring::assign((char *)(*(_QWORD *)a1 + 24LL), *(void **)a4, *(_QWORD *)(a4 + 8));
  v15 = *(const WCHAR **)PinRequestContext::RequestorBestAvailableAppId(*(_QWORD *)a2, &v13);
  v12 = *(const WCHAR **)PinRequestContext::RequestorImagePath(*(_QWORD *)a2, &v14);
  PinManagerTelemetry::OperationContextCreatedCustomPidl<unsigned short const *,unsigned short const *>(&v12, &v15);
  v10 = *(std::_Ref_count_base **)(a2 + 8);
  if ( v10 )
    std::_Ref_count_base::_Decref(v10);
  return a1;
}
