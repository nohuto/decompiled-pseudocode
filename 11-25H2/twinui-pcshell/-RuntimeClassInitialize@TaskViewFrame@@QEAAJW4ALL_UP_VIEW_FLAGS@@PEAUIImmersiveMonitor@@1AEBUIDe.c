/*
 * XREFs of ?RuntimeClassInitialize@TaskViewFrame@@QEAAJW4ALL_UP_VIEW_FLAGS@@PEAUIImmersiveMonitor@@1AEBUIDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@winrt@@AEBUSwitchItemDataView@6ComposableShell@89winrt@@AEBUIVirtualDesktopDataSource@6ComposableShell@89winrt@@AEBUIVirtualDesktopController@6ComposableShell@89winrt@@PE$AAUIXamlMultitaskingViewController@@PE$AAUIXamlSwitcherWindowInteractionEvents@@PEAUIApplicationViewCollection@@UTaskGroupDataSourceAdapter@TaskGroups@789winrt@@PEAUIRemoteSessionWindowManager@789ABI@@@Z @ 0x180696978
 * Callers:
 *     ??$MakeAndInitialize@VTaskViewFrame@@V1@AEAW4ALL_UP_VIEW_FLAGS@@AEAPEAUIImmersiveMonitor@@AEAPEAU3@AEBUIDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@winrt@@AEBUSwitchItemDataView@6ComposableShell@89winrt@@AEBUIVirtualDesktopDataSource@6ComposableShell@89winrt@@AEBUIVirtualDesktopController@6ComposableShell@89winrt@@AEAPE$AAUIXamlMultitaskingViewController@@AEAPE$AAUIXamlSwitcherWindowInteractionEvents@@AEAPEAUIApplicationViewCollection@@AEBUTaskGroupDataSourceAdapter@TaskGroups@789winrt@@AEAPEAUIRemoteSessionWindowManager@789ABI@@@Details@WRL@Microsoft@@YAJPEAPEAVTaskViewFrame@@AEAW4ALL_UP_VIEW_FLAGS@@AEAPEAUIImmersiveMonitor@@2AEBUIDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@winrt@@AEBUSwitchItemDataView@8ComposableShell@Internal@Windows@winrt@@AEBUIVirtualDesktopDataSource@8ComposableShell@Internal@Windows@winrt@@AEBUIVirtualDesktopController@8ComposableShell@Internal@Windows@winrt@@AEAPE$AAUIXamlMultitaskingViewController@@AEAPE$AAUIXamlSwitcherWindowInteractionEvents@@AEAPEAUIApplicationViewCollection@@AEBUTaskGroupDataSourceAdapter@TaskGroups@9Internal@Windows@winrt@@AEAPEAUIRemoteSessionWindowManager@9Internal@Windows@ABI@@@Z @ 0x18029FADC (--$MakeAndInitialize@VTaskViewFrame@@V1@AEAW4ALL_UP_VIEW_FLAGS@@AEAPEAUIImmersiveMonitor@@AEAPEA.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??4?$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180074CD0 (--4-$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QE.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@AEBU0123@@Z @ 0x1800A852C (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@AEBU0123@@Z.c)
 *     ??4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z @ 0x1800AA2B4 (--4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z.c)
 *     ?RegisterForEvents@TaskViewFrame@@AEAAXXZ @ 0x180101CE8 (-RegisterForEvents@TaskViewFrame@@AEAAXXZ.c)
 *     ?__abi_winrt_ptr_assign@@YAPEAXPEAPEAXPE$ADVObject@Platform@@@Z @ 0x180102A0C (-__abi_winrt_ptr_assign@@YAPEAXPEAPEAXPE$ADVObject@Platform@@@Z.c)
 *     ?UpdateWorkAreaAsync@TaskViewFrame@@AEAA?AUIAsyncAction@Foundation@Windows@winrt@@PEAUIImmersiveMonitor@@@Z @ 0x180238904 (-UpdateWorkAreaAsync@TaskViewFrame@@AEAA-AUIAsyncAction@Foundation@Windows@winrt@@PEAUIImmersive.c)
 *     ?GetWorkArea@@YA?AVRect@Foundation@Windows@@PEAUIImmersiveMonitor@@@Z @ 0x1802AA2B8 (-GetWorkArea@@YA-AVRect@Foundation@Windows@@PEAUIImmersiveMonitor@@@Z.c)
 *     ??0XamlExplorerHostWindow@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAA@IAEBURect@Foundation@45@@Z @ 0x1802C66D4 (--0XamlExplorerHostWindow@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAA@IAEBURect@Foundati.c)
 *     ??$WaitForCompletion@PEAUIAsyncAction@Foundation@Windows@ABI@@@details@wil@@YAJPEAUIAsyncAction@Foundation@Windows@ABI@@W4tagCOWAIT_FLAGS@@KPEA_N@Z @ 0x180694748 (--$WaitForCompletion@PEAUIAsyncAction@Foundation@Windows@ABI@@@details@wil@@YAJPEAUIAsyncAction@.c)
 *     ?CreateFilteredItemCollection@TaskViewFrame@@AEAAXAEBUSwitchItemDataView@Multitasking@ComposableShell@Internal@Windows@winrt@@@Z @ 0x1806954B4 (-CreateFilteredItemCollection@TaskViewFrame@@AEAAXAEBUSwitchItemDataView@Multitasking@Composable.c)
 *     ?CreateTaskViewTimelineControl@TaskViewFrame@@AEAAXXZ @ 0x18069558C (-CreateTaskViewTimelineControl@TaskViewFrame@@AEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall TaskViewFrame::RuntimeClassInitialize(
        TaskViewFrame *this,
        int a2,
        __int64 *a3,
        __int64 a4,
        __int64 *a5,
        struct winrt::Windows::Internal::ComposableShell::Multitasking::SwitchItemDataView *a6,
        __int64 *a7,
        __int64 *a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *a12,
        __int64 a13)
{
  __int64 (__fastcall ****updated)(_QWORD, GUID *, __int64 *); // rax
  DWORD v17; // edx
  int v18; // r8d
  __int64 *v19; // rax
  __int64 v20; // rbx
  __int64 v21; // rcx
  float v23[6]; // [rsp+20h] [rbp-18h] BYREF
  char v24; // [rsp+40h] [rbp+8h] BYREF

  *((_DWORD *)this + 16) = a2;
  winrt::Windows::Foundation::IUnknown::operator=((__int64 *)this + 10, a5);
  wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_exception_policy>::operator=(
    (__int64 *)this + 2,
    (__int64)a3);
  wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_exception_policy>::operator=(
    (__int64 *)this + 3,
    a4);
  *((_OWORD *)this + 3) = *(_OWORD *)GetWorkArea(v23, a3);
  updated = (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))TaskViewFrame::UpdateWorkAreaAsync(
                                                                    (__int64)this,
                                                                    (__int64)&v24,
                                                                    (int)a3);
  wil::details::WaitForCompletion<ABI::Windows::Foundation::IAsyncAction *>(*updated, v17, v18);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v24);
  winrt::Windows::Foundation::IUnknown::operator=((__int64 *)this + 12, a7);
  winrt::Windows::Foundation::IUnknown::operator=((__int64 *)this + 13, a8);
  __abi_winrt_ptr_assign((_QWORD *)this + 17, a9);
  __abi_winrt_ptr_assign((_QWORD *)this + 16, a10);
  wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_exception_policy>::operator=(
    (__int64 *)this + 4,
    a11);
  winrt::Windows::Foundation::IUnknown::operator=((__int64 *)this + 21, (__int64 *)a12);
  v19 = (__int64 *)winrt::Windows::Internal::Shell::XamlExplorerHost::XamlExplorerHostWindow::XamlExplorerHostWindow(
                     (winrt::Windows::Internal::Shell::XamlExplorerHost::XamlExplorerHostWindow *)&v24,
                     5,
                     (TaskViewFrame *)((char *)this + 48));
  winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=((__int64 *)this + 9, v19);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v24);
  v20 = *((_QWORD *)this + 5);
  v21 = a13;
  *((_QWORD *)this + 5) = a13;
  if ( v21 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 8LL))(v21);
  if ( v20 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  TaskViewFrame::CreateFilteredItemCollection(this, a6);
  TaskViewFrame::CreateTaskViewTimelineControl((__int64 **)this);
  TaskViewFrame::RegisterForEvents(this);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension(a12);
  return 0LL;
}
