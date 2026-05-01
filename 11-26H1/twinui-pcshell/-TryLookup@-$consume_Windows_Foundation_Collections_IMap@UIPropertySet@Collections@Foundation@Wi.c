/*
 * XREFs of ?TryLookup@?$consume_Windows_Foundation_Collections_IMap@UIPropertySet@Collections@Foundation@Windows@winrt@@Uhstring@5@UIInspectable@345@@impl@winrt@@QEBA@AEBUhstring@param@3@@Z @ 0x18002843C
 * Callers:
 *     _anonymous_namespace_::TryGetTextFromProperty @ 0x180029018 (_anonymous_namespace_--TryGetTextFromProperty.c)
 *     _anonymous_namespace_::TryGetAvailableDashboardExtensionVersion @ 0x180279994 (_anonymous_namespace_--TryGetAvailableDashboardExtensionVersion.c)
 *     winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureSystemDialog::ShowAsync$_ResumeCoro$1 @ 0x1803391B0 (winrt--Windows--Internal--GamingExperiences--Posture--implementation--GamingPostureSystemDialog-.c)
 *     _anonymous_namespace_::TryLookupStringProperty @ 0x1805D9460 (_anonymous_namespace_--TryLookupStringProperty.c)
 *     ??$Serialize@UValueSetReader@Details@RemoteSystemData@@@RemoteSystem@RemoteSystemData@@QEAAXAEAUValueSetReader@Details@1@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x18064449C (--$Serialize@UValueSetReader@Details@RemoteSystemData@@@RemoteSystem@RemoteSystemData@@QEAAXAEAU.c)
 *     ??$TrySerialize@Uhstring@winrt@@@ValueSetReader@Details@RemoteSystemData@@QEAA_NAEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@AEAUhstring@winrt@@@Z @ 0x18064471C (--$TrySerialize@Uhstring@winrt@@@ValueSetReader@Details@RemoteSystemData@@QEAA_NAEBV-$basic_stri.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?put_abi@winrt@@YAPEAPEAXAEAUIUnknown@Foundation@Windows@1@@Z @ 0x180029578 (-put_abi@winrt@@YAPEAPEAXAEAUIUnknown@Foundation@Windows@1@@Z.c)
 *     ?check_hresult_allow_bounds@impl@winrt@@YA?AUhresult@2@U32@AEBUslim_source_location@12@@Z @ 0x180339FB4 (-check_hresult_allow_bounds@impl@winrt@@YA-AUhresult@2@U32@AEBUslim_source_location@12@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
winrt *__fastcall winrt::impl::consume_Windows_Foundation_Collections_IMap<winrt::Windows::Foundation::Collections::IPropertySet,winrt::hstring,winrt::Windows::Foundation::IInspectable>::TryLookup(
        void (__fastcall ****a1)(_QWORD, void *, __int64 *),
        winrt *a2,
        _QWORD *a3)
{
  __int64 v5; // rbx
  void (__fastcall ***v6)(_QWORD, void *, __int64 *); // rcx
  __int64 (__fastcall *v7)(__int64, _QWORD, void **); // rdi
  void **v8; // rax
  unsigned int v9; // eax
  int v11; // [rsp+28h] [rbp-18h] BYREF
  __int128 v12; // [rsp+30h] [rbp-10h]
  __int64 v13; // [rsp+70h] [rbp+30h] BYREF
  winrt *v14; // [rsp+78h] [rbp+38h]
  __int64 v15; // [rsp+80h] [rbp+40h] BYREF

  v14 = a2;
  v5 = 0LL;
  *(_QWORD *)a2 = 0LL;
  v11 = 0;
  v12 = 0LL;
  v6 = *a1;
  if ( v6 )
  {
    v13 = 0LL;
    (**v6)(
      v6,
      &winrt::impl::guid_v<winrt::Windows::Foundation::Collections::IMap<winrt::hstring,winrt::Windows::Foundation::IInspectable>>,
      &v13);
    v5 = v13;
  }
  v15 = v5;
  v7 = *(__int64 (__fastcall **)(__int64, _QWORD, void **))(*(_QWORD *)v5 + 48LL);
  v8 = winrt::put_abi(a2, (struct IUnknown *)a2);
  v9 = v7(v5, *a3, v8);
  winrt::impl::check_hresult_allow_bounds(&v13, v9, &v11);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v15);
  return a2;
}
