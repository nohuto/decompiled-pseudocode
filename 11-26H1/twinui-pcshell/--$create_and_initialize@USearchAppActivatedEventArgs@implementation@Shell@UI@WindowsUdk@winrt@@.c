/*
 * XREFs of ??$create_and_initialize@USearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@winrt@@AEBUhstring@6@AEAW4SearchAppActivationMode@3456@AEAURect@Foundation@Windows@6@AEAUDeferralCompletedHandler@Foundation@Windows@6@AEA_NAEAU76@AEAUSearchAppHost@3456@@impl@winrt@@YAPEAUSearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@1@AEBUhstring@1@AEAW4SearchAppActivationMode@4561@AEAURect@Foundation@Windows@1@AEAUDeferralCompletedHandler@Foundation@Windows@1@AEA_NAEAU71@AEAUSearchAppHost@4561@@Z @ 0x1800E5E3C
 * Callers:
 *     ?ActivateAppAsync@UndockedSearchAppExperienceManager@@AEAAX_NW4ShellExperienceViewFocusOptions@Experience@Shell@Internal@Windows@@AEBUhstring@winrt@@W4SearchAppActivationMode@4UI@WindowsUdk@8@PEBG@Z @ 0x18023B458 (-ActivateAppAsync@UndockedSearchAppExperienceManager@@AEAAX_NW4ShellExperienceViewFocusOptions@E.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x1800276DC (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??0hstring@winrt@@QEAA@AEBU01@@Z @ 0x18002C9CC (--0hstring@winrt@@QEAA@AEBU01@@Z.c)
 *     ??0?$atomic@_K@std@@QEAA@_K@Z @ 0x180032450 (--0-$atomic@_K@std@@QEAA@_K@Z.c)
 *     ??0?$IReference@URect@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@QEAA@AEBURect@123@@Z @ 0x1800E5C4C (--0-$IReference@URect@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@QEAA@AEBURect@123@@Z.c)
 *     ??0?$producers_base@USearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@winrt@@V?$tuple@USearchAppActivatedEventArgs@Shell@UI@WindowsUdk@winrt@@UISearchAppActivatedEventArgs2@2345@UIActivatedEventArgs@Activation@ApplicationModel@Windows@5@UIInitializeActivatedEventArgs@89Windows@5@UILaunchActivatedEventArgs@89Windows@5@UILaunchActivatedEventArgs2@89Windows@5@UIActivatedEventArgsWithUser@89Windows@5@UIPrelaunchActivatedEventArgs@89Windows@5@@std@@@impl@winrt@@QEAA@XZ @ 0x1800E5CE4 (--0-$producers_base@USearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@winrt@@V-$tu.c)
 *     ??2@YAPEAX_K@Z @ 0x1802C9924 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=8
char *__fastcall winrt::impl::create_and_initialize<winrt::WindowsUdk::UI::Shell::implementation::SearchAppActivatedEventArgs,winrt::hstring const &,enum winrt::WindowsUdk::UI::Shell::SearchAppActivationMode &,winrt::Windows::Foundation::Rect &,winrt::Windows::Foundation::DeferralCompletedHandler &,bool &,winrt::hstring &,winrt::WindowsUdk::UI::Shell::SearchAppHost &>(
        struct winrt::hstring *a1,
        _DWORD *a2,
        __int128 *a3,
        _QWORD *a4,
        char *a5,
        struct winrt::hstring *a6,
        _QWORD *a7)
{
  char *v11; // r15
  char v12; // bp
  __int64 v13; // rdx
  unsigned int v14; // r9d
  unsigned int v15; // r8d
  unsigned int v16; // r8d
  __int64 (__fastcall **v18[6])(_QWORD, void *, __int64 *); // [rsp+28h] [rbp-30h] BYREF

  v11 = (char *)operator new(0x98uLL);
  v18[1] = (__int64 (__fastcall **)(_QWORD, void *, __int64 *))v11;
  v12 = *a5;
  winrt::Windows::Foundation::IReference<winrt::Windows::Foundation::Rect>::IReference<winrt::Windows::Foundation::Rect>(
    v18,
    a3);
  winrt::impl::producers_base<winrt::WindowsUdk::UI::Shell::implementation::SearchAppActivatedEventArgs,std::tuple<winrt::WindowsUdk::UI::Shell::SearchAppActivatedEventArgs,winrt::WindowsUdk::UI::Shell::ISearchAppActivatedEventArgs2,winrt::Windows::ApplicationModel::Activation::IActivatedEventArgs,winrt::Windows::ApplicationModel::Activation::IInitializeActivatedEventArgs,winrt::Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs,winrt::Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs2,winrt::Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser,winrt::Windows::ApplicationModel::Activation::IPrelaunchActivatedEventArgs>>::producers_base<winrt::WindowsUdk::UI::Shell::implementation::SearchAppActivatedEventArgs,std::tuple<winrt::WindowsUdk::UI::Shell::SearchAppActivatedEventArgs,winrt::WindowsUdk::UI::Shell::ISearchAppActivatedEventArgs2,winrt::Windows::ApplicationModel::Activation::IActivatedEventArgs,winrt::Windows::ApplicationModel::Activation::IInitializeActivatedEventArgs,winrt::Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs,winrt::Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs2,winrt::Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser,winrt::Windows::ApplicationModel::Activation::IPrelaunchActivatedEventArgs>>(
    (__int64)(v11 + 16),
    v13);
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  std::atomic<unsigned __int64>::atomic<unsigned __int64>((__int64)(v11 + 8), v14);
  *(_QWORD *)v11 = &winrt::WindowsUdk::UI::Shell::implementation::SearchAppActivatedEventArgs::`vftable';
  winrt::hstring::hstring((winrt::hstring *)(v11 + 80), a1, v15);
  *((_DWORD *)v11 + 22) = *a2;
  *((__int64 (__fastcall ***)(_QWORD, void *, __int64 *))v11 + 12) = v18[0];
  Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef((__int64 *)v11 + 12);
  *((_QWORD *)v11 + 13) = *a4;
  Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef((__int64 *)v11 + 13);
  *((_QWORD *)v11 + 14) = 0LL;
  *((_QWORD *)v11 + 15) = 0LL;
  v11[128] = v12;
  winrt::hstring::hstring((winrt::hstring *)(v11 + 136), a6, v16);
  *((_QWORD *)v11 + 18) = *a7;
  Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef((__int64 *)v11 + 18);
  *(_QWORD *)v11 = &winrt::impl::heap_implements<winrt::WindowsUdk::UI::Shell::implementation::SearchAppActivatedEventArgs>::`vftable';
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)v18);
  return v11;
}
