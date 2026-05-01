/*
 * XREFs of ?NonDelegatingGetRuntimeClassName@?$root_implements@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@PEAVJointResize@@@experimental@std@@U?$IAsyncOperation@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@UIAsyncInfo@678@@impl@winrt@@IEAAHPEAPEAX@Z @ 0x180515F88
 * Callers:
 *     ?GetRuntimeClassName@?$produce_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@PEAVJointResize@@@experimental@std@@U?$IAsyncOperation@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@X@impl@winrt@@UEAAHPEAPEAX@Z @ 0x180515F50 (-GetRuntimeClassName@-$produce_base@Upromise_type@-$coroutine_traits@U-$IAsyncOperation@UTileCol.c)
 *     ?GetRuntimeClassName@?$produce_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@PEAVJointResize@@@experimental@std@@UIAsyncInfo@Foundation@Windows@winrt@@X@impl@winrt@@UEAAHPEAPEAX@Z @ 0x180515F70 (-GetRuntimeClassName@-$produce_base@Upromise_type@-$coroutine_traits@U-$IAsyncOpera_ea_180515F70.c)
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800AC1A4 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?GetRuntimeClassName@?$implements@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@PEAVJointResize@@@experimental@std@@U?$IAsyncOperation@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@UIAsyncInfo@678@@winrt@@EEBA?AUhstring@2@XZ @ 0x180515F10 (-GetRuntimeClassName@-$implements@Upromise_type@-$coroutine_traits@U-$IAsyncOperation@UTileColle.c)
 */

__int64 __fastcall winrt::impl::root_implements<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<winrt::WindowsUdk::UI::StartScreen::TileCollection>,JointResize *>::promise_type,winrt::Windows::Foundation::IAsyncOperation<winrt::WindowsUdk::UI::StartScreen::TileCollection>,winrt::Windows::Foundation::IAsyncInfo>::NonDelegatingGetRuntimeClassName(
        __int64 a1,
        struct winrt::impl::shared_hstring_header **a2)
{
  struct winrt::impl::shared_hstring_header **RuntimeClassName; // rax
  struct winrt::impl::shared_hstring_header *v4; // rcx
  struct winrt::impl::shared_hstring_header *v6; // [rsp+40h] [rbp+18h] BYREF

  RuntimeClassName = winrt::implements<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<winrt::WindowsUdk::UI::StartScreen::TileCollection>,JointResize *>::promise_type,winrt::Windows::Foundation::IAsyncOperation<winrt::WindowsUdk::UI::StartScreen::TileCollection>,winrt::Windows::Foundation::IAsyncInfo>::GetRuntimeClassName(
                       a1,
                       &v6);
  v4 = *RuntimeClassName;
  *RuntimeClassName = 0LL;
  *a2 = v4;
  winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)&v6);
  return 0LL;
}
