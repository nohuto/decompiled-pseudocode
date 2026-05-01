/*
 * XREFs of ?_Throw_bad_weak_ptr@std@@YAXXZ @ 0x180297140
 * Callers:
 *     ?shared_from_this@?$enable_shared_from_this@VGuidedSnapAssistControl@@@std@@QEAA?AV?$shared_ptr@VGuidedSnapAssistControl@@@2@XZ @ 0x180082D58 (-shared_from_this@-$enable_shared_from_this@VGuidedSnapAssistControl@@@std@@QEAA-AV-$shared_ptr@.c)
 *     ?shared_from_this@?$enable_shared_from_this@VConnectedStandbyHelper@@@std@@QEAA?AV?$shared_ptr@VConnectedStandbyHelper@@@2@XZ @ 0x1800833D0 (-shared_from_this@-$enable_shared_from_this@VConnectedStandbyHelper@@@std@@QEAA-AV-$shared_ptr@V.c)
 *     ?HandleViewCreated@ConnectedStandbyHelper@@QEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180083DD4 (-HandleViewCreated@ConnectedStandbyHelper@@QEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Intern.c)
 *     wistd::__invoke_void_return_wrapper_void_::__call__lambda_9b3391374d276f0391e9ed84fc8af55c__&_unsigned_char_const_&_ @ 0x180297030 (wistd--__invoke_void_return_wrapper_void_--__call__lambda_9b3391374d276f0391e9ed84fc8af55c__-_un.c)
 *     ?shared_from_this@?$enable_shared_from_this@UBootProviderActivator@implementation@Shell@Internal@Windows@winrt@@@std@@QEAA?AV?$shared_ptr@UBootProviderActivator@implementation@Shell@Internal@Windows@winrt@@@2@XZ @ 0x18049923C (-shared_from_this@-$enable_shared_from_this@UBootProviderActivator@implementation@Shell@Internal.c)
 *     ?ActivateProvider@SwitchProviderActivator@implementation@Shell@Internal@Windows@winrt@@UEAA?AUTransitionScreenId@TransitionScreen@CloudDesktop@3456@AEBU8893456@AEBURemoteDesktopProviderInfo@3456@@Z @ 0x180645610 (-ActivateProvider@SwitchProviderActivator@implementation@Shell@Internal@Windows@winrt@@UEAA-AUTr.c)
 * Callees:
 *     _CxxThrowException_0 @ 0x1802D3008 (_CxxThrowException_0.c)
 */

void __noreturn std::_Throw_bad_weak_ptr(void)
{
  void **pExceptionObject; // [rsp+20h] [rbp-28h] BYREF
  __int128 v1; // [rsp+28h] [rbp-20h]

  pExceptionObject = &std::bad_weak_ptr::`vftable';
  v1 = 0LL;
  throw (std::bad_weak_ptr *)&pExceptionObject;
}
