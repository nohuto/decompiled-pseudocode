/*
 * XREFs of ?GetConnectedTrackersForAxis@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTrackerBase@@W4InteractionTrackerBindingModeFlags@@PEAV?$set@PEAVCInteractionTrackerBase@@U?$less@PEAVCInteractionTrackerBase@@@std@@V?$allocator@PEAVCInteractionTrackerBase@@@3@@std@@PEAPEAV2@@Z @ 0x180138160
 * Callers:
 *     ?GetConnectedTrackersAndUpdatedAxes@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTrackerBase@@W4InteractionTrackerBindingModeFlags@@PEAV?$unordered_map@PEAVCInteractionTrackerBase@@W4InteractionTrackerBindingModeFlags@@U?$hash@PEAVCInteractionTrackerBase@@@std@@U?$equal_to@PEAVCInteractionTrackerBase@@@4@V?$allocator@U?$pair@QEAVCInteractionTrackerBase@@W4InteractionTrackerBindingModeFlags@@@std@@@4@@std@@@Z @ 0x180136A28 (-GetConnectedTrackersAndUpdatedAxes@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTrac.c)
 *     ?BringBoundTrackersPositionAndScaleInSync@CInteractionTrackerBindingManager@@QEAAXPEBVCInteractionTrackerBase@@PEAV2@W4InteractionTrackerBindingModeFlags@@@Z @ 0x180137108 (-BringBoundTrackersPositionAndScaleInSync@CInteractionTrackerBindingManager@@QEAAXPEBVCInteracti.c)
 *     ?BringBoundTrackersStateInSync@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTrackerBase@@0W4InteractionTrackerBindingModeFlags@@@Z @ 0x1802155F4 (-BringBoundTrackersStateInSync@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTrackerBa.c)
 *     ?BoundTrackersHaveActiveCustomAnimations@CInteractionTrackerBindingManager@@QEAA_NPEAVCInteractionTrackerBase@@@Z @ 0x1802785CC (-BoundTrackersHaveActiveCustomAnimations@CInteractionTrackerBindingManager@@QEAA_NPEAVCInteracti.c)
 *     ?TransitionDisconnectedTrackersToIdle@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTrackerBase@@0@Z @ 0x180278E94 (-TransitionDisconnectedTrackersToIdle@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTr.c)
 * Callees:
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@PEAVCInteractionTrackerBase@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x180138364 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@PEAVCInteractionTrackerBa.c)
 *     ??$_Emplace@AEBQEAVCInteractionTrackerBase@@@?$_Tree@V?$_Tset_traits@PEAVCInteractionTrackerBase@@U?$less@PEAVCInteractionTrackerBase@@@std@@V?$allocator@PEAVCInteractionTrackerBase@@@3@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@PEAVCInteractionTrackerBase@@PEAX@std@@_N@1@AEBQEAVCInteractionTrackerBase@@@Z @ 0x1801383BC (--$_Emplace@AEBQEAVCInteractionTrackerBase@@@-$_Tree@V-$_Tset_traits@PEAVCInteractionTrackerBase.c)
 *     ??$_Emplace_back_internal@AEBQEAVCInteractionTrackerBase@@@?$deque@PEAVCInteractionTrackerBase@@V?$allocator@PEAVCInteractionTrackerBase@@@std@@@std@@AEAAXAEBQEAVCInteractionTrackerBase@@@Z @ 0x180138660 (--$_Emplace_back_internal@AEBQEAVCInteractionTrackerBase@@@-$deque@PEAVCInteractionTrackerBase@@.c)
 *     ??1?$deque@PEAVCInteractionTrackerBase@@V?$allocator@PEAVCInteractionTrackerBase@@@std@@@std@@QEAA@XZ @ 0x180138728 (--1-$deque@PEAVCInteractionTrackerBase@@V-$allocator@PEAVCInteractionTrackerBase@@@std@@@std@@QE.c)
 *     ??$_Alloc_proxy@V?$allocator@U_Container_proxy@std@@@std@@@_Container_base12@std@@QEAAX$$QEAV?$allocator@U_Container_proxy@std@@@1@@Z @ 0x180138AB8 (--$_Alloc_proxy@V-$allocator@U_Container_proxy@std@@@std@@@_Container_base12@std@@QEAAX$$QEAV-$a.c)
 *     ?find@?$_Hash@V?$_Umap_traits@PEAVCInteractionTrackerBase@@V?$unordered_map@PEAVCInteractionTrackerBase@@W4InteractionTrackerBindingModeFlags@@U?$hash@PEAVCInteractionTrackerBase@@@std@@U?$equal_to@PEAVCInteractionTrackerBase@@@4@V?$allocator@U?$pair@QEAVCInteractionTrackerBase@@W4InteractionTrackerBindingModeFlags@@@std@@@4@@std@@V?$_Uhash_compare@PEAVCInteractionTrackerBase@@U?$hash@PEAVCInteractionTrackerBase@@@std@@U?$equal_to@PEAVCInteractionTrackerBase@@@3@@3@V?$allocator@U?$pair@QEAVCInteractionTrackerBase@@V?$unordered_map@PEAVCInteractionTrackerBase@@W4InteractionTrackerBindingModeFlags@@U?$hash@PEAVCInteractionTrackerBase@@@std@@U?$equal_to@PEAVCInteractionTrackerBase@@@4@V?$allocator@U?$pair@QEAVCInteractionTrackerBase@@W4InteractionTrackerBindingModeFlags@@@std@@@4@@std@@@std@@@3@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCInteractionTrackerBase@@V?$unordered_map@PEAVCInteractionTrackerBase@@W4InteractionTrackerBindingModeFlags@@U?$hash@PEAVCInteractionTrackerBase@@@std@@U?$equal_to@PEAVCInteractionTrackerBase@@@4@V?$allocator@U?$pair@QEAVCInteractionTrackerBase@@W4InteractionTrackerBindingModeFlags@@@std@@@4@@std@@@std@@@std@@@std@@@2@AEBQEAVCInteractionTrackerBase@@@Z @ 0x1802798D0 (-find@-$_Hash@V-$_Umap_traits@PEAVCInteractionTrackerBase@@V-$unordered_map@PEAVCInteractionTrac.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CInteractionTrackerBindingManager::GetConnectedTrackersForAxis(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        _QWORD **a4,
        __int64 *a5)
{
  __int64 *v5; // rsi
  __int64 v9; // r12
  __int64 result; // rax
  __int64 v11; // r9
  __int64 ***v12; // rdi
  __int64 **i; // rbx
  _QWORD *v14; // r10
  _QWORD *v15; // rax
  __int64 v16; // rbx
  _QWORD v17[2]; // [rsp+20h] [rbp-50h] BYREF
  char v18[16]; // [rsp+30h] [rbp-40h] BYREF
  __int128 v19; // [rsp+40h] [rbp-30h] BYREF
  __int128 v20; // [rsp+50h] [rbp-20h]
  __int64 v21; // [rsp+60h] [rbp-10h]
  _QWORD *v22; // [rsp+A0h] [rbp+30h] BYREF
  __int64 v23; // [rsp+A8h] [rbp+38h] BYREF

  v23 = a2;
  v5 = a5;
  if ( a5 )
    *a5 = 0LL;
  v9 = a1 + 80;
  result = std::_Hash<std::_Umap_traits<CInteractionTrackerBase *,std::unordered_map<CInteractionTrackerBase *,enum InteractionTrackerBindingModeFlags>,std::_Uhash_compare<CInteractionTrackerBase *,std::hash<CInteractionTrackerBase *>,std::equal_to<CInteractionTrackerBase *>>,std::allocator<std::pair<CInteractionTrackerBase * const,std::unordered_map<CInteractionTrackerBase *,enum InteractionTrackerBindingModeFlags>>>,0>>::find(
             a1 + 80,
             &a5,
             &v23);
  if ( *(_QWORD *)result == *(_QWORD *)(a1 + 88) )
  {
    result = std::_Tree<std::_Tset_traits<CInteractionTrackerBase *,std::less<CInteractionTrackerBase *>,std::allocator<CInteractionTrackerBase *>,0>>::_Emplace<CInteractionTrackerBase * const &>(
               a4,
               v17,
               &v23);
    if ( v5 )
    {
      result = v23;
      *v5 = v23;
    }
  }
  else if ( a3 <= 7 )
  {
    result = 150LL;
    if ( _bittest((const int *)&result, a3) )
    {
      v21 = 0LL;
      v19 = 0LL;
      v20 = 0LL;
      std::_Container_base12::_Alloc_proxy<std::allocator<std::_Container_proxy>>(&v19);
      std::deque<CInteractionTrackerBase *>::_Emplace_back_internal<CInteractionTrackerBase * const &>(&v19, &v23);
      while ( 1 )
      {
        v11 = v21;
        if ( !v21 )
          return std::deque<CInteractionTrackerBase *>::~deque<CInteractionTrackerBase *>(&v19);
        a5 = *(__int64 **)(*(_QWORD *)(*((_QWORD *)&v19 + 1) + 8 * ((v20 - 1) & (*((_QWORD *)&v20 + 1) >> 1)))
                         + 8LL * (BYTE8(v20) & 1));
        --v21;
        if ( v11 == 1 )
          *((_QWORD *)&v20 + 1) = 0LL;
        else
          ++*((_QWORD *)&v20 + 1);
        std::_Hash<std::_Umap_traits<CInteractionTrackerBase *,std::unordered_map<CInteractionTrackerBase *,enum InteractionTrackerBindingModeFlags>,std::_Uhash_compare<CInteractionTrackerBase *,std::hash<CInteractionTrackerBase *>,std::equal_to<CInteractionTrackerBase *>>,std::allocator<std::pair<CInteractionTrackerBase * const,std::unordered_map<CInteractionTrackerBase *,enum InteractionTrackerBindingModeFlags>>>,0>>::find(
          v9,
          v17,
          &a5);
        v12 = *(__int64 ****)(v17[0] + 32LL);
        for ( i = *v12; i != (__int64 **)v12; i = (__int64 **)*i )
        {
          v14 = *a4;
          v15 = (_QWORD *)**a4;
          v22 = v15;
          while ( v15 != v14 )
          {
            if ( (__int64 *)v15[4] == i[2] )
            {
              if ( v15 != v14 )
                goto LABEL_26;
              break;
            }
            std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<CInteractionTrackerBase *>>,std::_Iterator_base0>::operator++(&v22);
            v15 = v22;
          }
          if ( (a3 & (_DWORD)i[3]) == a3 || a3 == 7 )
            std::deque<CInteractionTrackerBase *>::_Emplace_back_internal<CInteractionTrackerBase * const &>(
              &v19,
              i + 2);
LABEL_26:
          ;
        }
        std::_Tree<std::_Tset_traits<CInteractionTrackerBase *,std::less<CInteractionTrackerBase *>,std::allocator<CInteractionTrackerBase *>,0>>::_Emplace<CInteractionTrackerBase * const &>(
          a4,
          v18,
          &a5);
        if ( v5 )
        {
          v16 = (__int64)a5;
          if ( (*(unsigned __int8 (__fastcall **)(__int64 *))(*a5 + 464))(a5) )
            *v5 = v16;
        }
      }
    }
  }
  return result;
}
