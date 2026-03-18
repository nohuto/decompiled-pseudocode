/*
 * XREFs of ?UpdateBoundTrackerState@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTrackerBase@@W4ScrollState@@@Z @ 0x180137A00
 * Callers:
 *     ?SetState@CInteractionTracker@@EEAAXW4ScrollState@@W4TrackerUpdateType@CInteractionTrackerBase@@@Z @ 0x1801C4CE0 (-SetState@CInteractionTracker@@EEAAXW4ScrollState@@W4TrackerUpdateType@CInteractionTrackerBase@@.c)
 *     ?SetState@CInteractionTracker2@@EEAAXW4ScrollState@@W4TrackerUpdateType@CInteractionTrackerBase@@@Z @ 0x180277000 (-SetState@CInteractionTracker2@@EEAAXW4ScrollState@@W4TrackerUpdateType@CInteractionTrackerBase@.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x1800C44D0 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800E95D0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@PEAVCInteractionTrackerBase@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x180138364 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@PEAVCInteractionTrackerBa.c)
 *     ??$_Emplace@AEBQEAVCInteractionTrackerBase@@@?$_Tree@V?$_Tset_traits@PEAVCInteractionTrackerBase@@U?$less@PEAVCInteractionTrackerBase@@@std@@V?$allocator@PEAVCInteractionTrackerBase@@@3@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@PEAVCInteractionTrackerBase@@PEAX@std@@_N@1@AEBQEAVCInteractionTrackerBase@@@Z @ 0x1801383BC (--$_Emplace@AEBQEAVCInteractionTrackerBase@@@-$_Tree@V-$_Tset_traits@PEAVCInteractionTrackerBase.c)
 *     ??$_Emplace_back_internal@AEBQEAVCInteractionTrackerBase@@@?$deque@PEAVCInteractionTrackerBase@@V?$allocator@PEAVCInteractionTrackerBase@@@std@@@std@@AEAAXAEBQEAVCInteractionTrackerBase@@@Z @ 0x180138660 (--$_Emplace_back_internal@AEBQEAVCInteractionTrackerBase@@@-$deque@PEAVCInteractionTrackerBase@@.c)
 *     ??1?$deque@PEAVCInteractionTrackerBase@@V?$allocator@PEAVCInteractionTrackerBase@@@std@@@std@@QEAA@XZ @ 0x180138728 (--1-$deque@PEAVCInteractionTrackerBase@@V-$allocator@PEAVCInteractionTrackerBase@@@std@@@std@@QE.c)
 *     ??$_Alloc_proxy@V?$allocator@U_Container_proxy@std@@@std@@@_Container_base12@std@@QEAAX$$QEAV?$allocator@U_Container_proxy@std@@@1@@Z @ 0x180138AB8 (--$_Alloc_proxy@V-$allocator@U_Container_proxy@std@@@std@@@_Container_base12@std@@QEAAX$$QEAV-$a.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@PEAVCInteractionTrackerBase@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@PEAVCInteractionTrackerBase@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@PEAVCInteractionTrackerBase@@PEAX@std@@@1@PEAU?$_Tree_node@PEAVCInteractionTrackerBase@@PEAX@1@@Z @ 0x180138C8C (--$_Erase_tree@V-$allocator@U-$_Tree_node@PEAVCInteractionTrackerBase@@PEAX@std@@@std@@@-$_Tree_.c)
 *     ?find@?$_Hash@V?$_Umap_traits@PEAVCInteractionTrackerBase@@V?$unordered_map@PEAVCInteractionTrackerBase@@W4InteractionTrackerBindingModeFlags@@U?$hash@PEAVCInteractionTrackerBase@@@std@@U?$equal_to@PEAVCInteractionTrackerBase@@@4@V?$allocator@U?$pair@QEAVCInteractionTrackerBase@@W4InteractionTrackerBindingModeFlags@@@std@@@4@@std@@V?$_Uhash_compare@PEAVCInteractionTrackerBase@@U?$hash@PEAVCInteractionTrackerBase@@@std@@U?$equal_to@PEAVCInteractionTrackerBase@@@3@@3@V?$allocator@U?$pair@QEAVCInteractionTrackerBase@@V?$unordered_map@PEAVCInteractionTrackerBase@@W4InteractionTrackerBindingModeFlags@@U?$hash@PEAVCInteractionTrackerBase@@@std@@U?$equal_to@PEAVCInteractionTrackerBase@@@4@V?$allocator@U?$pair@QEAVCInteractionTrackerBase@@W4InteractionTrackerBindingModeFlags@@@std@@@4@@std@@@std@@@3@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCInteractionTrackerBase@@V?$unordered_map@PEAVCInteractionTrackerBase@@W4InteractionTrackerBindingModeFlags@@U?$hash@PEAVCInteractionTrackerBase@@@std@@U?$equal_to@PEAVCInteractionTrackerBase@@@4@V?$allocator@U?$pair@QEAVCInteractionTrackerBase@@W4InteractionTrackerBindingModeFlags@@@std@@@4@@std@@@std@@@std@@@std@@@2@AEBQEAVCInteractionTrackerBase@@@Z @ 0x1802798D0 (-find@-$_Hash@V-$_Umap_traits@PEAVCInteractionTrackerBase@@V-$unordered_map@PEAVCInteractionTrac.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CInteractionTrackerBindingManager::UpdateBoundTrackerState(__int64 a1, _QWORD *a2, unsigned int a3)
{
  __int64 v6; // rdx
  _QWORD *v7; // rax
  __int64 v8; // r15
  __int64 v9; // r9
  _QWORD *v10; // r10
  _QWORD *v11; // rdi
  _QWORD *i; // rbx
  _QWORD *v13; // rax
  _QWORD *v14; // rax
  _QWORD *v15; // rbx
  __int64 v16; // rdx
  _QWORD v17[2]; // [rsp+20h] [rbp-60h] BYREF
  void *v18[2]; // [rsp+30h] [rbp-50h] BYREF
  char v19[16]; // [rsp+40h] [rbp-40h] BYREF
  __int128 v20; // [rsp+50h] [rbp-30h] BYREF
  __int128 v21; // [rsp+60h] [rbp-20h]
  __int64 v22; // [rsp+70h] [rbp-10h]
  _QWORD *v23; // [rsp+B8h] [rbp+38h] BYREF
  __int64 v24; // [rsp+C8h] [rbp+48h] BYREF

  if ( !(*(unsigned __int8 (__fastcall **)(_QWORD *))(*a2 + 464LL))(a2) )
    (*(void (__fastcall **)(_QWORD *))(*a2 + 416LL))(a2);
  v18[1] = 0LL;
  v7 = std::_Allocate<16,std::_Default_allocate_traits>(0x28uLL, v6);
  v8 = a1 + 80;
  v23 = a2;
  *v7 = v7;
  v7[1] = v7;
  v7[2] = v7;
  *((_WORD *)v7 + 12) = 257;
  v18[0] = v7;
  if ( *(_QWORD *)std::_Hash<std::_Umap_traits<CInteractionTrackerBase *,std::unordered_map<CInteractionTrackerBase *,enum InteractionTrackerBindingModeFlags>,std::_Uhash_compare<CInteractionTrackerBase *,std::hash<CInteractionTrackerBase *>,std::equal_to<CInteractionTrackerBase *>>,std::allocator<std::pair<CInteractionTrackerBase * const,std::unordered_map<CInteractionTrackerBase *,enum InteractionTrackerBindingModeFlags>>>,0>>::find(
                    a1 + 80,
                    &v24,
                    &v23) == *(_QWORD *)(a1 + 88) )
  {
    std::_Tree<std::_Tset_traits<CInteractionTrackerBase *,std::less<CInteractionTrackerBase *>,std::allocator<CInteractionTrackerBase *>,0>>::_Emplace<CInteractionTrackerBase * const &>(
      v18,
      v17,
      &v23);
  }
  else
  {
    v22 = 0LL;
    v20 = 0LL;
    v21 = 0LL;
    std::_Container_base12::_Alloc_proxy<std::allocator<std::_Container_proxy>>(&v20);
    std::deque<CInteractionTrackerBase *>::_Emplace_back_internal<CInteractionTrackerBase * const &>(&v20, &v23);
    while ( 1 )
    {
      v9 = v22;
      if ( !v22 )
        break;
      v24 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)&v20 + 1) + 8 * ((v21 - 1) & (*((_QWORD *)&v21 + 1) >> 1)))
                      + 8LL * (BYTE8(v21) & 1));
      --v22;
      if ( v9 == 1 )
        *((_QWORD *)&v21 + 1) = 0LL;
      else
        ++*((_QWORD *)&v21 + 1);
      std::_Hash<std::_Umap_traits<CInteractionTrackerBase *,std::unordered_map<CInteractionTrackerBase *,enum InteractionTrackerBindingModeFlags>,std::_Uhash_compare<CInteractionTrackerBase *,std::hash<CInteractionTrackerBase *>,std::equal_to<CInteractionTrackerBase *>>,std::allocator<std::pair<CInteractionTrackerBase * const,std::unordered_map<CInteractionTrackerBase *,enum InteractionTrackerBindingModeFlags>>>,0>>::find(
        v8,
        v17,
        &v24);
      v10 = v18[0];
      v11 = *(_QWORD **)(v17[0] + 32LL);
      for ( i = (_QWORD *)*v11; i != v11; i = (_QWORD *)*i )
      {
        v13 = (_QWORD *)*v10;
        v23 = (_QWORD *)*v10;
        while ( v13 != v10 )
        {
          if ( v13[4] == i[2] )
          {
            if ( v13 != v10 )
              goto LABEL_16;
            break;
          }
          std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<CInteractionTrackerBase *>>,std::_Iterator_base0>::operator++(&v23);
          v13 = v23;
        }
        std::deque<CInteractionTrackerBase *>::_Emplace_back_internal<CInteractionTrackerBase * const &>(&v20, i + 2);
        v10 = v18[0];
LABEL_16:
        ;
      }
      std::_Tree<std::_Tset_traits<CInteractionTrackerBase *,std::less<CInteractionTrackerBase *>,std::allocator<CInteractionTrackerBase *>,0>>::_Emplace<CInteractionTrackerBase * const &>(
        v18,
        v19,
        &v24);
    }
    std::deque<CInteractionTrackerBase *>::~deque<CInteractionTrackerBase *>(&v20);
  }
  v14 = *(_QWORD **)v18[0];
  v23 = *(_QWORD **)v18[0];
  while ( !*((_BYTE *)v14 + 25) )
  {
    v15 = (_QWORD *)v14[4];
    if ( v15 != a2 )
    {
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(*v15 + 464LL))(v14[4]) )
      {
        LOBYTE(v16) = a3 == 3;
        (*(void (__fastcall **)(_QWORD *, __int64))(*v15 + 424LL))(v15, v16);
      }
      (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))(*v15 + 448LL))(v15, a3, 1LL);
      if ( *((_DWORD *)v15 + 30) )
        *(_BYTE *)(v15[12] + 24LL * (unsigned int)(*((_DWORD *)v15 + 30) - 1) + 20) = 1;
    }
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<CInteractionTrackerBase *>>,std::_Iterator_base0>::operator++(&v23);
    v14 = v23;
  }
  if ( !a3 )
    (*(void (__fastcall **)(_QWORD *, _QWORD))(*a2 + 424LL))(a2, 0LL);
  std::_Tree_val<std::_Tree_simple_types<CInteractionTrackerBase *>>::_Erase_tree<std::allocator<std::_Tree_node<CInteractionTrackerBase *,void *>>>(
    v18,
    v18,
    *((_QWORD *)v18[0] + 1));
  std::_Deallocate<16>(v18[0], 0x28uLL);
}
