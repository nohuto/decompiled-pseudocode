/*
 * XREFs of ??1CShallowContainerIterator@@QEAA@XZ @ 0x1802B7508
 * Callers:
 *     ?_EnumerateAndBuildMenu@CLauncherTipContextMenu@@AEAAJXZ @ 0x1800AB350 (-_EnumerateAndBuildMenu@CLauncherTipContextMenu@@AEAAJXZ.c)
 *     ?AddMissingLinksFromDefaultProfile@CLauncherTipContextMenu@@AEAAJXZ @ 0x1806012D0 (-AddMissingLinksFromDefaultProfile@CLauncherTipContextMenu@@AEAAJXZ.c)
 *     ?CleanupObsoleteLinks@CLauncherTipContextMenu@@AEAAJXZ @ 0x180601530 (-CleanupObsoleteLinks@CLauncherTipContextMenu@@AEAAJXZ.c)
 *     _CLauncherTipContextMenu::_EnumerateAndBuildMenu_::_1_::dtor$7 @ 0x1806D2157 (_CLauncherTipContextMenu--_EnumerateAndBuildMenu_--_1_--dtor$7.c)
 *     _CLauncherTipContextMenu::_AddFolderLinksToCommands_::_1_::dtor$0 @ 0x1806D8776 (_CLauncherTipContextMenu--_AddFolderLinksToCommands_--_1_--dtor$0.c)
 *     _CLauncherTipContextMenu::AddMissingLinksFromDefaultProfile_::_1_::dtor$3 @ 0x180700370 (_CLauncherTipContextMenu--AddMissingLinksFromDefaultProfile_--_1_--dtor$3.c)
 *     _CLauncherTipContextMenu::CleanupObsoleteLinks_::_1_::dtor$2 @ 0x180700394 (_CLauncherTipContextMenu--CleanupObsoleteLinks_--_1_--dtor$2.c)
 *     _CLauncherTipContextMenu::CleanupObsoleteLinks_::_1_::dtor$4 @ 0x1807003A6 (_CLauncherTipContextMenu--CleanupObsoleteLinks_--_1_--dtor$4.c)
 * Callees:
 *     ??$SafeRelease@UIShellItemArray@@@@YAXPEAPEAUIShellItemArray@@@Z @ 0x1802B7548 (--$SafeRelease@UIShellItemArray@@@@YAXPEAPEAUIShellItemArray@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
