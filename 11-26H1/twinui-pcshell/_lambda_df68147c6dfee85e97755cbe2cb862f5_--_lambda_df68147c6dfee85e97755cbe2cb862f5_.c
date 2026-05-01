/*
 * XREFs of _lambda_df68147c6dfee85e97755cbe2cb862f5_::_lambda_df68147c6dfee85e97755cbe2cb862f5_ @ 0x1805CABD8
 * Callers:
 *     ?publish_services@DashboardManager@implementation@Shell@Internal@Windows@winrt@@UEAAXPEAUIServiceProvider@@PEAUIProfferService@@@Z @ 0x180053FE0 (-publish_services@DashboardManager@implementation@Shell@Internal@Windows@winrt@@UEAAXPEAUIServic.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x1800276DC (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 */

_QWORD *__fastcall lambda_df68147c6dfee85e97755cbe2cb862f5_::_lambda_df68147c6dfee85e97755cbe2cb862f5_(
        _QWORD *a1,
        __int64 a2,
        __int64 *a3)
{
  __int64 *v4; // rcx

  *a1 = a2;
  v4 = a1 + 1;
  *v4 = *a3;
  Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef(v4);
  return a1;
}
