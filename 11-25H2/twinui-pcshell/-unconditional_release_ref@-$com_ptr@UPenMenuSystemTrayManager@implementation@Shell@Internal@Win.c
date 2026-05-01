/*
 * XREFs of ?unconditional_release_ref@?$com_ptr@UPenMenuSystemTrayManager@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x1801DDB18
 * Callers:
 *     ??1_lambda_5ff337e75dbe6adfb18f1337a0e4a7fa_@@QEAA@XZ @ 0x1801DDAFC (--1_lambda_5ff337e75dbe6adfb18f1337a0e4a7fa_@@QEAA@XZ.c)
 *     ??1?$implements_delegate@U?$TypedEventHandler@UShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@UDismissShellViewRequestedEventArgs@2345@@Foundation@Windows@winrt@@V_lambda_5ff337e75dbe6adfb18f1337a0e4a7fa_@@@impl@winrt@@QEAA@XZ @ 0x18028EB6C (--1-$implements_delegate@U-$TypedEventHandler@UShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@U.c)
 *     ?subscribe_to_services@PenMenuSystemTrayManager@implementation@Shell@Internal@Windows@winrt@@UEAAXPEAUIServiceProvider@@@Z @ 0x180292C80 (-subscribe_to_services@PenMenuSystemTrayManager@implementation@Shell@Internal@Windows@winrt@@UEA.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::PenMenuSystemTrayManager>::unconditional_release_ref(
        __int64 *a1)
{
  __int64 v1; // rdx

  v1 = *a1;
  *a1 = 0LL;
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
}
