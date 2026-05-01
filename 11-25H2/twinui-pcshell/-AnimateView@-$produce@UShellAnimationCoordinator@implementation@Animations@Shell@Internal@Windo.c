/*
 * XREFs of ?AnimateView@?$produce@UShellAnimationCoordinator@implementation@Animations@Shell@Internal@Windows@winrt@@UIShellAnimationCoordinator@34567@@impl@winrt@@UEAAHHPEAX_KUstruct_WindowsUdk_UI_Input_GestureAnimationData@23@UPoint@Foundation@Windows@3@@Z @ 0x180674E10
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ?AnimateView@ShellAnimationCoordinator@implementation@Animations@Shell@Internal@Windows@winrt@@QEAAXAEBW4ShellView@4UI@WindowsUdk@7@AEBUShellViewCoordinator@49WindowsUdk@7@_KAEBUGestureAnimationData@Input@9WindowsUdk@7@UPoint@Foundation@67@@Z @ 0x180674E78 (-AnimateView@ShellAnimationCoordinator@implementation@Animations@Shell@Internal@Windows@winrt@@Q.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::Animations::implementation::ShellAnimationCoordinator,winrt::Windows::Internal::Shell::Animations::IShellAnimationCoordinator>::AnimateView(
        __int64 a1,
        int a2,
        __int64 a3)
{
  __int64 result; // rax
  int v4; // [rsp+30h] [rbp-28h] BYREF
  __int64 v5; // [rsp+38h] [rbp-20h] BYREF

  try
  {
    v4 = a2;
    v5 = a3;
    winrt::Windows::Internal::Shell::Animations::implementation::ShellAnimationCoordinator::AnimateView(a1, &v4, &v5);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v4);
  }
  return result;
}
