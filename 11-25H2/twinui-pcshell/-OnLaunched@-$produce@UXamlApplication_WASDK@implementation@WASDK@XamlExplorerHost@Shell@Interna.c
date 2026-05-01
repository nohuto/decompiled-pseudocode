/*
 * XREFs of ?OnLaunched@?$produce@UXamlApplication_WASDK@implementation@WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIApplicationOverrides@Xaml@UI@Microsoft@8@@impl@winrt@@UEAAHPEAX@Z @ 0x180446BC0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x1800A4EAC (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?OnLaunched@XamlApplication_WASDK@implementation@WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAAXULaunchActivatedEventArgs@Xaml@UI@Microsoft@8@@Z @ 0x18024E840 (-OnLaunched@XamlApplication_WASDK@implementation@WASDK@XamlExplorerHost@Shell@Internal@Windows@w.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::XamlExplorerHost::WASDK::implementation::XamlApplication_WASDK,winrt::Microsoft::UI::Xaml::IApplicationOverrides>::OnLaunched(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax
  __int64 v4[3]; // [rsp+20h] [rbp-18h] BYREF

  v4[0] = a2;
  Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef(v4);
  try
  {
    winrt::Windows::Internal::Shell::XamlExplorerHost::WASDK::implementation::XamlApplication_WASDK::OnLaunched(
      (RTL_SRWLOCK *)((a1 - 40) & -(__int64)(a1 != 0)),
      (winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)v4);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(v4);
  }
  return result;
}
