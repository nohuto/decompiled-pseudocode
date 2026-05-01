/*
 * XREFs of ??0?$heap_implements@UWASDKInitializationWrapper@@@impl@winrt@@QEAA@XZ @ 0x18044AB54
 * Callers:
 *     ?Initialize_WASDK@XamlApplication@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@SA?AUIInspectable@Foundation@67@XZ @ 0x18044B5EC (-Initialize_WASDK@XamlApplication@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@.c)
 * Callees:
 *     ?CreateOnCurrentThread@DispatcherQueueController@Dispatching@UI@Microsoft@winrt@@SA@XZ @ 0x18044B204 (-CreateOnCurrentThread@DispatcherQueueController@Dispatching@UI@Microsoft@winrt@@SA@XZ.c)
 *     ?InitializeForCurrentThread@WindowsXamlManager@Hosting@Xaml@UI@Microsoft@winrt@@SA@XZ @ 0x18044B530 (-InitializeForCurrentThread@WindowsXamlManager@Hosting@Xaml@UI@Microsoft@winrt@@SA@XZ.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall winrt::impl::heap_implements<WASDKInitializationWrapper>::heap_implements<WASDKInitializationWrapper>(
        _QWORD *a1)
{
  a1[2] = &winrt::impl::produce<WASDKInitializationWrapper,winrt::Windows::Foundation::IInspectable>::`vftable';
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  a1[1] = 1LL;
  *a1 = &WASDKInitializationWrapper::`vftable';
  winrt::Microsoft::UI::Dispatching::DispatcherQueueController::CreateOnCurrentThread();
  winrt::Microsoft::UI::Xaml::Hosting::WindowsXamlManager::InitializeForCurrentThread();
  *a1 = &WASDKInitializationWrapper::`vftable';
  return a1;
}
