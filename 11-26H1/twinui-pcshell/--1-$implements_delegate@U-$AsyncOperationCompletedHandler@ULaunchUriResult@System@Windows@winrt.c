/*
 * XREFs of ??1?$implements_delegate@U?$AsyncOperationCompletedHandler@ULaunchUriResult@System@Windows@winrt@@@Foundation@Windows@winrt@@V_lambda_47165361db58358e4b915b09b8be8c40_@@@impl@winrt@@QEAA@XZ @ 0x180622D8C
 * Callers:
 *     ?Release@?$implements_delegate@U?$AsyncOperationCompletedHandler@ULaunchUriResult@System@Windows@winrt@@@Foundation@Windows@winrt@@V_lambda_47165361db58358e4b915b09b8be8c40_@@@impl@winrt@@UEAAIXZ @ 0x180633C20 (-Release@-$implements_delegate@U-$AsyncOperationCompletedHandler@ULaunchUriResult@System@Windows.c)
 * Callees:
 *     ??1?$module_lock_updater@$00@impl@winrt@@QEAA@XZ @ 0x1800E68E8 (--1-$module_lock_updater@$00@impl@winrt@@QEAA@XZ.c)
 */

void __fastcall winrt::impl::implements_delegate<winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::Windows::System::LaunchUriResult>,_lambda_47165361db58358e4b915b09b8be8c40_>::~implements_delegate<winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::Windows::System::LaunchUriResult>,_lambda_47165361db58358e4b915b09b8be8c40_>(
        __int64 a1)
{
  winrt::impl::module_lock_updater<1>::~module_lock_updater<1>();
  _lambda_47165361db58358e4b915b09b8be8c40_::~_lambda_47165361db58358e4b915b09b8be8c40_((HWND *)(a1 + 16));
}
