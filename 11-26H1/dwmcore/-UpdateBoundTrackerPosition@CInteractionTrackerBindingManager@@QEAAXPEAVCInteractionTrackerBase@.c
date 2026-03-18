/*
 * XREFs of ?UpdateBoundTrackerPosition@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTrackerBase@@AEBUD2DVector3@@_N@Z @ 0x180137C78
 * Callers:
 *     ?SetRequestedBoundTrackerPosition@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTrackerBase@@AEBUD2DVector3@@@Z @ 0x180136094 (-SetRequestedBoundTrackerPosition@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTracke.c)
 *     ?SetPositionInternal@CInteractionTracker@@EEAAXAEBUD2DVector3@@W4TrackerUpdateType@CInteractionTrackerBase@@@Z @ 0x180139520 (-SetPositionInternal@CInteractionTracker@@EEAAXAEBUD2DVector3@@W4TrackerUpdateType@CInteractionT.c)
 *     ?SetPositionInternal@CInteractionTracker2@@EEAAXAEBUD2DVector3@@W4TrackerUpdateType@CInteractionTrackerBase@@@Z @ 0x1802766B0 (-SetPositionInternal@CInteractionTracker2@@EEAAXAEBUD2DVector3@@W4TrackerUpdateType@CInteraction.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x1800C44D0 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800E95D0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@PEAVCInteractionTrackerBase@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x180138364 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@PEAVCInteractionTrackerBa.c)
 *     ??$_Emplace@AEBQEAVCInteractionTrackerBase@@@?$_Tree@V?$_Tset_traits@PEAVCInteractionTrackerBase@@U?$less@PEAVCInteractionTrackerBase@@@std@@V?$allocator@PEAVCInteractionTrackerBase@@@3@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@PEAVCInteractionTrackerBase@@PEAX@std@@_N@1@AEBQEAVCInteractionTrackerBase@@@Z @ 0x1801383BC (--$_Emplace@AEBQEAVCInteractionTrackerBase@@@-$_Tree@V-$_Tset_traits@PEAVCInteractionTrackerBase.c)
 *     ??$_Emplace_back_internal@AEBQEAVCInteractionTrackerBase@@@?$deque@PEAVCInteractionTrackerBase@@V?$allocator@PEAVCInteractionTrackerBase@@@std@@@std@@AEAAXAEBQEAVCInteractionTrackerBase@@@Z @ 0x180138660 (--$_Emplace_back_internal@AEBQEAVCInteractionTrackerBase@@@-$deque@PEAVCInteractionTrackerBase@@.c)
 *     ??1?$deque@PEAVCInteractionTrackerBase@@V?$allocator@PEAVCInteractionTrackerBase@@@std@@@std@@QEAA@XZ @ 0x180138728 (--1-$deque@PEAVCInteractionTrackerBase@@V-$allocator@PEAVCInteractionTrackerBase@@@std@@@std@@QE.c)
 *     ??$_Alloc_proxy@V?$allocator@U_Container_proxy@std@@@std@@@_Container_base12@std@@QEAAX$$QEAV?$allocator@U_Container_proxy@std@@@1@@Z @ 0x180138AB8 (--$_Alloc_proxy@V-$allocator@U_Container_proxy@std@@@std@@@_Container_base12@std@@QEAAX$$QEAV-$a.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@PEAVCInteractionTrackerBase@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@PEAVCInteractionTrackerBase@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@PEAVCInteractionTrackerBase@@PEAX@std@@@1@PEAU?$_Tree_node@PEAVCInteractionTrackerBase@@PEAX@1@@Z @ 0x180138C8C (--$_Erase_tree@V-$allocator@U-$_Tree_node@PEAVCInteractionTrackerBase@@PEAX@std@@@std@@@-$_Tree_.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     ?find@?$_Hash@V?$_Umap_traits@PEAVCInteractionTrackerBase@@V?$unordered_map@PEAVCInteractionTrackerBase@@W4InteractionTrackerBindingModeFlags@@U?$hash@PEAVCInteractionTrackerBase@@@std@@U?$equal_to@PEAVCInteractionTrackerBase@@@4@V?$allocator@U?$pair@QEAVCInteractionTrackerBase@@W4InteractionTrackerBindingModeFlags@@@std@@@4@@std@@V?$_Uhash_compare@PEAVCInteractionTrackerBase@@U?$hash@PEAVCInteractionTrackerBase@@@std@@U?$equal_to@PEAVCInteractionTrackerBase@@@3@@3@V?$allocator@U?$pair@QEAVCInteractionTrackerBase@@V?$unordered_map@PEAVCInteractionTrackerBase@@W4InteractionTrackerBindingModeFlags@@U?$hash@PEAVCInteractionTrackerBase@@@std@@U?$equal_to@PEAVCInteractionTrackerBase@@@4@V?$allocator@U?$pair@QEAVCInteractionTrackerBase@@W4InteractionTrackerBindingModeFlags@@@std@@@4@@std@@@std@@@3@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCInteractionTrackerBase@@V?$unordered_map@PEAVCInteractionTrackerBase@@W4InteractionTrackerBindingModeFlags@@U?$hash@PEAVCInteractionTrackerBase@@@std@@U?$equal_to@PEAVCInteractionTrackerBase@@@4@V?$allocator@U?$pair@QEAVCInteractionTrackerBase@@W4InteractionTrackerBindingModeFlags@@@std@@@4@@std@@@std@@@std@@@std@@@2@AEBQEAVCInteractionTrackerBase@@@Z @ 0x1802798D0 (-find@-$_Hash@V-$_Umap_traits@PEAVCInteractionTrackerBase@@V-$unordered_map@PEAVCInteractionTrac.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CInteractionTrackerBindingManager::UpdateBoundTrackerPosition(
        CInteractionTrackerBindingManager *this,
        struct CInteractionTrackerBase *a2,
        const struct D2DVector3 *a3,
        char a4)
{
  __int64 v8; // rdx
  _QWORD *v9; // rax
  __int64 v10; // r9
  struct CInteractionTrackerBase **v11; // r10
  __int64 **v12; // rdi
  __int64 **i; // rbx
  struct CInteractionTrackerBase *v14; // rax
  struct CInteractionTrackerBase *v15; // rax
  struct CInteractionTrackerBase **v16; // rbx
  __int64 v17; // r9
  struct CInteractionTrackerBase **v18; // r10
  __int64 **v19; // rdi
  __int64 **j; // rbx
  struct CInteractionTrackerBase *v21; // rax
  struct CInteractionTrackerBase *v22; // rax
  struct CInteractionTrackerBase *v23; // rbx
  struct CInteractionTrackerBase *v24; // rbx
  __int64 v25; // rax
  int v26; // xmm0_4
  __int64 v27; // rax
  __int64 v28; // rax
  int v29; // xmm0_4
  __int64 v30; // rax
  struct CInteractionTrackerBase *v31; // [rsp+20h] [rbp-49h] BYREF
  struct CInteractionTrackerBase *v32; // [rsp+28h] [rbp-41h] BYREF
  struct CInteractionTrackerBase **v33; // [rsp+30h] [rbp-39h] BYREF
  __int64 v34; // [rsp+38h] [rbp-31h]
  __int128 v35; // [rsp+40h] [rbp-29h] BYREF
  __int128 v36; // [rsp+50h] [rbp-19h]
  __int64 v37; // [rsp+60h] [rbp-9h]
  _BYTE v38[16]; // [rsp+68h] [rbp-1h] BYREF
  __int64 v39; // [rsp+78h] [rbp+Fh] BYREF
  int v40; // [rsp+80h] [rbp+17h]

  if ( (*(unsigned __int8 (__fastcall **)(struct CInteractionTrackerBase *))(*(_QWORD *)a2 + 464LL))(a2) )
  {
    v34 = 0LL;
    v9 = std::_Allocate<16,std::_Default_allocate_traits>(0x28uLL, v8);
    v31 = a2;
    *v9 = v9;
    v9[1] = v9;
    v9[2] = v9;
    *((_WORD *)v9 + 12) = 257;
    v33 = (struct CInteractionTrackerBase **)v9;
    if ( *(_QWORD *)std::_Hash<std::_Umap_traits<CInteractionTrackerBase *,std::unordered_map<CInteractionTrackerBase *,enum InteractionTrackerBindingModeFlags>,std::_Uhash_compare<CInteractionTrackerBase *,std::hash<CInteractionTrackerBase *>,std::equal_to<CInteractionTrackerBase *>>,std::allocator<std::pair<CInteractionTrackerBase * const,std::unordered_map<CInteractionTrackerBase *,enum InteractionTrackerBindingModeFlags>>>,0>>::find(
                      (char *)this + 80,
                      &v39,
                      &v31) == *((_QWORD *)this + 11) )
    {
      std::_Tree<std::_Tset_traits<CInteractionTrackerBase *,std::less<CInteractionTrackerBase *>,std::allocator<CInteractionTrackerBase *>,0>>::_Emplace<CInteractionTrackerBase * const &>(
        &v33,
        &v39,
        &v31);
    }
    else
    {
      v37 = 0LL;
      v35 = 0LL;
      v36 = 0LL;
      std::_Container_base12::_Alloc_proxy<std::allocator<std::_Container_proxy>>(&v35);
      std::deque<CInteractionTrackerBase *>::_Emplace_back_internal<CInteractionTrackerBase * const &>(&v35, &v31);
      while ( 1 )
      {
        v10 = v37;
        if ( !v37 )
          break;
        v32 = *(struct CInteractionTrackerBase **)(*(_QWORD *)(*((_QWORD *)&v35 + 1)
                                                             + 8 * ((v36 - 1) & (*((_QWORD *)&v36 + 1) >> 1)))
                                                 + 8LL * (BYTE8(v36) & 1));
        --v37;
        if ( v10 == 1 )
          *((_QWORD *)&v36 + 1) = 0LL;
        else
          ++*((_QWORD *)&v36 + 1);
        std::_Hash<std::_Umap_traits<CInteractionTrackerBase *,std::unordered_map<CInteractionTrackerBase *,enum InteractionTrackerBindingModeFlags>,std::_Uhash_compare<CInteractionTrackerBase *,std::hash<CInteractionTrackerBase *>,std::equal_to<CInteractionTrackerBase *>>,std::allocator<std::pair<CInteractionTrackerBase * const,std::unordered_map<CInteractionTrackerBase *,enum InteractionTrackerBindingModeFlags>>>,0>>::find(
          (char *)this + 80,
          &v39,
          &v32);
        v11 = v33;
        v12 = *(__int64 ***)(v39 + 32);
        for ( i = (__int64 **)*v12; i != v12; i = (__int64 **)*i )
        {
          v14 = *v11;
          v31 = *v11;
          while ( v14 != (struct CInteractionTrackerBase *)v11 )
          {
            if ( *((__int64 **)v14 + 4) == i[2] )
            {
              if ( v14 != (struct CInteractionTrackerBase *)v11 )
                goto LABEL_15;
              break;
            }
            std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<CInteractionTrackerBase *>>,std::_Iterator_base0>::operator++(&v31);
            v14 = v31;
          }
          if ( ((_BYTE)i[3] & 1) != 0 )
          {
            std::deque<CInteractionTrackerBase *>::_Emplace_back_internal<CInteractionTrackerBase * const &>(
              &v35,
              i + 2);
            v11 = v33;
          }
LABEL_15:
          ;
        }
        std::_Tree<std::_Tset_traits<CInteractionTrackerBase *,std::less<CInteractionTrackerBase *>,std::allocator<CInteractionTrackerBase *>,0>>::_Emplace<CInteractionTrackerBase * const &>(
          &v33,
          v38,
          &v32);
      }
      std::deque<CInteractionTrackerBase *>::~deque<CInteractionTrackerBase *>(&v35);
    }
    v15 = *v33;
    v32 = *v33;
    while ( !*((_BYTE *)v15 + 25) )
    {
      v24 = (struct CInteractionTrackerBase *)*((_QWORD *)v15 + 4);
      if ( v24 != a2 )
      {
        if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)v24 + 464LL))(*((_QWORD *)v15 + 4)) )
          (*(void (__fastcall **)(struct CInteractionTrackerBase *, _QWORD))(*(_QWORD *)v24 + 424LL))(v24, 0LL);
        v28 = (*(__int64 (__fastcall **)(struct CInteractionTrackerBase *))(*(_QWORD *)v24 + 600LL))(v24);
        v39 = *(_QWORD *)v28;
        v29 = *(_DWORD *)a3;
        v40 = *(_DWORD *)(v28 + 8);
        v30 = *(_QWORD *)v24;
        LODWORD(v39) = v29;
        (*(void (__fastcall **)(struct CInteractionTrackerBase *, __int64 *, __int64))(v30 + 472))(v24, &v39, 1LL);
      }
      *((_BYTE *)v24 + 84) &= ~1u;
      *((_BYTE *)v24 + 84) |= a4;
      std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<CInteractionTrackerBase *>>,std::_Iterator_base0>::operator++(&v32);
      v15 = v32;
    }
    v16 = v33;
    std::_Tree_val<std::_Tree_simple_types<CInteractionTrackerBase *>>::_Erase_tree<std::allocator<std::_Tree_node<CInteractionTrackerBase *,void *>>>(
      &v33,
      &v33,
      v33[1]);
    v16[1] = (struct CInteractionTrackerBase *)v16;
    *v16 = (struct CInteractionTrackerBase *)v16;
    v16[2] = (struct CInteractionTrackerBase *)v16;
    v34 = 0LL;
    v31 = a2;
    if ( *(_QWORD *)std::_Hash<std::_Umap_traits<CInteractionTrackerBase *,std::unordered_map<CInteractionTrackerBase *,enum InteractionTrackerBindingModeFlags>,std::_Uhash_compare<CInteractionTrackerBase *,std::hash<CInteractionTrackerBase *>,std::equal_to<CInteractionTrackerBase *>>,std::allocator<std::pair<CInteractionTrackerBase * const,std::unordered_map<CInteractionTrackerBase *,enum InteractionTrackerBindingModeFlags>>>,0>>::find(
                      (char *)this + 80,
                      &v39,
                      &v31) == *((_QWORD *)this + 11) )
    {
      std::_Tree<std::_Tset_traits<CInteractionTrackerBase *,std::less<CInteractionTrackerBase *>,std::allocator<CInteractionTrackerBase *>,0>>::_Emplace<CInteractionTrackerBase * const &>(
        &v33,
        v38,
        &v31);
    }
    else
    {
      v37 = 0LL;
      v35 = 0LL;
      v36 = 0LL;
      std::_Container_base12::_Alloc_proxy<std::allocator<std::_Container_proxy>>(&v35);
      std::deque<CInteractionTrackerBase *>::_Emplace_back_internal<CInteractionTrackerBase * const &>(&v35, &v31);
      while ( 1 )
      {
        v17 = v37;
        if ( !v37 )
          break;
        v31 = *(struct CInteractionTrackerBase **)(*(_QWORD *)(*((_QWORD *)&v35 + 1)
                                                             + 8 * ((v36 - 1) & (*((_QWORD *)&v36 + 1) >> 1)))
                                                 + 8LL * (BYTE8(v36) & 1));
        --v37;
        if ( v17 == 1 )
          *((_QWORD *)&v36 + 1) = 0LL;
        else
          ++*((_QWORD *)&v36 + 1);
        std::_Hash<std::_Umap_traits<CInteractionTrackerBase *,std::unordered_map<CInteractionTrackerBase *,enum InteractionTrackerBindingModeFlags>,std::_Uhash_compare<CInteractionTrackerBase *,std::hash<CInteractionTrackerBase *>,std::equal_to<CInteractionTrackerBase *>>,std::allocator<std::pair<CInteractionTrackerBase * const,std::unordered_map<CInteractionTrackerBase *,enum InteractionTrackerBindingModeFlags>>>,0>>::find(
          (char *)this + 80,
          &v39,
          &v31);
        v18 = v33;
        v19 = *(__int64 ***)(v39 + 32);
        for ( j = (__int64 **)*v19; j != v19; j = (__int64 **)*j )
        {
          v21 = *v18;
          v32 = *v18;
          while ( v21 != (struct CInteractionTrackerBase *)v18 )
          {
            if ( *((__int64 **)v21 + 4) == j[2] )
            {
              if ( v21 != (struct CInteractionTrackerBase *)v18 )
                goto LABEL_34;
              break;
            }
            std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<CInteractionTrackerBase *>>,std::_Iterator_base0>::operator++(&v32);
            v21 = v32;
          }
          if ( ((_BYTE)j[3] & 2) != 0 )
          {
            std::deque<CInteractionTrackerBase *>::_Emplace_back_internal<CInteractionTrackerBase * const &>(
              &v35,
              j + 2);
            v18 = v33;
          }
LABEL_34:
          ;
        }
        std::_Tree<std::_Tset_traits<CInteractionTrackerBase *,std::less<CInteractionTrackerBase *>,std::allocator<CInteractionTrackerBase *>,0>>::_Emplace<CInteractionTrackerBase * const &>(
          &v33,
          v38,
          &v31);
      }
      std::deque<CInteractionTrackerBase *>::~deque<CInteractionTrackerBase *>(&v35);
    }
    v22 = *v33;
    v32 = *v33;
    while ( !*((_BYTE *)v22 + 25) )
    {
      v23 = (struct CInteractionTrackerBase *)*((_QWORD *)v22 + 4);
      if ( v23 != a2 )
      {
        if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)v23 + 464LL))(*((_QWORD *)v22 + 4)) )
          (*(void (__fastcall **)(struct CInteractionTrackerBase *, _QWORD))(*(_QWORD *)v23 + 424LL))(v23, 0LL);
        v25 = (*(__int64 (__fastcall **)(struct CInteractionTrackerBase *))(*(_QWORD *)v23 + 600LL))(v23);
        v39 = *(_QWORD *)v25;
        v26 = *((_DWORD *)a3 + 1);
        v40 = *(_DWORD *)(v25 + 8);
        v27 = *(_QWORD *)v23;
        HIDWORD(v39) = v26;
        (*(void (__fastcall **)(struct CInteractionTrackerBase *, __int64 *, __int64))(v27 + 472))(v23, &v39, 1LL);
      }
      *((_BYTE *)v23 + 84) &= ~1u;
      *((_BYTE *)v23 + 84) |= a4;
      std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<CInteractionTrackerBase *>>,std::_Iterator_base0>::operator++(&v32);
      v22 = v32;
    }
    std::_Tree_val<std::_Tree_simple_types<CInteractionTrackerBase *>>::_Erase_tree<std::allocator<std::_Tree_node<CInteractionTrackerBase *,void *>>>(
      &v33,
      &v33,
      v33[1]);
    std::_Deallocate<16>(v33, 0x28uLL);
  }
}
