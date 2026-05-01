/*
 * XREFs of ?XamlExplorerHostThreadProc@SnapFlyoutHost@@AEAAKXZ @ 0x1805913F4
 * Callers:
 *     _lambda_bfb9c683e4ebe68c910af62690c76974_::_lambda_invoker_cdecl_ @ 0x18058D540 (_lambda_bfb9c683e4ebe68c910af62690c76974_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x180048190 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUHWND__@@P6AHPEAU1@@Z$1?DestroyWindow@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUHWND__@@@Z @ 0x180066798 (-reset@-$unique_storage@U-$resource_policy@PEAUHWND__@@P6AHPEAU1@@Z$1-DestroyWindow@@YAH0@ZU-$in.c)
 *     ?ResetEvent@details@wil@@YAXPEAX@Z @ 0x180099708 (-ResetEvent@details@wil@@YAXPEAX@Z.c)
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x1800A4EAC (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x1800A589C (-SetEvent@details@wil@@YAXPEAX@Z.c)
 *     ??4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z @ 0x1800AA2B4 (--4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z.c)
 *     ?Current@XamlApplication@XamlExplorerHost@Shell@Internal@Windows@winrt@@SA?AU123456@XZ @ 0x1800AF008 (-Current@XamlApplication@XamlExplorerHost@Shell@Internal@Windows@winrt@@SA-AU123456@XZ.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1800D2B94 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x180142B80 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ?InitializeForCurrentThread@WindowsXamlManager@Hosting@Xaml@UI@Windows@winrt@@SA@XZ @ 0x1801FF680 (-InitializeForCurrentThread@WindowsXamlManager@Hosting@Xaml@UI@Windows@winrt@@SA@XZ.c)
 *     ?HasThreadAccess@?$consume_Windows_System_IDispatcherQueue2@UDispatcherQueue@System@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1802719B4 (-HasThreadAccess@-$consume_Windows_System_IDispatcherQueue2@UDispatcherQueue@System@Windows@winr.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18029752C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?GetForCurrentThread@DispatcherQueue@System@Windows@winrt@@SA@XZ @ 0x180572A74 (-GetForCurrentThread@DispatcherQueue@System@Windows@winrt@@SA@XZ.c)
 *     ?SnapFlyout_ThreadFailed@SnapFlyoutTelemetry@@SAXXZ @ 0x180590F4C (-SnapFlyout_ThreadFailed@SnapFlyoutTelemetry@@SAXXZ.c)
 *     ?SnapFlyout_ThreadReady@SnapFlyoutTelemetry@@SAXXZ @ 0x180590F78 (-SnapFlyout_ThreadReady@SnapFlyoutTelemetry@@SAXXZ.c)
 *     ?SnapFlyout_ThreadShutdown@SnapFlyoutTelemetry@@SAXXZ @ 0x180590FA4 (-SnapFlyout_ThreadShutdown@SnapFlyoutTelemetry@@SAXXZ.c)
 *     ?CreateMessageWindow@WindowDragInputProvider@@QEAAXUDispatcherQueue@System@Windows@winrt@@@Z @ 0x18059B6F0 (-CreateMessageWindow@WindowDragInputProvider@@QEAAXUDispatcherQueue@System@Windows@winrt@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall SnapFlyoutHost::XamlExplorerHostThreadProc(RTL_SRWLOCK *this)
{
  RTL_SRWLOCK *v1; // rsi
  RTL_SRWLOCK *v2; // r14
  HANDLE CurrentThread; // rax
  HRESULT v4; // eax
  __int64 *v5; // rax
  __int64 *v6; // rax
  const char *v7; // r9
  __int64 *v8; // rax
  const char *v9; // r9
  RTL_SRWLOCK *v10; // r15
  PVOID Ptr; // rbx
  void *v12; // rdx
  RTL_SRWLOCK *v13; // rbx
  void *v14; // rdx
  void *v15; // rdx
  HWND *v16; // rbx
  __int64 (__fastcall ****v17)(_QWORD, void *, __int64 *); // rcx
  const char *v18; // r9
  __int64 v20; // [rsp+30h] [rbp-48h] BYREF
  HANDLE pHandles; // [rsp+38h] [rbp-40h] BYREF
  RTL_SRWLOCK *v22[7]; // [rsp+40h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  DWORD dwindex; // [rsp+88h] [rbp+10h] BYREF
  __int64 v27; // [rsp+90h] [rbp+18h] BYREF
  RTL_SRWLOCK *v28; // [rsp+98h] [rbp+20h] BYREF

  v1 = this;
  v2 = this;
  v22[0] = this;
  CurrentThread = GetCurrentThread();
  v4 = SetThreadDescription(CurrentThread, L"SnapFlyoutHost Thread");
  if ( v4 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x266,
      (int)"pcshell\\twinui\\snapcomponent\\lib\\snapflyouthost.cpp",
      (const char *)(unsigned int)v4);
  v20 = 0LL;
  v27 = 0LL;
  try
  {
    v5 = winrt::Windows::Internal::Shell::XamlExplorerHost::XamlApplication::Current(&v28);
    winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=(&v20, v5);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v28);
    v6 = winrt::Windows::UI::Xaml::Hosting::WindowsXamlManager::InitializeForCurrentThread(&v28);
    winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=(&v27, v6);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v28);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x273,
      (int)"pcshell\\twinui\\snapcomponent\\lib\\snapflyouthost.cpp",
      v7);
    v1 = this;
    v2 = v22[0];
  }
  if ( v20 && v27 )
  {
    wil::AcquireSRWLockExclusive(v22, v1 + 22);
    winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=((__int64 *)&v1[13], &v27);
    v8 = winrt::Windows::System::DispatcherQueue::GetForCurrentThread(&v28);
    winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=((__int64 *)&v1[12], v8);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v28);
    if ( !v1[12].Ptr )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x27D,
        (int)"pcshell\\twinui\\snapcomponent\\lib\\snapflyouthost.cpp",
        v9);
    v10 = v1 + 14;
    Ptr = v1[14].Ptr;
    v28 = (RTL_SRWLOCK *)v1[12].Ptr;
    Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef((__int64 *)&v28);
    WindowDragInputProvider::CreateMessageWindow(Ptr, &v28);
    pHandles = v1[10].Ptr;
    SnapFlyoutTelemetry::SnapFlyout_ThreadReady();
    wil::details::SetEvent((wil::details *)v1[9].Ptr, v12);
    CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(v22);
    v13 = v2 + 21;
  }
  else
  {
    SnapFlyoutTelemetry::SnapFlyout_ThreadFailed();
    wil::AcquireSRWLockExclusive(&v28, v1 + 22);
    pHandles = v1[10].Ptr;
    v13 = v1 + 21;
    LODWORD(v1[21].Ptr) = 0;
    wil::details::SetEvent((wil::details *)v1[9].Ptr, v14);
    CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v28);
    v10 = v2 + 14;
  }
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v27);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v20);
  dwindex = 0;
  CoWaitForMultipleHandles(0x18u, 0xFFFFFFFF, 1u, &pHandles, &dwindex);
  LODWORD(v13->Ptr) = 0;
  wil::details::ResetEvent((wil::details *)v1[10].Ptr, v15);
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
    &v1[11].Ptr,
    0LL);
  v16 = (HWND *)v10->Ptr;
  v17 = (__int64 (__fastcall ****)(_QWORD, void *, __int64 *))((char *)v10->Ptr + 48);
  if ( *v17
    && !winrt::impl::consume_Windows_System_IDispatcherQueue2<winrt::Windows::System::DispatcherQueue>::HasThreadAccess(v17) )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x4D,
      (int)"pcshell\\twinui\\snapcomponent\\lib\\windowdraginputprovider.cpp",
      v18);
  }
  wil::details::unique_storage<wil::details::resource_policy<HWND__ *,int (*)(HWND__ *),&int DestroyWindow(HWND__ *),wistd::integral_constant<unsigned __int64,0>,HWND__ *,HWND__ *,0,std::nullptr_t>>::reset(
    v16 + 3,
    0LL);
  SnapFlyoutTelemetry::SnapFlyout_ThreadShutdown();
  return dwindex;
}
