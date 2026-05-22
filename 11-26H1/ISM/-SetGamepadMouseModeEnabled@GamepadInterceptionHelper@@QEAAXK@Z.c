/*
 * XREFs of ?SetGamepadMouseModeEnabled@GamepadInterceptionHelper@@QEAAXK@Z @ 0x18010A0B0
 * Callers:
 *     ?OnGamepadMouseModeEnabledChanged@InputDelegationInputObjectProxy@@MEAAJXZ @ 0x180136800 (-OnGamepadMouseModeEnabledChanged@InputDelegationInputObjectProxy@@MEAAJXZ.c)
 * Callees:
 *     ?IsEdition@@YA_N_K@Z @ 0x1800221D0 (-IsEdition@@YA_N_K@Z.c)
 *     ?GetControllerNavigationManager@ISMStatics@@SAPEAVControllerNavigationManager@@XZ @ 0x1800292A0 (-GetControllerNavigationManager@ISMStatics@@SAPEAVControllerNavigationManager@@XZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Input_DesktopNavigationGamepad_ListenerFix@@@details@wil@@QEAA_NXZ @ 0x1800CE0CC (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Input_DesktopNavigationGamepad_Li.c)
 *     ?find@?$_Tree@V?$_Tmap_traits@KUAugmentedInputCacheState@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKUAugmentedInputCacheState@@@std@@@3@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKUAugmentedInputCacheState@@@std@@@std@@@std@@@2@AEBK@Z @ 0x1800D3070 (-find@-$_Tree@V-$_Tmap_traits@KUAugmentedInputCacheState@@U-$less@K@std@@V-$allocator@U-$pair@$$.c)
 *     ??$insert@$0A@$0A@@?$_Tree@V?$_Tset_traits@KU?$less@K@std@@V?$allocator@K@2@$0A@@std@@@std@@QEAA?AU?$pair@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@K@std@@@std@@@std@@_N@1@AEBK@Z @ 0x180108D8C (--$insert@$0A@$0A@@-$_Tree@V-$_Tset_traits@KU-$less@K@std@@V-$allocator@K@2@$0A@@std@@@std@@QEAA.c)
 *     ?EnableControllerMouseMode@ControllerNavigationManager@@QEAAXXZ @ 0x1801794E4 (-EnableControllerMouseMode@ControllerNavigationManager@@QEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall GamepadInterceptionHelper::SetGamepadMouseModeEnabled(GamepadInterceptionHelper *this, int a2)
{
  __int64 v3; // rsi
  ControllerNavigationManager *ControllerNavigationManager; // rax
  __int64 v5; // rdx
  _QWORD *v6; // rdi
  _QWORD *i; // rbx
  _BYTE v8[24]; // [rsp+20h] [rbp-18h] BYREF
  int v9; // [rsp+48h] [rbp+10h] BYREF
  __int64 v10; // [rsp+50h] [rbp+18h] BYREF

  v9 = a2;
  if ( !IsEdition(253345LL) )
  {
    v3 = *((_QWORD *)this + 12);
    std::_Tree<std::_Tmap_traits<unsigned long,AugmentedInputCacheState,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,AugmentedInputCacheState>>,0>>::find(
      (__int64 *)this + 11,
      (__int64)&v10,
      &v9);
    if ( v10 == *((_QWORD *)this + 11) )
      std::_Tree<std::_Tset_traits<unsigned long,std::less<unsigned long>,std::allocator<unsigned long>,0>>::insert<0,0>(
        (__int64 *)this + 11,
        (__int64)v8,
        &v9);
    if ( !v3 )
    {
      ControllerNavigationManager = ISMStatics::GetControllerNavigationManager();
      ControllerNavigationManager::EnableControllerMouseMode(ControllerNavigationManager);
      if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_Input_DesktopNavigationGamepad_ListenerFix>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_Input_DesktopNavigationGamepad_ListenerFix>::GetImpl'::`2'::impl) )
      {
        v6 = (_QWORD *)*((_QWORD *)this + 7);
        for ( i = (_QWORD *)*((_QWORD *)this + 6); i != v6; ++i )
        {
          LOBYTE(v5) = 1;
          (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*i + 32LL))(*i, v5);
        }
      }
    }
  }
}
