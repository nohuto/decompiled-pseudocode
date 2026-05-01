/*
 * XREFs of winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance::ShowFlyoutAsync$_ResumeCoro$1 @ 0x18026C6B0
 * Callers:
 *     ?ShowFlyoutAsync@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@AEAA?AUfire_and_forget@7@XZ @ 0x18026C950 (-ShowFlyoutAsync@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@A.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?CreateInstanceAsync@?$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStatics@UITaskGroupDataSourceAdapterStatics@TaskGroups@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18002AE28 (-CreateInstanceAsync@-$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStat.c)
 *     ?AddRef@?$root_implements@URemoteDesktopProviderInfo@implementation@Shell@Internal@Windows@winrt@@U13456@@impl@winrt@@QEAAIXZ @ 0x1800E6A6C (-AddRef@-$root_implements@URemoteDesktopProviderInfo@implementation@Shell@Internal@Windows@winrt.c)
 *     ??0resume_apartment_context@impl@winrt@@QEAA@XZ @ 0x180136284 (--0resume_apartment_context@impl@winrt@@QEAA@XZ.c)
 *     ?await_resume@apartment_awaiter@impl@winrt@@QEBAXXZ @ 0x180237340 (-await_resume@apartment_awaiter@impl@winrt@@QEBAXXZ.c)
 *     ?FinishShow@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@AEAAXURect@Foundation@67@@Z @ 0x18026C20C (-FinishShow@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@AEAAXU.c)
 *     ?unconditional_release_ref@?$com_ptr@U?$map_impl@_KUhstring@winrt@@V?$map@_KUhstring@winrt@@U?$less@_K@std@@V?$allocator@U?$pair@$$CB_KUhstring@winrt@@@std@@@4@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@@winrt@@AEAAXXZ @ 0x1802879A8 (-unconditional_release_ref@-$com_ptr@U-$map_impl@_KUhstring@winrt@@V-$map@_KUhstring@winrt@@U-$l.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1?$cancellable_awaiter@U?$await_adapter@U?$IAsyncOperation@I@Foundation@Windows@winrt@@$00@impl@winrt@@@winrt@@QEAA@XZ @ 0x180328DF0 (--1-$cancellable_awaiter@U-$await_adapter@U-$IAsyncOperation@I@Foundation@Windows@winrt@@$00@imp.c)
 *     ?await_suspend@apartment_awaiter@impl@winrt@@QEAA_NU?$coroutine_handle@X@experimental@std@@@Z @ 0x180358FEC (-await_suspend@apartment_awaiter@impl@winrt@@QEAA_NU-$coroutine_handle@X@experimental@std@@@Z.c)
 *     ??$await_suspend@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAUSnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@2@@experimental@std@@@?$await_adapter@U?$IAsyncOperation@URect@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@$00@impl@winrt@@QEAA_NU?$coroutine_handle@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAUSnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@2@@experimental@std@@@experimental@std@@@Z @ 0x1805C07CC (--$await_suspend@Upromise_type@-$coroutine_traits@Ufire_and_forget@winrt@@PEAUSnapFlyoutInstance.c)
 *     ?CalculateFlyoutBoundsAsync@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@CA?AU?$IAsyncOperation@URect@Foundation@Windows@winrt@@@Foundation@67@PEAUHMONITOR__@@AEBUFrameworkElement@Xaml@UI@67@PEAUHWND__@@_NAEBURect@967@@Z @ 0x1805C17E4 (-CalculateFlyoutBoundsAsync@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windo.c)
 *     ?await_resume@?$await_adapter@U?$IAsyncOperation@URect@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@$00@impl@winrt@@QEBA@XZ @ 0x1805C291C (-await_resume@-$await_adapter@U-$IAsyncOperation@URect@Foundation@Windows@winrt@@@Foundation@Win.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance::ShowFlyoutAsync__ResumeCoro_1(
        __int64 a1)
{
  __int64 v1; // rsi
  char v2; // r15
  __int64 v3; // r12
  unsigned int InstanceAsync; // eax
  __int64 v5; // rax
  __int64 v6; // rcx

  try
  {
    switch ( *(_WORD *)(a1 + 8) )
    {
      case 0xFFFF:
      case 3:
        goto LABEL_22;
      case 2:
        winrt::impl::resume_apartment_context::resume_apartment_context((winrt::impl::resume_apartment_context *)(a1 + 32));
        v1 = *(_QWORD *)(a1 + 168);
        *(_QWORD *)(a1 + 48) = 0LL;
        if ( v1 )
        {
          *(_QWORD *)(a1 + 48) = v1;
          winrt::impl::root_implements<winrt::Windows::Internal::Shell::implementation::RemoteDesktopProviderInfo,winrt::Windows::Internal::Shell::RemoteDesktopProviderInfo>::AddRef(v1);
        }
        v2 = *(_BYTE *)(v1 + 336);
        v3 = *(_QWORD *)(v1 + 328);
        InstanceAsync = (unsigned int)winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStatics<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataSourceAdapterStatics>::CreateInstanceAsync(
                                        (__int64 **)(v1 + 288),
                                        (_QWORD *)(a1 + 56));
        v5 = winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance::CalculateFlyoutBoundsAsync(
               (int)a1 + 64,
               *(_QWORD *)(v1 + 360),
               InstanceAsync,
               v3,
               v2,
               v1 + 344);
        *(_QWORD *)(a1 + 72) = 0LL;
        *(_QWORD *)(a1 + 80) = v5;
        *(_QWORD *)(a1 + 88) = 0LL;
        *(_BYTE *)(a1 + 96) = 1;
        *(_WORD *)(a1 + 8) = 4;
        if ( (unsigned __int8)winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Rect>,1>::await_suspend<std::experimental::coroutine_traits<winrt::fire_and_forget,winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance *>::promise_type>(
                                a1 + 72,
                                a1) )
          return;
        goto LABEL_10;
      case 4:
LABEL_10:
        *(_OWORD *)(a1 + 16) = *(_OWORD *)winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Rect>,1>::await_resume(
                                            a1 + 72,
                                            a1 + 104);
        winrt::cancellable_awaiter<winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,1>>::~cancellable_awaiter<winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,1>>(a1 + 72);
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 64));
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 56));
        *(_QWORD *)(a1 + 120) = a1 + 32;
        *(_QWORD *)(a1 + 128) = 0LL;
        *(_WORD *)(a1 + 8) = 6;
        if ( (unsigned __int8)winrt::impl::apartment_awaiter::await_suspend(a1 + 120, a1) )
          return;
        goto LABEL_15;
      case 5:
        winrt::cancellable_awaiter<winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,1>>::~cancellable_awaiter<winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,1>>(a1 + 72);
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 64));
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 56));
        if ( *(_QWORD *)(a1 + 48) )
          winrt::com_ptr<winrt::impl::map_impl<unsigned __int64,winrt::hstring,std::map<unsigned __int64,winrt::hstring>,winrt::impl::single_threaded_collection_base>>::unconditional_release_ref(a1 + 48);
        goto LABEL_21;
      case 6:
LABEL_15:
        winrt::impl::apartment_awaiter::await_resume((winrt::impl::apartment_awaiter *)(a1 + 120));
        v6 = *(_QWORD *)(a1 + 168);
        if ( *(_BYTE *)(v6 + 340) )
        {
          if ( *(_QWORD *)(a1 + 48) )
            winrt::com_ptr<winrt::impl::map_impl<unsigned __int64,winrt::hstring,std::map<unsigned __int64,winrt::hstring>,winrt::impl::single_threaded_collection_base>>::unconditional_release_ref(a1 + 48);
        }
        else
        {
          *(_OWORD *)(a1 + 144) = *(_OWORD *)(a1 + 16);
          winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance::FinishShow(
            v6,
            (__int128 *)(a1 + 144));
          if ( *(_QWORD *)(a1 + 48) )
            winrt::com_ptr<winrt::impl::map_impl<unsigned __int64,winrt::hstring,std::map<unsigned __int64,winrt::hstring>,winrt::impl::single_threaded_collection_base>>::unconditional_release_ref(a1 + 48);
        }
        goto LABEL_21;
      case 7:
        if ( *(_QWORD *)(a1 + 48) )
          winrt::com_ptr<winrt::impl::map_impl<unsigned __int64,winrt::hstring,std::map<unsigned __int64,winrt::hstring>,winrt::impl::single_threaded_collection_base>>::unconditional_release_ref(a1 + 48);
LABEL_21:
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 32));
LABEL_22:
        if ( *(_WORD *)(a1 + 10) )
          operator delete((void *)a1, (const struct std::nothrow_t *)0xB0);
        break;
      default:
        __debugbreak();
        break;
    }
  }
  catch ( ... )
  {
    *(_WORD *)(a1 + 8) = -1;
    std::experimental::coroutine_traits<winrt::fire_and_forget,winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance *>::promise_type::unhandled_exception();
  }
}
