/*
 * XREFs of ?GetHandler@TransitionManager@Transitions@Udwm@winrt@@AEAA?AUITransition@234@W4ShellTransitionType@234@@Z @ 0x18001E9B0
 * Callers:
 *     ?ForceUpdateScene@TransitionManager@Transitions@Udwm@winrt@@QEAAXXZ @ 0x18001E940 (-ForceUpdateScene@TransitionManager@Transitions@Udwm@winrt@@QEAAXXZ.c)
 *     ?PreTransitionWithNativeWindow@TransitionManager@Transitions@Udwm@winrt@@QEAAJPEAVCTopLevelWindow3D@@W4ShellTransitionType@234@@Z @ 0x1800305E4 (-PreTransitionWithNativeWindow@TransitionManager@Transitions@Udwm@winrt@@QEAAJPEAVCTopLevelWindo.c)
 *     ?StopRotation@TransitionManager@Transitions@Udwm@winrt@@QEAAXXZ @ 0x18006E7BC (-StopRotation@TransitionManager@Transitions@Udwm@winrt@@QEAAXXZ.c)
 *     ?WindowMaximizeSnapPostTransition@TransitionManager@Transitions@Udwm@winrt@@QEAAXXZ @ 0x180075974 (-WindowMaximizeSnapPostTransition@TransitionManager@Transitions@Udwm@winrt@@QEAAXXZ.c)
 *     ?SkipAnimationDelays@TransitionManager@Transitions@Udwm@winrt@@QEAAXXZ @ 0x18007842C (-SkipAnimationDelays@TransitionManager@Transitions@Udwm@winrt@@QEAAXXZ.c)
 *     ?UpdateRect@TransitionManager@Transitions@Udwm@winrt@@QEAAXAEBURect@Foundation@Windows@4@W4ShellTransitionType@234@@Z @ 0x18008C2F4 (-UpdateRect@TransitionManager@Transitions@Udwm@winrt@@QEAAXAEBURect@Foundation@Windows@4@W4Shell.c)
 *     ?WindowMaximizeSnapCancel@TransitionManager@Transitions@Udwm@winrt@@QEAAXXZ @ 0x18008CB04 (-WindowMaximizeSnapCancel@TransitionManager@Transitions@Udwm@winrt@@QEAAXXZ.c)
 *     ?PostTransition@TransitionManager@Transitions@Udwm@winrt@@QEAAXW4ShellTransitionType@234@@Z @ 0x1800D8E1C (-PostTransition@TransitionManager@Transitions@Udwm@winrt@@QEAAXW4ShellTransitionType@234@@Z.c)
 *     ?PreTransition@TransitionManager@Transitions@Udwm@winrt@@QEAAXW4ShellTransitionType@234@@Z @ 0x1800D8E58 (-PreTransition@TransitionManager@Transitions@Udwm@winrt@@QEAAXW4ShellTransitionType@234@@Z.c)
 *     ?RegisterTransitionBitmap@TransitionManager@Transitions@Udwm@winrt@@QEAAJPEAUHWND__@@AEBUtagRECT@@PEAX_K@Z @ 0x1800D8EF0 (-RegisterTransitionBitmap@TransitionManager@Transitions@Udwm@winrt@@QEAAJPEAUHWND__@@AEBUtagRECT.c)
 *     ?UpdateAngle@TransitionManager@Transitions@Udwm@winrt@@QEAAXHH@Z @ 0x1800D9150 (-UpdateAngle@TransitionManager@Transitions@Udwm@winrt@@QEAAXHH@Z.c)
 * Callees:
 *     ?find@?$_Hash@V?$_Umap_traits@W4ShellTransitionType@Transitions@Udwm@winrt@@UITransition@234@V?$_Uhash_compare@W4ShellTransitionType@Transitions@Udwm@winrt@@U?$hash@W4ShellTransitionType@Transitions@Udwm@winrt@@@std@@U?$equal_to@W4ShellTransitionType@Transitions@Udwm@winrt@@@6@@std@@V?$allocator@U?$pair@$$CBW4ShellTransitionType@Transitions@Udwm@winrt@@UITransition@234@@std@@@7@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBW4ShellTransitionType@Transitions@Udwm@winrt@@UITransition@234@@std@@@std@@@std@@@2@AEBW4ShellTransitionType@Transitions@Udwm@winrt@@@Z @ 0x1800D967C (-find@-$_Hash@V-$_Umap_traits@W4ShellTransitionType@Transitions@Udwm@winrt@@UITransition@234@V-$.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall winrt::Udwm::Transitions::TransitionManager::GetHandler(__int64 a1, _QWORD *a2, int a3)
{
  __int64 v5; // rcx
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF
  int v8; // [rsp+40h] [rbp+18h] BYREF

  v8 = a3;
  std::_Hash<std::_Umap_traits<enum winrt::Udwm::Transitions::ShellTransitionType,winrt::Udwm::Transitions::ITransition,std::_Uhash_compare<enum winrt::Udwm::Transitions::ShellTransitionType,std::hash<enum winrt::Udwm::Transitions::ShellTransitionType>,std::equal_to<enum winrt::Udwm::Transitions::ShellTransitionType>>,std::allocator<std::pair<enum winrt::Udwm::Transitions::ShellTransitionType const,winrt::Udwm::Transitions::ITransition>>,0>>::find(
    a1,
    &v7,
    &v8);
  if ( v7 == *(_QWORD *)(a1 + 8) )
  {
    *a2 = 0LL;
  }
  else
  {
    v5 = *(_QWORD *)(v7 + 24);
    *a2 = v5;
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  }
  return a2;
}
