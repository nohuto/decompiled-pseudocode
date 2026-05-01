/*
 * XREFs of ?XamlHostThreadProc@TouchEdgeGripperHost@@AEAAKXZ @ 0x180596CF0
 * Callers:
 *     _lambda_7c27b082a2d594abdbf5dd9e5359180a_::_lambda_invoker_cdecl_ @ 0x180595390 (_lambda_7c27b082a2d594abdbf5dd9e5359180a_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x18001C3D4 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z @ 0x180054B64 (--4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x1800584D8 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x1800CA6B4 (-SetEvent@details@wil@@YAXPEAX@Z.c)
 *     ?Current@XamlApplication@XamlExplorerHost@Shell@Internal@Windows@winrt@@SA?AU123456@XZ @ 0x1801B4D44 (-Current@XamlApplication@XamlExplorerHost@Shell@Internal@Windows@winrt@@SA-AU123456@XZ.c)
 *     ?InitializeForCurrentThread@WindowsXamlManager@Hosting@Xaml@UI@Windows@winrt@@SA@XZ @ 0x1801F698C (-InitializeForCurrentThread@WindowsXamlManager@Hosting@Xaml@UI@Windows@winrt@@SA@XZ.c)
 *     ?GetForCurrentThread@DispatcherQueue@System@Windows@winrt@@SA@XZ @ 0x18059624C (-GetForCurrentThread@DispatcherQueue@System@Windows@winrt@@SA@XZ.c)
 *     ?XamlHostThreadEnded@TouchEdgeGestureTelemetry@@SAXXZ @ 0x180596CC4 (-XamlHostThreadEnded@TouchEdgeGestureTelemetry@@SAXXZ.c)
 *     ?XamlHostThreadStarted@TouchEdgeGestureTelemetry@@SAXXZ @ 0x180596E74 (-XamlHostThreadStarted@TouchEdgeGestureTelemetry@@SAXXZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall TouchEdgeGripperHost::XamlHostThreadProc(TouchEdgeGripperHost *this)
{
  HANDLE CurrentThread; // rax
  HRESULT v3; // eax
  __int64 *v4; // rax
  __int64 *v5; // rax
  __int64 *v6; // rax
  void *v7; // rdx
  const char *v8; // r9
  DWORD v9; // ebx
  void *v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // [rsp+30h] [rbp-28h] BYREF
  RTL_SRWLOCK *v16; // [rsp+38h] [rbp-20h] BYREF
  HANDLE pHandles[3]; // [rsp+40h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  DWORD dwindex; // [rsp+68h] [rbp+10h] BYREF
  __int64 v21; // [rsp+70h] [rbp+18h] BYREF
  __int64 v22; // [rsp+78h] [rbp+20h] BYREF

  TouchEdgeGestureTelemetry::XamlHostThreadStarted();
  CurrentThread = GetCurrentThread();
  v3 = SetThreadDescription(CurrentThread, L"TouchEdgeGripperHost Thread");
  if ( v3 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xA8,
      (int)"pcshell\\twinui\\touchgestures\\lib\\touchedgegripperhost.cpp",
      (const char *)(unsigned int)v3);
  dwindex = 0;
  v15 = 0LL;
  v22 = 0LL;
  v21 = 0LL;
  try
  {
    v4 = winrt::Windows::Internal::Shell::XamlExplorerHost::XamlApplication::Current(&v16);
    winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=(&v15, v4);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v16);
    v5 = winrt::Windows::UI::Xaml::Hosting::WindowsXamlManager::InitializeForCurrentThread(&v16);
    winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=(&v22, v5);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v16);
    v6 = winrt::Windows::System::DispatcherQueue::GetForCurrentThread(&v16);
    winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=(&v21, v6);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v16);
    wil::AcquireSRWLockExclusive(&v16, (RTL_SRWLOCK *)this + 29);
    winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=((__int64 *)this + 10, &v22);
    winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=((__int64 *)this + 9, &v21);
    pHandles[0] = *((HANDLE *)this + 5);
    wil::details::SetEvent(*((wil::details **)this + 4), v7);
    CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v16);
    CoWaitForMultipleHandles(0x18u, 0xFFFFFFFF, 1u, pHandles, &dwindex);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0xC7,
      (int)"pcshell\\twinui\\touchgestures\\lib\\touchedgegripperhost.cpp",
      v8);
    *((_BYTE *)this + 24) = 0;
    wil::AcquireSRWLockExclusive((RTL_SRWLOCK **)pHandles, (RTL_SRWLOCK *)this + 29);
    wil::details::SetEvent(*((wil::details **)this + 4), v11);
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
      (void **)this + 5,
      0LL);
    CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock((RTL_SRWLOCK **)pHandles);
    MicrosoftTelemetryAssertTriggeredNoArgs(v13, v12);
  }
  TouchEdgeGestureTelemetry::XamlHostThreadEnded(v14);
  v9 = dwindex;
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v21);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v22);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v15);
  return v9;
}
