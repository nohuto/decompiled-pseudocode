/*
 * XREFs of ??$as@UIUriRuntimeClass@Foundation@Windows@@@IUnknown@Foundation@Windows@winrt@@QEBA?A_PXZ @ 0x1803A8638
 * Callers:
 *     ?InstallWebSearchPackage@@YAXAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@0V?$tip_test@V?$merged_data@U_tip_SearchWebProviderInstallTest@@U1@@details@tip2@@@tip2@@@Z @ 0x1803B4C7C (-InstallWebSearchPackage@@YAXAEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@0V.c)
 * Callees:
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802D92D0 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall winrt::Windows::Foundation::IUnknown::as<Windows::Foundation::IUriRuntimeClass>(
        __int64 (__fastcall ****a1)(_QWORD, void *, __int64 *),
        _QWORD *a2)
{
  __int64 (__fastcall ***v2)(_QWORD, void *, __int64 *); // rcx
  __int64 (__fastcall **v4)(_QWORD, void *, __int64 *); // rax
  int v5; // eax
  int v7; // [rsp+28h] [rbp-20h] BYREF
  __int128 v8; // [rsp+30h] [rbp-18h]
  __int64 v9; // [rsp+50h] [rbp+8h] BYREF
  _QWORD *v10; // [rsp+58h] [rbp+10h] BYREF

  v10 = a2;
  v2 = *a1;
  if ( v2 )
  {
    v9 = 0LL;
    v7 = 0;
    v4 = *v2;
    v8 = 0LL;
    v5 = (*v4)(v2, &winrt::impl::guid_v<Windows::Foundation::IUriRuntimeClass>, &v9);
    winrt::check_hresult((int *)&v10, v5, (__int64)&v7);
    *a2 = v9;
  }
  else
  {
    *a2 = 0LL;
  }
  return a2;
}
