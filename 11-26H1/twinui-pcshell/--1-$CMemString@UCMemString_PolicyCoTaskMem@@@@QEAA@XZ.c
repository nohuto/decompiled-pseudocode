/*
 * XREFs of ??1?$CMemString@UCMemString_PolicyCoTaskMem@@@@QEAA@XZ @ 0x180217A94
 * Callers:
 *     _CLauncherTipContextMenu::_CheckLinkHash_::_1_::dtor$3 @ 0x1806D207C (_CLauncherTipContextMenu--_CheckLinkHash_--_1_--dtor$3.c)
 *     _CLauncherTipContextMenu::_CheckLinkHash_::_1_::dtor$4 @ 0x1806D208E (_CLauncherTipContextMenu--_CheckLinkHash_--_1_--dtor$4.c)
 *     _CLauncherTipContextMenu::_AddLinkToCommands_::_1_::dtor$6 @ 0x1806D87D0 (_CLauncherTipContextMenu--_AddLinkToCommands_--_1_--dtor$6.c)
 *     _CSwitchController::_SwitchToApp_::_1_::dtor$0 @ 0x1806DA0F4 (_CSwitchController--_SwitchToApp_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall CMemString<CMemString_PolicyCoTaskMem>::~CMemString<CMemString_PolicyCoTaskMem>(LPVOID *a1)
{
  CoTaskMemFree(*a1);
}
