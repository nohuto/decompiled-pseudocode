/*
 * XREFs of ?Release@?$implements_delegate@U?$AsyncOperationCompletedHandler@ULaunchUriResult@System@Windows@winrt@@@Foundation@Windows@winrt@@V_lambda_47165361db58358e4b915b09b8be8c40_@@@impl@winrt@@UEAAIXZ @ 0x180633C20
 * Callers:
 *     <none>
 * Callees:
 *     ?decrement_reference@implements_delegate_base@impl@winrt@@QEAAIXZ @ 0x180287CD8 (-decrement_reference@implements_delegate_base@impl@winrt@@QEAAIXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1?$implements_delegate@U?$AsyncOperationCompletedHandler@ULaunchUriResult@System@Windows@winrt@@@Foundation@Windows@winrt@@V_lambda_47165361db58358e4b915b09b8be8c40_@@@impl@winrt@@QEAA@XZ @ 0x180622D8C (--1-$implements_delegate@U-$AsyncOperationCompletedHandler@ULaunchUriResult@System@Windows@winrt.c)
 */

__int64 __fastcall winrt::impl::implements_delegate<winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::Windows::System::LaunchUriResult>,_lambda_47165361db58358e4b915b09b8be8c40_>::Release(
        volatile signed __int32 *a1)
{
  unsigned int v2; // edi

  v2 = winrt::impl::implements_delegate_base::decrement_reference(a1 + 2);
  if ( !v2 && a1 )
  {
    winrt::impl::implements_delegate<winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::Windows::System::LaunchUriResult>,_lambda_47165361db58358e4b915b09b8be8c40_>::~implements_delegate<winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::Windows::System::LaunchUriResult>,_lambda_47165361db58358e4b915b09b8be8c40_>((__int64)a1);
    operator delete((void *)a1, (const struct std::nothrow_t *)0x58);
  }
  return v2;
}
