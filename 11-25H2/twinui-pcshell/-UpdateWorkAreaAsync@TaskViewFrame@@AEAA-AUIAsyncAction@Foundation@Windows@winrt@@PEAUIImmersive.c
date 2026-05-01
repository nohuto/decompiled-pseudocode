/*
 * XREFs of ?UpdateWorkAreaAsync@TaskViewFrame@@AEAA?AUIAsyncAction@Foundation@Windows@winrt@@PEAUIImmersiveMonitor@@@Z @ 0x180238904
 * Callers:
 *     ?RuntimeClassInitialize@TaskViewFrame@@QEAAJW4ALL_UP_VIEW_FLAGS@@PEAUIImmersiveMonitor@@1AEBUIDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@winrt@@AEBUSwitchItemDataView@6ComposableShell@89winrt@@AEBUIVirtualDesktopDataSource@6ComposableShell@89winrt@@AEBUIVirtualDesktopController@6ComposableShell@89winrt@@PE$AAUIXamlMultitaskingViewController@@PE$AAUIXamlSwitcherWindowInteractionEvents@@PEAUIApplicationViewCollection@@UTaskGroupDataSourceAdapter@TaskGroups@789winrt@@PEAUIRemoteSessionWindowManager@789ABI@@@Z @ 0x180696978 (-RuntimeClassInitialize@TaskViewFrame@@QEAAJW4ALL_UP_VIEW_FLAGS@@PEAUIImmersiveMonitor@@1AEBUIDe.c)
 * Callees:
 *     TaskViewFrame::UpdateWorkAreaAsync$_InitCoro$2 @ 0x180285A28 (TaskViewFrame--UpdateWorkAreaAsync$_InitCoro$2.c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2B34 (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall TaskViewFrame::UpdateWorkAreaAsync(__int64 a1, __int64 a2, int a3)
{
  unsigned int v6; // eax
  int v8; // [rsp+1D8h] [rbp+10h] BYREF

  v6 = (unsigned int)operator new(0x190uLL);
  v8 = 0;
  TaskViewFrame::UpdateWorkAreaAsync__InitCoro_2((unsigned int)&v8, v6 + 112, a2, a3, a1);
  return a2;
}
