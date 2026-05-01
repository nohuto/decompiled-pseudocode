/*
 * XREFs of ?Update@?$consume_Windows_Internal_Shell_CloudDesktop_TransitionScreen_ITransitionScreen@UITransitionScreen@TransitionScreen@CloudDesktop@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@AEBUTransitionScreenId@TransitionScreen@CloudDesktop@Shell@Internal@Windows@3@AEBW4ScreenType@567893@AEBV?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z @ 0x180636DF0
 * Callers:
 *     _lambda_1cf95a55fff0866401cd411783285d2a_::operator() @ 0x18063347C (_lambda_1cf95a55fff0866401cd411783285d2a_--operator().c)
 *     ?ActivateProvider@BootProviderActivator@implementation@Shell@Internal@Windows@winrt@@UEAA?AUTransitionScreenId@TransitionScreen@CloudDesktop@3456@AEBU8893456@AEBURemoteDesktopProviderInfo@3456@@Z @ 0x1806427E0 (-ActivateProvider@BootProviderActivator@implementation@Shell@Internal@Windows@winrt@@UEAA-AUTran.c)
 *     ?ShowPhysicalDeviceAccessTransitionScreen@BootPhysicalDeviceAccessState@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBV?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@@Z @ 0x180644868 (-ShowPhysicalDeviceAccessTransitionScreen@BootPhysicalDeviceAccessState@implementation@Shell@Int.c)
 *     ?ShowErrorTransitionScreen@SwitchConnectionHandler@implementation@Shell@Internal@Windows@winrt@@UEAAXAEBV?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@@Z @ 0x180648DC0 (-ShowErrorTransitionScreen@SwitchConnectionHandler@implementation@Shell@Internal@Windows@winrt@@.c)
 *     ?ShowErrorTransitionScreen@ConnectionHandler@implementation@Shell@Internal@Windows@winrt@@UEAAXAEBV?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@@Z @ 0x18064C400 (-ShowErrorTransitionScreen@ConnectionHandler@implementation@Shell@Internal@Windows@winrt@@UEAAXA.c)
 * Callees:
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802E04C8 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

int *__fastcall winrt::impl::consume_Windows_Internal_Shell_CloudDesktop_TransitionScreen_ITransitionScreen<winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::ITransitionScreen>::Update(
        __int64 **a1,
        unsigned int *a2,
        unsigned int *a3,
        __int64 *a4)
{
  __int64 *v4; // rcx
  __int64 v5; // r9
  __int64 v6; // r8
  __int64 v7; // rdx
  __int64 v8; // rax
  int v9; // eax
  int v11; // [rsp+30h] [rbp-28h] BYREF
  __int128 v12; // [rsp+38h] [rbp-20h]
  int v13; // [rsp+60h] [rbp+8h] BYREF

  v4 = *a1;
  v5 = *a4;
  v6 = *a3;
  v7 = *a2;
  v8 = *v4;
  v11 = 0;
  v12 = 0LL;
  v9 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64, __int64))(v8 + 64))(v4, v7, v6, v5);
  return winrt::check_hresult(&v13, v9, (__int64)&v11);
}
