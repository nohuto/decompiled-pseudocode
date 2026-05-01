/*
 * XREFs of ??1TaskScheduler@shell@@QEAA@XZ @ 0x1806009D0
 * Callers:
 *     ?_ExecuteCommand@CLauncherTipContextMenu@@AEAAXV?$ComPtr@V?$CRefCountedObject@ULauncherTipMenuCommand@CLauncherTipContextMenu@@@@@WRL@Microsoft@@@Z @ 0x1801E54C8 (-_ExecuteCommand@CLauncherTipContextMenu@@AEAAXV-$ComPtr@V-$CRefCountedObject@ULauncherTipMenuCo.c)
 *     ?_EnsureMenu@CLauncherTipContextMenu@@AEAAJPEAUtagPOINT@@@Z @ 0x180603BC8 (-_EnsureMenu@CLauncherTipContextMenu@@AEAAJPEAUtagPOINT@@@Z.c)
 *     _CLauncherTipContextMenu::_ExecuteCommand_::_1_::dtor$8 @ 0x1806DAC4F (_CLauncherTipContextMenu--_ExecuteCommand_--_1_--dtor$8.c)
 *     _CLauncherTipContextMenu::_EnsureMenu_::_1_::dtor$0 @ 0x1807009F8 (_CLauncherTipContextMenu--_EnsureMenu_--_1_--dtor$0.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall shell::TaskScheduler::~TaskScheduler(shell::TaskScheduler *this)
{
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 16LL))(*((_QWORD *)this + 2));
}
