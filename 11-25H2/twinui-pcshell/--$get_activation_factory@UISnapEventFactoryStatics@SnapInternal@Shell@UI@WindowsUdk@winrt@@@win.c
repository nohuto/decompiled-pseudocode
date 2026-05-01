/*
 * XREFs of ??$get_activation_factory@UISnapEventFactoryStatics@SnapInternal@Shell@UI@WindowsUdk@winrt@@@winrt@@YA?AUISnapEventFactoryStatics@SnapInternal@Shell@UI@WindowsUdk@0@AEBUhstring@param@0@@Z @ 0x1802A5BD8
 * Callers:
 *     ??$call@AEAV_lambda_32ed34ebfde5e368616da7ac4eaeafd9_@@@?$factory_cache_entry@USnapEventFactory@SnapInternal@Shell@UI@WindowsUdk@winrt@@UISnapEventFactoryStatics@23456@@impl@winrt@@QEAA?A_PAEAV_lambda_32ed34ebfde5e368616da7ac4eaeafd9_@@@Z @ 0x1802A5A90 (--$call@AEAV_lambda_32ed34ebfde5e368616da7ac4eaeafd9_@@@-$factory_cache_entry@USnapEventFactory@.c)
 *     ??$call@AEAV_lambda_8cef40b0f04add78b87f76d5b45d2d32_@@@?$factory_cache_entry@USnapEventFactory@SnapInternal@Shell@UI@WindowsUdk@winrt@@UISnapEventFactoryStatics@23456@@impl@winrt@@QEAA?A_PAEAV_lambda_8cef40b0f04add78b87f76d5b45d2d32_@@@Z @ 0x180594648 (--$call@AEAV_lambda_8cef40b0f04add78b87f76d5b45d2d32_@@@-$factory_cache_entry@USnapEventFactory@.c)
 * Callees:
 *     ??$get_runtime_activation_factory_impl@$0A@@impl@winrt@@YA?AUhresult@1@AEBUhstring@param@1@AEBUguid@1@PEAPEAX@Z @ 0x1801FC264 (--$get_runtime_activation_factory_impl@$0A@@impl@winrt@@YA-AUhresult@1@AEBUhstring@param@1@AEBUg.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802E04C8 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 */

_QWORD *__fastcall winrt::get_activation_factory<winrt::WindowsUdk::UI::Shell::SnapInternal::ISnapEventFactoryStatics>(
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
    (__int64)&winrt::impl::guid_v<winrt::WindowsUdk::UI::Shell::SnapInternal::ISnapEventFactoryStatics>,
    (__int64)&v7);
  winrt::check_hresult(&v6, (unsigned int)v6, &v4);
  *a1 = v7;
  return a1;
}
