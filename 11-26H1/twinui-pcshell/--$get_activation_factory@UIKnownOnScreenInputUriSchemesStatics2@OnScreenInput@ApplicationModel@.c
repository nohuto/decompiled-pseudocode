/*
 * XREFs of ??$get_activation_factory@UIKnownOnScreenInputUriSchemesStatics2@OnScreenInput@ApplicationModel@WindowsUdk@winrt@@@winrt@@YA?AUIKnownOnScreenInputUriSchemesStatics2@OnScreenInput@ApplicationModel@WindowsUdk@0@AEBUhstring@param@0@@Z @ 0x1801F7560
 * Callers:
 *     ??$call@P6A?AUhstring@winrt@@AEBUIKnownOnScreenInputUriSchemesStatics2@OnScreenInput@ApplicationModel@WindowsUdk@2@@Z@?$factory_cache_entry@UKnownOnScreenInputUriSchemes@OnScreenInput@ApplicationModel@WindowsUdk@winrt@@UIKnownOnScreenInputUriSchemesStatics2@2345@@impl@winrt@@QEAA?A_P$$QEAP6A?AUhstring@2@AEBUIKnownOnScreenInputUriSchemesStatics2@OnScreenInput@ApplicationModel@WindowsUdk@2@@Z@Z @ 0x1801F7408 (--$call@P6A-AUhstring@winrt@@AEBUIKnownOnScreenInputUriSchemesStatics2@OnScreenInput@Application.c)
 * Callees:
 *     ??$get_runtime_activation_factory_impl@$0A@@impl@winrt@@YA?AUhresult@1@AEBUhstring@param@1@AEBUguid@1@PEAPEAX@Z @ 0x1801F1208 (--$get_runtime_activation_factory_impl@$0A@@impl@winrt@@YA-AUhresult@1@AEBUhstring@param@1@AEBUg.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802D92D0 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 */

_QWORD *__fastcall winrt::get_activation_factory<winrt::WindowsUdk::ApplicationModel::OnScreenInput::IKnownOnScreenInputUriSchemesStatics2>(
        _QWORD *a1,
        __int64 *a2)
{
  int v4; // [rsp+28h] [rbp-20h] BYREF
  __int128 v5; // [rsp+30h] [rbp-18h]
  _QWORD *v6; // [rsp+50h] [rbp+8h] BYREF
  __int64 v7; // [rsp+60h] [rbp+18h] BYREF

  v6 = a1;
  v7 = 0LL;
  v4 = 0;
  v5 = 0LL;
  winrt::impl::get_runtime_activation_factory_impl<0>(
    &v6,
    a2,
    (__int64)&winrt::impl::guid_v<winrt::WindowsUdk::ApplicationModel::OnScreenInput::IKnownOnScreenInputUriSchemesStatics2>,
    (__int64)&v7);
  winrt::check_hresult(&v6, (unsigned int)v6, &v4);
  *a1 = v7;
  return a1;
}
