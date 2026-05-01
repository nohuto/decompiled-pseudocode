/*
 * XREFs of ??1OutRef@RoVariant@@QEAA@XZ @ 0x180175330
 * Callers:
 *     _CSingleViewShellExperience::OnViewPropertiesChangedBase_::_1_::dtor$7 @ 0x1806D73CF (_CSingleViewShellExperience--OnViewPropertiesChangedBase_--_1_--dtor$7.c)
 *     _CQuickConnectExperienceManager::OnViewPropertiesChanging_::_1_::dtor$9 @ 0x1806E6C50 (_CQuickConnectExperienceManager--OnViewPropertiesChanging_--_1_--dtor$9.c)
 *     _CShoulderTapExperienceManager::OnViewPropertiesChanging_::_1_::dtor$6 @ 0x1806E6C62 (_CShoulderTapExperienceManager--OnViewPropertiesChanging_--_1_--dtor$6.c)
 *     _CJumpViewExperienceManager::EnsureWindowPosition_::_1_::dtor$5 @ 0x1806E735E (_CJumpViewExperienceManager--EnsureWindowPosition_--_1_--dtor$5.c)
 *     _CQuickConnectExperienceManager::UpdateWindowPosition_::_1_::dtor$3 @ 0x1806E73A6 (_CQuickConnectExperienceManager--UpdateWindowPosition_--_1_--dtor$3.c)
 *     _PeoplePaneViewManager::GetRectFromPropertySet_::_1_::dtor$8 @ 0x1806E9B40 (_PeoplePaneViewManager--GetRectFromPropertySet_--_1_--dtor$8.c)
 *     _PeoplePaneViewManager::IsWindowVisibleInContactPanel_::_1_::dtor$6 @ 0x1806E9B64 (_PeoplePaneViewManager--IsWindowVisibleInContactPanel_--_1_--dtor$6.c)
 * Callees:
 *     ??0RoVariant@@AEAA@PEAUIInspectable@@_N1@Z @ 0x180175388 (--0RoVariant@@AEAA@PEAUIInspectable@@_N1@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall RoVariant::OutRef::~OutRef(struct IInspectable **this, __int64 a2, bool a3, bool a4)
{
  struct IInspectable *v4; // rbx
  struct IInspectableVtbl *lpVtbl; // rcx
  int v6; // edx
  struct IInspectableVtbl *v7; // [rsp+20h] [rbp-18h] BYREF
  int v8; // [rsp+28h] [rbp-10h]

  v4 = *this;
  RoVariant::RoVariant((RoVariant *)&v7, this[1], a3, a4);
  lpVtbl = v4->lpVtbl;
  v4->lpVtbl = v7;
  v6 = (int)v4[1].lpVtbl;
  LODWORD(v4[1].lpVtbl) = v8;
  if ( lpVtbl )
  {
    if ( ((v6 - 3) & 0xFFFFFFFB) == 0 )
      (*((void (__fastcall **)(struct IInspectableVtbl *))lpVtbl->QueryInterface + 2))(lpVtbl);
  }
}
