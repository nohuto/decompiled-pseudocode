/*
 * XREFs of ?EnsureWorkAreaChangeTransitionRemoved@TransitionManager@Transitions@Udwm@winrt@@QEAAXPEAUHWND__@@@Z @ 0x1800D8BA0
 * Callers:
 *     ?StopAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x180013644 (-StopAnimation@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?OnMoveResizeInitiatedFromWorkAreaChange@TransitionManager@Transitions@Udwm@winrt@@QEAAXPEAUHWND__@@@Z @ 0x18007C210 (-OnMoveResizeInitiatedFromWorkAreaChange@TransitionManager@Transitions@Udwm@winrt@@QEAAXPEAUHWND.c)
 * Callees:
 *     ??1?$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ @ 0x18001EBF8 (--1-$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ.c)
 *     ??R?$_Conditionally_enabled_hash@_J$00@std@@SA_KAEB_J@Z @ 0x18008B2E0 (--R-$_Conditionally_enabled_hash@_J$00@std@@SA_KAEB_J@Z.c)
 *     ??$_Freenode@V?$allocator@U?$_List_node@U?$pair@QEAUHWND__@@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@QEAUHWND__@@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@QEAUHWND__@@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1800D6534 (--$_Freenode@V-$allocator@U-$_List_node@U-$pair@QEAUHWND__@@UUserResizeVisual@Transitions@Udwm@w.c)
 *     ?find@?$_Hash@V?$_Umap_traits@PEAUHWND__@@UITransition@Transitions@Udwm@winrt@@V?$_Uhash_compare@PEAUHWND__@@U?$hash@PEAUHWND__@@@std@@U?$equal_to@PEAUHWND__@@@3@@std@@V?$allocator@U?$pair@QEAUHWND__@@UITransition@Transitions@Udwm@winrt@@@std@@@7@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAUHWND__@@UITransition@Transitions@Udwm@winrt@@@std@@@std@@@std@@@2@AEBQEAUHWND__@@@Z @ 0x1800D9628 (-find@-$_Hash@V-$_Umap_traits@PEAUHWND__@@UITransition@Transitions@Udwm@winrt@@V-$_Uhash_compare.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall winrt::Udwm::Transitions::TransitionManager::EnsureWorkAreaChangeTransitionRemoved(
        winrt::Udwm::Transitions::TransitionManager *this,
        HWND a2)
{
  __int64 *v3; // rbx
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // r10
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 *v10; // [rsp+30h] [rbp+8h] BYREF
  HWND v11; // [rsp+38h] [rbp+10h] BYREF

  v11 = a2;
  std::_Hash<std::_Umap_traits<HWND__ *,winrt::Udwm::Transitions::ITransition,std::_Uhash_compare<HWND__ *,std::hash<HWND__ *>,std::equal_to<HWND__ *>>,std::allocator<std::pair<HWND__ * const,winrt::Udwm::Transitions::ITransition>>,0>>::find(
    (char *)this + 64,
    &v10,
    &v11);
  v3 = v10;
  if ( v10 != *((__int64 **)this + 9) )
  {
    v4 = v10[3];
    v10 = (__int64 *)v4;
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
    v5 = std::_Conditionally_enabled_hash<__int64,1>::operator()((__int64)(v3 + 2));
    v6 = *((_QWORD *)this + 11);
    v7 = 2 * (*((_QWORD *)this + 14) & v5);
    if ( *(__int64 **)(v6 + 16 * (*((_QWORD *)this + 14) & v5) + 8) == v3 )
    {
      if ( *(__int64 **)(v6 + 16 * (*((_QWORD *)this + 14) & v5)) == v3 )
      {
        v8 = *((_QWORD *)this + 9);
        *(_QWORD *)(v6 + 8 * v7) = v8;
      }
      else
      {
        v8 = v3[1];
      }
      *(_QWORD *)(v6 + 8 * v7 + 8) = v8;
    }
    else if ( *(__int64 **)(v6 + 16 * (*((_QWORD *)this + 14) & v5)) == v3 )
    {
      *(_QWORD *)(v6 + 16 * (*((_QWORD *)this + 14) & v5)) = *v3;
    }
    v9 = *v3;
    --*((_QWORD *)this + 10);
    *(_QWORD *)v3[1] = v9;
    *(_QWORD *)(v9 + 8) = v3[1];
    std::_List_node<std::pair<HWND__ * const,winrt::Udwm::Transitions::UserResizeVisual>,void *>::_Freenode<std::allocator<std::_List_node<std::pair<HWND__ * const,winrt::Udwm::Transitions::UserResizeVisual>,void *>>>(
      v9,
      v3);
    winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>((__int64 *)&v10);
  }
}
