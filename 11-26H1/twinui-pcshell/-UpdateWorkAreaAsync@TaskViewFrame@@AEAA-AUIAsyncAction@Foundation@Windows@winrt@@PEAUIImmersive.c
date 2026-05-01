/*
 * XREFs of ?UpdateWorkAreaAsync@TaskViewFrame@@AEAA?AUIAsyncAction@Foundation@Windows@winrt@@PEAUIImmersiveMonitor@@@Z @ 0x18027D26C
 * Callers:
 *     ?RuntimeClassInitialize@TaskViewFrame@@QEAAJW4ALL_UP_VIEW_FLAGS@@PEAUIImmersiveMonitor@@1AEBUIDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@winrt@@AEBUSwitchItemDataView@6ComposableShell@89winrt@@AEBUIVirtualDesktopDataSource@6ComposableShell@89winrt@@AEBUIVirtualDesktopController@6ComposableShell@89winrt@@PE$AAUIXamlMultitaskingViewController@@PE$AAUIXamlSwitcherWindowInteractionEvents@@PEAUIApplicationViewCollection@@UTaskGroupDataSourceAdapter@TaskGroups@789winrt@@PEAUIRemoteSessionWindowManager@789ABI@@@Z @ 0x1806BE0A8 (-RuntimeClassInitialize@TaskViewFrame@@QEAAJW4ALL_UP_VIEW_FLAGS@@PEAUIImmersiveMonitor@@1AEBUIDe.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x1800276DC (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     TaskViewFrame::UpdateWorkAreaAsync$_ResumeCoro$1 @ 0x18027CF30 (TaskViewFrame--UpdateWorkAreaAsync$_ResumeCoro$1.c)
 *     ??2@YAPEAX_K@Z @ 0x1802C9924 (--2@YAPEAX_K@Z.c)
 *     memset_0 @ 0x1802C9ECC (memset_0.c)
 *     ??0?$promise_base@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAVTaskViewFrame@@PEAUIImmersiveMonitor@@@experimental@std@@UIAsyncAction@Foundation@Windows@winrt@@X@impl@winrt@@QEAA@XZ @ 0x1806BC2E4 (--0-$promise_base@Upromise_type@-$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAVT.c)
 */

// Hidden C++ exception states: #wind=3
__int64 *__fastcall TaskViewFrame::UpdateWorkAreaAsync(__int64 a1, __int64 *a2, __int64 a3)
{
  _QWORD *v6; // rax
  __int64 v7; // rdi
  _QWORD *v8; // rbx
  __int64 v10; // [rsp+70h] [rbp+18h] BYREF

  v6 = operator new(0x190uLL);
  v7 = (__int64)(v6 + 14);
  v6[47] = a1;
  v6[48] = a3;
  v6[14] = TaskViewFrame::UpdateWorkAreaAsync__ResumeCoro_1;
  *((_DWORD *)v6 + 30) = 65538;
  v8 = v6;
  memset_0(v6, 0, 0x68uLL);
  winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,TaskViewFrame *,IImmersiveMonitor *>::promise_type,winrt::Windows::Foundation::IAsyncAction,void>::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,TaskViewFrame *,IImmersiveMonitor *>::promise_type,winrt::Windows::Foundation::IAsyncAction,void>(v7 - 112);
  *v8 = &std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,TaskViewFrame *,IImmersiveMonitor *>::promise_type::`vftable';
  *a2 = (__int64)(v8 + 2);
  Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef(a2);
  v10 = 0LL;
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v10);
  *(_BYTE *)(v7 + 256) = 0;
  TaskViewFrame::UpdateWorkAreaAsync__ResumeCoro_1(v7);
  return a2;
}
