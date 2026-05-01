/*
 * XREFs of _lambda_95528747bebe02d956eab525d53e8eb3_::operator() @ 0x180685614
 * Callers:
 *     winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::UI::Xaml::Controls::ListViewBase_winrt::Windows::UI::Xaml::Controls::DragItemsCompletedEventArgs___lambda_95528747bebe02d956eab525d53e8eb3___::Invoke @ 0x1806871A0 (winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--Windows--UI--Xaml--Co.c)
 * Callees:
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x180022890 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180028330 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?GetNetworkConnectivityLevel@?$consume_Windows_Networking_Connectivity_IConnectionProfile@UIConnectionProfile@Connectivity@Networking@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180062884 (-GetNetworkConnectivityLevel@-$consume_Windows_Networking_Connectivity_IConnectionProfile@UIConn.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180066570 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??4?$com_ptr@UIWeakReference@impl@winrt@@@winrt@@QEAAAEAU01@$$QEAU01@@Z @ 0x1800A7EDC (--4-$com_ptr@UIWeakReference@impl@winrt@@@winrt@@QEAAAEAU01@$$QEAU01@@Z.c)
 *     ??1CThreadUseDetector@@QEAA@XZ @ 0x180136308 (--1CThreadUseDetector@@QEAA@XZ.c)
 *     ??$try_query@UIVirtualDesktopSwitcherHost@@@?$com_ptr_t@UIWeakReference@@Uerr_failfast_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIVirtualDesktopSwitcherHost@@Uerr_failfast_policy@wil@@@1@XZ @ 0x180684054 (--$try_query@UIVirtualDesktopSwitcherHost@@@-$com_ptr_t@UIWeakReference@@Uerr_failfast_policy@wi.c)
 *     ?StartPointerExitedTimer@VirtualDesktopSwitcherHost@@AEAAXXZ @ 0x180688358 (-StartPointerExitedTimer@VirtualDesktopSwitcherHost@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall lambda_95528747bebe02d956eab525d53e8eb3_::operator()(
        struct IWeakReference **a1,
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *a2,
        __int64 *a3)
{
  __int64 v5; // rdi
  __int64 v6; // [rsp+20h] [rbp-18h] BYREF
  int v7; // [rsp+28h] [rbp-10h]
  __int64 v8; // [rsp+60h] [rbp+28h] BYREF
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *v9; // [rsp+68h] [rbp+30h]
  __int64 *v10; // [rsp+70h] [rbp+38h]
  __int64 v11; // [rsp+78h] [rbp+40h] BYREF

  v10 = a3;
  v9 = a2;
  wil::com_ptr_t<IWeakReference,wil::err_failfast_policy>::try_query<IVirtualDesktopSwitcherHost>(a1, (void **)&v11);
  if ( v11 )
  {
    v5 = (v11 - 8) & -(__int64)(v11 != 0);
    v6 = (v5 + 32) & -(__int64)(v5 != 0);
    v7 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread(v6, 1);
    *(_BYTE *)(v5 + 456) = 0;
    *(_BYTE *)(v5 + 458) = 0;
    v8 = 0LL;
    winrt::com_ptr<winrt::impl::IWeakReference>::operator=((__int64 *)(v5 + 296), &v8);
    if ( v8 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v8);
    if ( !(unsigned int)winrt::impl::consume_Windows_Networking_Connectivity_IConnectionProfile<winrt::Windows::Networking::Connectivity::IConnectionProfile>::GetNetworkConnectivityLevel(a3) )
      VirtualDesktopSwitcherHost::StartPointerExitedTimer((VirtualDesktopSwitcherHost *)v5);
    CThreadUseDetector::~CThreadUseDetector((LPCRITICAL_SECTION *)&v6);
  }
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v11);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension(a2);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)a3);
}
