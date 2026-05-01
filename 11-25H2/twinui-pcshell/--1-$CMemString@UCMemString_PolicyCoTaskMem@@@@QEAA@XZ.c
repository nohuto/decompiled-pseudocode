/*
 * XREFs of ??1?$CMemString@UCMemString_PolicyCoTaskMem@@@@QEAA@XZ @ 0x1802272EC
 * Callers:
 *     _CLauncherTipContextMenu::_CheckLinkHash_::_1_::dtor$3 @ 0x1806A948A (_CLauncherTipContextMenu--_CheckLinkHash_--_1_--dtor$3.c)
 *     _CLauncherTipContextMenu::_CheckLinkHash_::_1_::dtor$4 @ 0x1806A949C (_CLauncherTipContextMenu--_CheckLinkHash_--_1_--dtor$4.c)
 *     _CLauncherTipContextMenu::_AddLinkToCommands_::_1_::dtor$6 @ 0x1806B11D7 (_CLauncherTipContextMenu--_AddLinkToCommands_--_1_--dtor$6.c)
 *     _CSwitchController::_SwitchToApp_::_1_::dtor$0 @ 0x1806B2D7B (_CSwitchController--_SwitchToApp_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall CMemString<CMemString_PolicyCoTaskMem>::~CMemString<CMemString_PolicyCoTaskMem>(LPVOID *a1)
{
  CoTaskMemFree(*a1);
}
