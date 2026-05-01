/*
 * XREFs of ?_lambda_invoker_cdecl_@_lambda_ca8bd2610b0f0373fab456524c49e747_@@CA@AEBUITaskGroupDataModelStatics@TaskGroups@Shell@Internal@Windows@winrt@@@Z @ 0x180185DB0
 * Callers:
 *     <none>
 * Callees:
 *     ?CreateInstanceAsync@?$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStatics@UITaskGroupDataSourceAdapterStatics@TaskGroups@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18002AE28 (-CreateInstanceAsync@-$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStat.c)
 */

const struct winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataModelStatics *__fastcall _lambda_ca8bd2610b0f0373fab456524c49e747_::_lambda_invoker_cdecl_(
        const struct winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataModelStatics *a1,
        __int64 **a2)
{
  winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStatics<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataSourceAdapterStatics>::CreateInstanceAsync(
    a2,
    a1);
  return a1;
}
