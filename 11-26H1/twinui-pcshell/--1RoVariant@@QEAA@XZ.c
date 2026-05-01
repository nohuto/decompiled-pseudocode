/*
 * XREFs of ??1RoVariant@@QEAA@XZ @ 0x1801DAD0C
 * Callers:
 *     ?OnViewPropertiesChanging@CPeopleBarJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180383D20 (-OnViewPropertiesChanging@CPeopleBarJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperien.c)
 *     ?OnViewPropertiesChanging@CShoulderTapExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180385030 (-OnViewPropertiesChanging@CShoulderTapExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?EnsureWindowPosition@CJumpViewExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@@Z @ 0x18038C648 (-EnsureWindowPosition@CJumpViewExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnViewPropertiesChanging@CJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x18038DB60 (-OnViewPropertiesChanging@CJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnViewPropertiesChanging@CQuickConnectExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180392750 (-OnViewPropertiesChanging@CQuickConnectExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@.c)
 *     ?UpdateWindowPosition@CQuickConnectExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180395120 (-UpdateWindowPosition@CQuickConnectExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?GetRectFromPropertySet@PeoplePaneViewManager@@AEAAJPEBGPEAUtagRECT@@@Z @ 0x18040B518 (-GetRectFromPropertySet@PeoplePaneViewManager@@AEAAJPEBGPEAUtagRECT@@@Z.c)
 *     ?IsWindowVisibleInContactPanel@PeoplePaneViewManager@@AEAAJPEAUHWND__@@PEBGPEAH@Z @ 0x18040BF6C (-IsWindowVisibleInContactPanel@PeoplePaneViewManager@@AEAAJPEAUHWND__@@PEBGPEAH@Z.c)
 *     _CSingleViewShellExperience::OnViewPropertiesChangedBase_::_1_::dtor$3 @ 0x1806D73BD (_CSingleViewShellExperience--OnViewPropertiesChangedBase_--_1_--dtor$3.c)
 *     _CPeopleBarJumpViewExperienceManager::OnViewPropertiesChanging_::_1_::dtor$1 @ 0x1806E6C3E (_CPeopleBarJumpViewExperienceManager--OnViewPropertiesChanging_--_1_--dtor$1.c)
 *     _CJumpViewExperienceManager::EnsureWindowPosition_::_1_::dtor$1 @ 0x1806E734C (_CJumpViewExperienceManager--EnsureWindowPosition_--_1_--dtor$1.c)
 *     _CJumpViewExperienceManager::EnsureWindowPosition_::_1_::dtor$4 @ 0x1806E7370 (_CJumpViewExperienceManager--EnsureWindowPosition_--_1_--dtor$4.c)
 *     _PeoplePaneViewManager::GetRectFromPropertySet_::_1_::dtor$5 @ 0x1806E7394 (_PeoplePaneViewManager--GetRectFromPropertySet_--_1_--dtor$5.c)
 *     _CJumpViewExperienceManager::OnViewPropertiesChanging_::_1_::dtor$1 @ 0x1806E73B8 (_CJumpViewExperienceManager--OnViewPropertiesChanging_--_1_--dtor$1.c)
 *     _CQuickConnectExperienceManager::OnViewPropertiesChanging_::_1_::dtor$2 @ 0x1806E7436 (_CQuickConnectExperienceManager--OnViewPropertiesChanging_--_1_--dtor$2.c)
 *     _CQuickConnectExperienceManager::OnViewPropertiesChanging_::_1_::dtor$5 @ 0x1806E7448 (_CQuickConnectExperienceManager--OnViewPropertiesChanging_--_1_--dtor$5.c)
 *     _CQuickConnectExperienceManager::OnViewPropertiesChanging_::_1_::dtor$8 @ 0x1806E745A (_CQuickConnectExperienceManager--OnViewPropertiesChanging_--_1_--dtor$8.c)
 *     _CQuickConnectExperienceManager::UpdateWindowPosition_::_1_::dtor$2 @ 0x1806E74B4 (_CQuickConnectExperienceManager--UpdateWindowPosition_--_1_--dtor$2.c)
 *     _PeoplePaneViewManager::IsWindowVisibleInContactPanel_::_1_::dtor$5 @ 0x1806E9B52 (_PeoplePaneViewManager--IsWindowVisibleInContactPanel_--_1_--dtor$5.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall RoVariant::~RoVariant(RoVariant *this)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)this;
  if ( v2 && (*((_DWORD *)this + 2) == 3 || *((_DWORD *)this + 2) == 7) )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
}
