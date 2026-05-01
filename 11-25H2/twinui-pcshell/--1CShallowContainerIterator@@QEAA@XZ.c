/*
 * XREFs of ??1CShallowContainerIterator@@QEAA@XZ @ 0x1802C0650
 * Callers:
 *     ?_EnumerateAndBuildMenu@CLauncherTipContextMenu@@AEAAJXZ @ 0x18009D874 (-_EnumerateAndBuildMenu@CLauncherTipContextMenu@@AEAAJXZ.c)
 *     ?AddMissingLinksFromDefaultProfile@CLauncherTipContextMenu@@AEAAJXZ @ 0x1805DC6CC (-AddMissingLinksFromDefaultProfile@CLauncherTipContextMenu@@AEAAJXZ.c)
 *     ?CleanupObsoleteLinks@CLauncherTipContextMenu@@AEAAJXZ @ 0x1805DC994 (-CleanupObsoleteLinks@CLauncherTipContextMenu@@AEAAJXZ.c)
 *     _CLauncherTipContextMenu::_EnumerateAndBuildMenu_::_1_::dtor$7 @ 0x1806A94E4 (_CLauncherTipContextMenu--_EnumerateAndBuildMenu_--_1_--dtor$7.c)
 *     _CLauncherTipContextMenu::_AddFolderLinksToCommands_::_1_::dtor$0 @ 0x1806B117D (_CLauncherTipContextMenu--_AddFolderLinksToCommands_--_1_--dtor$0.c)
 *     _CLauncherTipContextMenu::AddMissingLinksFromDefaultProfile_::_1_::dtor$3 @ 0x1806D7D28 (_CLauncherTipContextMenu--AddMissingLinksFromDefaultProfile_--_1_--dtor$3.c)
 *     _CLauncherTipContextMenu::CleanupObsoleteLinks_::_1_::dtor$2 @ 0x1806D7D4C (_CLauncherTipContextMenu--CleanupObsoleteLinks_--_1_--dtor$2.c)
 *     _CLauncherTipContextMenu::CleanupObsoleteLinks_::_1_::dtor$4 @ 0x1806D7D5E (_CLauncherTipContextMenu--CleanupObsoleteLinks_--_1_--dtor$4.c)
 * Callees:
 *     ??$SafeRelease@UIShellItemArray@@@@YAXPEAPEAUIShellItemArray@@@Z @ 0x1802C068C (--$SafeRelease@UIShellItemArray@@@@YAXPEAPEAUIShellItemArray@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CShallowContainerIterator::~CShallowContainerIterator(CShallowContainerIterator *this)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 2);
  *((_QWORD *)this + 2) = 0LL;
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  SafeRelease<IShellItemArray>((char *)this + 8);
}
