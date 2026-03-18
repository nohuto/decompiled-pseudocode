/*
 * XREFs of ?TransitionDisconnectedTrackersToIdle@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTrackerBase@@0@Z @ 0x180278E94
 * Callers:
 *     ?AddOrUpdateTrackerBindings@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTrackerBase@@0W4InteractionTrackerBindingModeFlags@@@Z @ 0x180137394 (-AddOrUpdateTrackerBindings@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTrackerBase@.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800E95D0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?GetConnectedTrackersForAxis@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTrackerBase@@W4InteractionTrackerBindingModeFlags@@PEAV?$set@PEAVCInteractionTrackerBase@@U?$less@PEAVCInteractionTrackerBase@@@std@@V?$allocator@PEAVCInteractionTrackerBase@@@3@@std@@PEAPEAV2@@Z @ 0x180138160 (-GetConnectedTrackersForAxis@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTrackerBase.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@PEAVCInteractionTrackerBase@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x180138364 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@PEAVCInteractionTrackerBa.c)
 *     ??1?$_Tree@V?$_Tset_traits@PEAVCInteractionTrackerBase@@U?$less@PEAVCInteractionTrackerBase@@@std@@V?$allocator@PEAVCInteractionTrackerBase@@@3@$0A@@std@@@std@@QEAA@XZ @ 0x180138C5C (--1-$_Tree@V-$_Tset_traits@PEAVCInteractionTrackerBase@@U-$less@PEAVCInteractionTrackerBase@@@st.c)
 *     ??$_Get_size_of_n@$0CI@@std@@YA_K_K@Z @ 0x1801B18E0 (--$_Get_size_of_n@$0CI@@std@@YA_K_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CInteractionTrackerBindingManager::TransitionDisconnectedTrackersToIdle(
        CInteractionTrackerBindingManager *this,
        struct CInteractionTrackerBase *a2,
        struct CInteractionTrackerBase *a3)
{
  SIZE_T size_of; // rax
  __int64 v7; // rdx
  _QWORD *v8; // rax
  SIZE_T v9; // rax
  __int64 v10; // rdx
  _QWORD *v11; // rax
  __int64 **v12; // rax
  __int64 *v13; // rax
  _DWORD *v14; // rdi
  __int64 v15; // rbx
  __int64 v16; // r8
  __int64 v17; // rbx
  __int64 v18; // r8
  __int64 v19; // rbx
  __int64 v20; // r8
  __int64 *v21; // [rsp+30h] [rbp-30h] BYREF
  void *v22[2]; // [rsp+38h] [rbp-28h] BYREF
  void *v23[3]; // [rsp+48h] [rbp-18h] BYREF
  __int64 *v24; // [rsp+98h] [rbp+38h] BYREF

  v23[1] = 0LL;
  size_of = std::_Get_size_of_n<40>(1uLL);
  v8 = std::_Allocate<16,std::_Default_allocate_traits>(size_of, v7);
  *v8 = v8;
  v8[1] = v8;
  v8[2] = v8;
  *((_WORD *)v8 + 12) = 257;
  v23[0] = v8;
  v22[1] = 0LL;
  v9 = std::_Get_size_of_n<40>(1uLL);
  v11 = std::_Allocate<16,std::_Default_allocate_traits>(v9, v10);
  v24 = 0LL;
  v21 = 0LL;
  *v11 = v11;
  v11[1] = v11;
  v11[2] = v11;
  *((_WORD *)v11 + 12) = 257;
  v22[0] = v11;
  CInteractionTrackerBindingManager::GetConnectedTrackersForAxis(
    (__int64)this,
    (__int64)a2,
    7u,
    (_QWORD **)v23,
    (__int64 *)&v24);
  CInteractionTrackerBindingManager::GetConnectedTrackersForAxis(
    (__int64)this,
    (__int64)a3,
    7u,
    (_QWORD **)v22,
    (__int64 *)&v21);
  if ( v24 )
  {
    if ( v21 && v24 == v21 )
      goto LABEL_11;
    v12 = (__int64 **)v22[0];
  }
  else
  {
    v12 = (__int64 **)v23[0];
  }
  v13 = *v12;
  v24 = v13;
  while ( !*((_BYTE *)v13 + 25) )
  {
    v14 = (_DWORD *)v13[4];
    if ( v14[22] == 1 )
    {
      (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v14 + 448LL))(v13[4], 2LL, 1LL);
      v15 = *(_QWORD *)v14;
      (*(void (__fastcall **)(_DWORD *, _QWORD))(*(_QWORD *)v14 + 232LL))(v14, 0LL);
      (*(void (__fastcall **)(_DWORD *, _QWORD, __int64, __int64))(v15 + 456))(v14, 0LL, v16, 1LL);
      v17 = *(_QWORD *)v14;
      (*(void (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)v14 + 232LL))(v14, 1LL);
      (*(void (__fastcall **)(_DWORD *, __int64, __int64, __int64))(v17 + 456))(v14, 1LL, v18, 1LL);
      v19 = *(_QWORD *)v14;
      (*(void (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)v14 + 232LL))(v14, 2LL);
      (*(void (__fastcall **)(_DWORD *, __int64, __int64, __int64))(v19 + 456))(v14, 2LL, v20, 1LL);
    }
    (*(void (__fastcall **)(_DWORD *, _QWORD, __int64))(*(_QWORD *)v14 + 448LL))(v14, 0LL, 1LL);
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<CInteractionTrackerBase *>>,std::_Iterator_base0>::operator++(&v24);
    v13 = v24;
  }
LABEL_11:
  std::_Tree<std::_Tset_traits<CInteractionTrackerBase *,std::less<CInteractionTrackerBase *>,std::allocator<CInteractionTrackerBase *>,0>>::~_Tree<std::_Tset_traits<CInteractionTrackerBase *,std::less<CInteractionTrackerBase *>,std::allocator<CInteractionTrackerBase *>,0>>(v22);
  std::_Tree<std::_Tset_traits<CInteractionTrackerBase *,std::less<CInteractionTrackerBase *>,std::allocator<CInteractionTrackerBase *>,0>>::~_Tree<std::_Tset_traits<CInteractionTrackerBase *,std::less<CInteractionTrackerBase *>,std::allocator<CInteractionTrackerBase *>,0>>(v23);
}
