/*
 * XREFs of ??0?$delegate@U?$AsyncOperationCompletedHandler@ULaunchUriResult@System@Windows@winrt@@@Foundation@Windows@winrt@@V_lambda_47165361db58358e4b915b09b8be8c40_@@@impl@winrt@@QEAA@$$QEAV_lambda_47165361db58358e4b915b09b8be8c40_@@@Z @ 0x180622524
 * Callers:
 *     ??$?0V_lambda_47165361db58358e4b915b09b8be8c40_@@@?$AsyncOperationCompletedHandler@ULaunchUriResult@System@Windows@winrt@@@Foundation@Windows@winrt@@QEAA@V_lambda_47165361db58358e4b915b09b8be8c40_@@@Z @ 0x18061D3C8 (--$-0V_lambda_47165361db58358e4b915b09b8be8c40_@@@-$AsyncOperationCompletedHandler@ULaunchUriRes.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@$$QEAV01@@Z @ 0x180033808 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@$$QEAV01@@Z.c)
 */

__int64 __fastcall winrt::impl::delegate<winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::Windows::System::LaunchUriResult>,_lambda_47165361db58358e4b915b09b8be8c40_>::delegate<winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::Windows::System::LaunchUriResult>,_lambda_47165361db58358e4b915b09b8be8c40_>(
        __int64 a1,
        _DWORD *a2)
{
  __int64 v2; // r9
  __int64 v3; // r10

  *(_DWORD *)(a1 + 8) = 1;
  *(_DWORD *)(a1 + 16) = *a2;
  std::wstring::wstring(a1 + 24, (__int64)(a2 + 2));
  *(_DWORD *)(v3 + 56) = *(_DWORD *)(v2 + 40);
  *(_OWORD *)(v3 + 60) = *(_OWORD *)(v2 + 44);
  *(_QWORD *)(v3 + 80) = *(_QWORD *)(v2 + 64);
  *(_QWORD *)(v2 + 64) = 0LL;
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  *(_QWORD *)v3 = &winrt::impl::delegate<winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::Windows::System::LaunchUriResult>,_lambda_47165361db58358e4b915b09b8be8c40_>::`vftable';
  return v3;
}
