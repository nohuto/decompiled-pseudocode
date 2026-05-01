/*
 * XREFs of _lambda_21d9478fa7481aa5ac8b815bdb34bba5_::__lambda_21d9478fa7481aa5ac8b815bdb34bba5_ @ 0x1806007EC
 * Callers:
 *     ?_ExecuteCommand@CLauncherTipContextMenu@@AEAAXV?$ComPtr@V?$CRefCountedObject@ULauncherTipMenuCommand@CLauncherTipContextMenu@@@@@WRL@Microsoft@@@Z @ 0x1801E54C8 (-_ExecuteCommand@CLauncherTipContextMenu@@AEAAXV-$ComPtr@V-$CRefCountedObject@ULauncherTipMenuCo.c)
 *     shell::TaskScheduler::CSimpleRunnableTaskParam__lambda_21d9478fa7481aa5ac8b815bdb34bba5__CRefCountedObject_CLauncherTipContextMenu::LauncherTipMenuCommand____::_CSimpleRunnableTaskParam__lambda_21d9478fa7481aa5ac8b815bdb34bba5__CRefCountedObject_CLauncherTipContextMenu::LauncherTipMenuCommand____ @ 0x18060083C (shell--TaskScheduler--CSimpleRunnableTaskParam__lambda_21d9478fa7481aa5ac8b815bdb34_ea_18060083C.c)
 *     _CLauncherTipContextMenu::_ExecuteCommand_::_1_::dtor$9 @ 0x1806DAC61 (_CLauncherTipContextMenu--_ExecuteCommand_--_1_--dtor$9.c)
 * Callees:
 *     ??1LauncherTipContextMenuExecuteCommand@LauncherTipContextMenuTelemetry@@QEAA@XZ @ 0x1802A23F8 (--1LauncherTipContextMenuExecuteCommand@LauncherTipContextMenuTelemetry@@QEAA@XZ.c)
 */

__int64 __fastcall lambda_21d9478fa7481aa5ac8b815bdb34bba5_::__lambda_21d9478fa7481aa5ac8b815bdb34bba5_(__int64 a1)
{
  LauncherTipContextMenuTelemetry::LauncherTipContextMenuExecuteCommand::~LauncherTipContextMenuExecuteCommand((volatile signed __int32 **)(a1 + 8));
  return Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)a1);
}
