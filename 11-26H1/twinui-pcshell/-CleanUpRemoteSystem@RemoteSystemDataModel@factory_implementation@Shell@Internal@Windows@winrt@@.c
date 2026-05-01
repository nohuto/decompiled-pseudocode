/*
 * XREFs of ?CleanUpRemoteSystem@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUhstring@6@@Z @ 0x18064A98C
 * Callers:
 *     _lambda_3e3d6084102ea12775201c324e2ccf34_::operator() @ 0x180659308 (_lambda_3e3d6084102ea12775201c324e2ccf34_--operator().c)
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x18001C3D4 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?GetNetworkConnectivityLevel@?$consume_Windows_Networking_Connectivity_IConnectionProfile@UIConnectionProfile@Connectivity@Networking@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18002A684 (-GetNetworkConnectivityLevel@-$consume_Windows_Networking_Connectivity_IConnectionProfile@UIConn.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x1800584D8 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ?GetForCurrentProcess@?$consume_Windows_UI_Internal_Input_IInputSiteStatics@UIInputSiteStatics@Input@Internal@UI@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1800B7298 (-GetForCurrentProcess@-$consume_Windows_UI_Internal_Input_IInputSiteStatics@UIInputSiteStatics@I.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802D92D0 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     ?OnFileOpenPickerActivated@?$consume_Windows_UI_Xaml_IApplicationOverrides@UIApplicationOverrides@Xaml@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBUFileOpenPickerActivatedEventArgs@Activation@ApplicationModel@Windows@3@@Z @ 0x18044BAD8 (-OnFileOpenPickerActivated@-$consume_Windows_UI_Xaml_IApplicationOverrides@UIApplicationOverride.c)
 *     ?GetAt@?$consume_Windows_Foundation_Collections_IVectorView@U?$IVectorView@UWindowId@UI@Windows@winrt@@@Collections@Foundation@Windows@winrt@@UWindowId@UI@45@@impl@winrt@@QEBA@I@Z @ 0x18064C024 (-GetAt@-$consume_Windows_Foundation_Collections_IVectorView@U-$IVectorView@UWindowId@UI@Windows@.c)
 *     ?TryLookup@?$consume_Windows_Foundation_Collections_IMap@U?$IMap@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@Collections@Foundation@Windows@winrt@@Uhstring@5@URemoteSystem@Shell@Internal@45@@impl@winrt@@QEBA@AEBUhstring@param@3@@Z @ 0x180651698 (-TryLookup@-$consume_Windows_Foundation_Collections_IMap@U-$IMap@Uhstring@winrt@@URemoteSystem@S.c)
 *     ?DeleteWindow@RemoteSessionPersistenceHelper@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUWindowId@UI@56@AEBUhstring@6@@Z @ 0x180663184 (-DeleteWindow@RemoteSessionPersistenceHelper@implementation@Shell@Internal@Windows@winrt@@QEAAXA.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel::CleanUpRemoteSystem(
        winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel *this,
        const struct winrt::hstring *a2)
{
  unsigned int v4; // ebx
  int NetworkConnectivityLevel; // r14d
  __int64 v6; // rcx
  int v7; // eax
  __int64 v8; // [rsp+20h] [rbp-28h] BYREF
  __int128 v9; // [rsp+28h] [rbp-20h]
  __int64 v10; // [rsp+80h] [rbp+38h] BYREF
  __int64 v11; // [rsp+88h] [rbp+40h] BYREF
  __int64 *v12; // [rsp+90h] [rbp+48h] BYREF
  RTL_SRWLOCK *v13; // [rsp+98h] [rbp+50h] BYREF

  wil::AcquireSRWLockExclusive(&v13, (RTL_SRWLOCK *)this + 16);
  v8 = *(_QWORD *)a2;
  winrt::impl::consume_Windows_Foundation_Collections_IMap<winrt::Windows::Foundation::Collections::IMap<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem>,winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem>::TryLookup(
    (char *)this + 144,
    &v12,
    &v8);
  if ( v12 )
  {
    winrt::impl::consume_Windows_UI_Internal_Input_IInputSiteStatics<winrt::Windows::UI::Internal::Input::IInputSiteStatics>::GetForCurrentProcess(
      &v12,
      &v11);
    v4 = 0;
    NetworkConnectivityLevel = winrt::impl::consume_Windows_Networking_Connectivity_IConnectionProfile<winrt::Windows::Networking::Connectivity::IConnectionProfile>::GetNetworkConnectivityLevel(&v11);
    while ( v4 != NetworkConnectivityLevel )
    {
      winrt::impl::consume_Windows_Foundation_Collections_IVectorView<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::UI::WindowId>,winrt::Windows::UI::WindowId>::GetAt(
        &v11,
        &v10,
        v4);
      winrt::impl::consume_Windows_UI_Xaml_IApplicationOverrides<winrt::Windows::UI::Xaml::IApplicationOverrides>::OnFileOpenPickerActivated(
        (__int64 *)this + 19,
        &v10);
      winrt::Windows::Internal::Shell::implementation::RemoteSessionPersistenceHelper::DeleteWindow(
        *((winrt::Windows::Internal::Shell::implementation::RemoteSessionPersistenceHelper **)this + 4),
        (const struct winrt::Windows::UI::WindowId *)&v10,
        a2);
      ++v4;
    }
    v6 = *((_QWORD *)this + 18);
    LODWORD(v8) = 0;
    v9 = 0LL;
    v7 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v6 + 88LL))(v6, *(_QWORD *)a2);
    winrt::check_hresult((int *)&v10, v7, (__int64)&v8);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v11);
  }
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v12);
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v13);
}
