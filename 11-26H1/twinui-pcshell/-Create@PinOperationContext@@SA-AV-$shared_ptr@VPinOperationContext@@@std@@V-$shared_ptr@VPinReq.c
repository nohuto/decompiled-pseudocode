/*
 * XREFs of ?Create@PinOperationContext@@SA?AV?$shared_ptr@VPinOperationContext@@@std@@V?$shared_ptr@VPinRequestContext@@@3@AEBUhstring@winrt@@1@Z @ 0x18028CDF0
 * Callers:
 *     ?IsPinAllowed@PinManager@implementation@Shell@Internal@Windows@winrt@@QEAA_NAEBUhstring@6@@Z @ 0x1800F545C (-IsPinAllowed@PinManager@implementation@Shell@Internal@Windows@winrt@@QEAA_NAEBUhstring@6@@Z.c)
 *     winrt::Windows::Internal::Shell::implementation::PinManager::HandleRequestPinItemAsync$_ResumeCoro$1_PinManagerTelemetry::PinManagerRequestPinItem_ @ 0x1805DE960 (winrt--Windows--Internal--Shell--implementation--PinManager--HandleRequestPinItemAsync$_ResumeCo.c)
 * Callees:
 *     ??$_Traits_equal@U?$char_traits@G@std@@@std@@YA_NQEBG_K01@Z @ 0x1800303B8 (--$_Traits_equal@U-$char_traits@G@std@@@std@@YA_NQEBG_K01@Z.c)
 *     ??4?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@QEBG@Z @ 0x180030514 (--4-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV01@QEBG@Z.c)
 *     ?length@?$_WChar_traits@_W@std@@SA_KPEB_W@Z @ 0x18003062C (-length@-$_WChar_traits@_W@std@@SA_KPEB_W@Z.c)
 *     ??4?$shared_ptr@VFlyoutView@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18003479C (--4-$shared_ptr@VFlyoutView@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1800373AC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?c_str@hstring@winrt@@QEBAPEBGXZ @ 0x1800F6270 (-c_str@hstring@winrt@@QEBAPEBGXZ.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x18013BBB8 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ?GetPinnablePidl@@YA?AV?$unique_ptr@U_ITEMIDLIST@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@0@Z @ 0x18028D020 (-GetPinnablePidl@@YA-AV-$unique_ptr@U_ITEMIDLIST@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree.c)
 *     ??$make_shared@VPinOperationContext@@$$V@std@@YA?AV?$shared_ptr@VPinOperationContext@@@0@XZ @ 0x18028D10C (--$make_shared@VPinOperationContext@@$$V@std@@YA-AV-$shared_ptr@VPinOperationContext@@@0@XZ.c)
 *     ??$OperationContextCreatedStandard@PEBGPEBGPEBGPEBGAEAW4PinOperationType@@@PinManagerTelemetry@@SAX$$QEAPEBG000AEAW4PinOperationType@@@Z @ 0x18028D18C (--$OperationContextCreatedStandard@PEBGPEBGPEBGPEBGAEAW4PinOperationType@@@PinManagerTelemetry@@.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD **__fastcall PinOperationContext::Create(_QWORD **a1, _QWORD *a2, winrt::hstring *a3, winrt::hstring *a4)
{
  __int64 v8; // rcx
  unsigned __int64 v9; // rax
  unsigned __int16 *v10; // rcx
  unsigned __int16 *v11; // rax
  __int64 v12; // rcx
  const wchar_t *v13; // rcx
  __int64 v14; // r9
  __int64 v15; // rdx
  const wchar_t *v16; // rax
  _QWORD *v17; // rcx
  unsigned __int16 *v18; // rdx
  unsigned __int64 v19; // r8
  _QWORD *v20; // rax
  _QWORD *v21; // rcx
  __int64 *PinnablePidl; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  void *v25; // rax
  void *v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // r8
  std::_Ref_count_base *v29; // rcx
  unsigned __int16 *v31; // [rsp+30h] [rbp-50h] BYREF
  unsigned __int64 v32; // [rsp+38h] [rbp-48h]
  LPVOID pv; // [rsp+40h] [rbp-40h] BYREF
  int v34; // [rsp+48h] [rbp-38h]
  __int64 v35; // [rsp+50h] [rbp-30h] BYREF
  _QWORD v36[2]; // [rsp+60h] [rbp-20h] BYREF
  __int64 v37; // [rsp+70h] [rbp-10h] BYREF

  v35 = (__int64)a1;
  v37 = (__int64)a2;
  *(_OWORD *)a1 = 0LL;
  std::make_shared<PinOperationContext,>();
  v34 = 1;
  std::shared_ptr<FlyoutView>::operator=(*a1, a2);
  if ( *(_QWORD *)a3 )
  {
    v31 = (unsigned __int16 *)winrt::hstring::c_str(a3);
    v9 = std::_WChar_traits<wchar_t>::length((__int64)v31);
  }
  else
  {
    v8 = *(_QWORD *)(*a2 + 24LL);
    if ( v8 )
    {
      v9 = std::_WChar_traits<wchar_t>::length(v8);
    }
    else
    {
      v9 = 0LL;
      v10 = 0LL;
    }
    v31 = v10;
  }
  v32 = v9;
  std::wstring::assign((char *)*a1 + 24, v31, v9);
  v11 = (unsigned __int16 *)winrt::hstring::c_str(a4);
  std::wstring::operator=((char *)*a1 + 56, v11);
  v12 = *(_QWORD *)(*a2 + 24LL);
  if ( v12 )
  {
    v14 = std::_WChar_traits<wchar_t>::length(v12);
  }
  else
  {
    v14 = 0LL;
    v13 = 0LL;
  }
  v15 = (__int64)*a1;
  v16 = (const wchar_t *)(*a1 + 3);
  if ( (*a1)[6] > 7uLL )
    v16 = *(const wchar_t **)(v15 + 24);
  *((_DWORD *)*a1 + 4) = !std::_Traits_equal<std::char_traits<unsigned short>>(v16, *(_QWORD *)(v15 + 40), v13, v14);
  v17 = *a1;
  v18 = (unsigned __int16 *)(*a1 + 7);
  if ( (*a1)[10] > 7uLL )
    v18 = (unsigned __int16 *)v17[7];
  v19 = v17[9];
  v20 = v17 + 3;
  v21 = v20;
  if ( v20[3] > 7uLL )
    v21 = (_QWORD *)*v20;
  v31 = v18;
  v32 = v19;
  v36[0] = v21;
  v36[1] = v20[2];
  PinnablePidl = (__int64 *)GetPinnablePidl(&pv, v36, &v31);
  v23 = (__int64)*a1;
  v24 = *PinnablePidl;
  *PinnablePidl = 0LL;
  v25 = *(void **)(v23 + 88);
  *(_QWORD *)(v23 + 88) = v24;
  if ( v25 )
    CoTaskMemFree(v25);
  v26 = pv;
  pv = 0LL;
  if ( v26 )
    CoTaskMemFree(v26);
  pv = (LPVOID)winrt::hstring::c_str(a4);
  v31 = (unsigned __int16 *)winrt::hstring::c_str(a3);
  v27 = *a2;
  v37 = *(_QWORD *)(*a2 + 24LL) & -(__int64)(*(_QWORD *)(*a2 + 24LL) != 0LL);
  v35 = *(_QWORD *)(v27 + 32) & -(__int64)(*(_QWORD *)(v27 + 32) != 0LL);
  PinManagerTelemetry::OperationContextCreatedStandard<unsigned short const *,unsigned short const *,unsigned short const *,unsigned short const *,enum PinOperationType &>(
    (unsigned int)&v35,
    (unsigned int)&v37,
    (unsigned int)&v31,
    (unsigned int)&pv,
    v28);
  v29 = (std::_Ref_count_base *)a2[1];
  if ( v29 )
    std::_Ref_count_base::_Decref(v29);
  return a1;
}
