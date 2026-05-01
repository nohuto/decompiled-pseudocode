/*
 * XREFs of ??1CPropertyStoreHelper@@QEAA@XZ @ 0x1802C904C
 * Callers:
 *     _CLauncherTipContextMenu::_AddLinkToCommands_::_1_::dtor$3 @ 0x1806B11C5 (_CLauncherTipContextMenu--_AddLinkToCommands_--_1_--dtor$3.c)
 *     _FullScreenPositioner::IsLightweightFullScreen_::_1_::dtor$2 @ 0x1806BA889 (_FullScreenPositioner--IsLightweightFullScreen_--_1_--dtor$2.c)
 *     _CLauncherTipContextMenu::CleanupObsoleteLinks_::_1_::dtor$6 @ 0x1806D7D70 (_CLauncherTipContextMenu--CleanupObsoleteLinks_--_1_--dtor$6.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CPropertyStoreHelper::~CPropertyStoreHelper(CPropertyStoreHelper *this)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)this;
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    *(_QWORD *)this = 0LL;
  }
}
