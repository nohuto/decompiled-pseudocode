/*
 * XREFs of ?BoundTrackersHaveActiveCustomAnimations@CInteractionTrackerBindingManager@@QEAA_NPEAVCInteractionTrackerBase@@@Z @ 0x1802785CC
 * Callers:
 *     ?CheckForIdle@CInteractionTracker@@AEAAXXZ @ 0x18013C68C (-CheckForIdle@CInteractionTracker@@AEAAXXZ.c)
 *     ?CheckForIdle@CInteractionTracker2@@AEAAXXZ @ 0x180272600 (-CheckForIdle@CInteractionTracker2@@AEAAXXZ.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800E95D0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?GetConnectedTrackersForAxis@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTrackerBase@@W4InteractionTrackerBindingModeFlags@@PEAV?$set@PEAVCInteractionTrackerBase@@U?$less@PEAVCInteractionTrackerBase@@@std@@V?$allocator@PEAVCInteractionTrackerBase@@@3@@std@@PEAPEAV2@@Z @ 0x180138160 (-GetConnectedTrackersForAxis@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTrackerBase.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@PEAVCInteractionTrackerBase@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x180138364 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@PEAVCInteractionTrackerBa.c)
 *     ??1?$_Tree@V?$_Tset_traits@PEAVCInteractionTrackerBase@@U?$less@PEAVCInteractionTrackerBase@@@std@@V?$allocator@PEAVCInteractionTrackerBase@@@3@$0A@@std@@@std@@QEAA@XZ @ 0x180138C5C (--1-$_Tree@V-$_Tset_traits@PEAVCInteractionTrackerBase@@U-$less@PEAVCInteractionTrackerBase@@@st.c)
 *     ??$_Get_size_of_n@$0CI@@std@@YA_K_K@Z @ 0x1801B18E0 (--$_Get_size_of_n@$0CI@@std@@YA_K_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CInteractionTrackerBindingManager::BoundTrackersHaveActiveCustomAnimations(
        CInteractionTrackerBindingManager *this,
        struct CInteractionTrackerBase *a2)
{
  char v2; // si
  SIZE_T size_of; // rax
  __int64 v6; // rdx
  _QWORD *v7; // rax
  __int64 *v8; // rax
  void *v10[3]; // [rsp+30h] [rbp-18h] BYREF
  __int64 *v11; // [rsp+60h] [rbp+18h] BYREF

  v2 = 0;
  v10[1] = 0LL;
  size_of = std::_Get_size_of_n<40>(1uLL);
  v7 = std::_Allocate<16,std::_Default_allocate_traits>(size_of, v6);
  *v7 = v7;
  v7[1] = v7;
  v7[2] = v7;
  *((_WORD *)v7 + 12) = 257;
  v10[0] = v7;
  CInteractionTrackerBindingManager::GetConnectedTrackersForAxis((__int64)this, (__int64)a2, 7u, (_QWORD **)v10, 0LL);
  v8 = *(__int64 **)v10[0];
  v11 = *(__int64 **)v10[0];
  while ( !*((_BYTE *)v8 + 25) )
  {
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v8[4] + 504LL))(v8[4]) )
    {
      v2 = 1;
      break;
    }
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<CInteractionTrackerBase *>>,std::_Iterator_base0>::operator++(&v11);
    v8 = v11;
  }
  std::_Tree<std::_Tset_traits<CInteractionTrackerBase *,std::less<CInteractionTrackerBase *>,std::allocator<CInteractionTrackerBase *>,0>>::~_Tree<std::_Tset_traits<CInteractionTrackerBase *,std::less<CInteractionTrackerBase *>,std::allocator<CInteractionTrackerBase *>,0>>(v10);
  return v2;
}
