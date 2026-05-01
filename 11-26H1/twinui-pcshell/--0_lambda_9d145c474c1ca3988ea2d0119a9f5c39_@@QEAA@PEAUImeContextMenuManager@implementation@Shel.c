/*
 * XREFs of ??0_lambda_9d145c474c1ca3988ea2d0119a9f5c39_@@QEAA@PEAUImeContextMenuManager@implementation@Shell@Internal@Windows@winrt@@AEBU?$com_ptr@UImeContextMenuManager@implementation@Shell@Internal@Windows@winrt@@@6@@Z @ 0x18063AC70
 * Callers:
 *     ?subscribe_to_services@ImeContextMenuManager@implementation@Shell@Internal@Windows@winrt@@UEAAXPEAUIServiceProvider@@@Z @ 0x1800541D0 (-subscribe_to_services@ImeContextMenuManager@implementation@Shell@Internal@Windows@winrt@@UEAAXP.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x1800276DC (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 */

_QWORD *__fastcall _lambda_9d145c474c1ca3988ea2d0119a9f5c39_::_lambda_9d145c474c1ca3988ea2d0119a9f5c39_(
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
