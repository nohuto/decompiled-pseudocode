/*
 * XREFs of ?BringBoundTrackersStateInSync@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTrackerBase@@0W4InteractionTrackerBindingModeFlags@@@Z @ 0x1802155F4
 * Callers:
 *     ?ProcessSetTrackerBindingMode@CInteractionTrackerBindingManager@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTIONTRACKERBINDINGMANAGER_SETTRACKERBINDINGMODE@@@Z @ 0x18014B7D0 (-ProcessSetTrackerBindingMode@CInteractionTrackerBindingManager@@QEAAJPEAVCResourceTable@@PEBUta.c)
 *     ?ProcessSetTrackerBindingMode@CInteractionTrackerBindingManager@@QEAAJPEAVCInteractionTracker2@@0W4InteractionTrackerBindingModeFlags@@@Z @ 0x1802787D8 (-ProcessSetTrackerBindingMode@CInteractionTrackerBindingManager@@QEAAJPEAVCInteractionTracker2@@.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800E95D0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?GetConnectedTrackersForAxis@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTrackerBase@@W4InteractionTrackerBindingModeFlags@@PEAV?$set@PEAVCInteractionTrackerBase@@U?$less@PEAVCInteractionTrackerBase@@@std@@V?$allocator@PEAVCInteractionTrackerBase@@@3@@std@@PEAPEAV2@@Z @ 0x180138160 (-GetConnectedTrackersForAxis@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTrackerBase.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@PEAVCInteractionTrackerBase@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x180138364 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@PEAVCInteractionTrackerBa.c)
 *     ??1?$_Tree@V?$_Tset_traits@PEAVCInteractionTrackerBase@@U?$less@PEAVCInteractionTrackerBase@@@std@@V?$allocator@PEAVCInteractionTrackerBase@@@3@$0A@@std@@@std@@QEAA@XZ @ 0x180138C5C (--1-$_Tree@V-$_Tset_traits@PEAVCInteractionTrackerBase@@U-$less@PEAVCInteractionTrackerBase@@@st.c)
 *     ??$_Get_size_of_n@$0CI@@std@@YA_K_K@Z @ 0x1801B18E0 (--$_Get_size_of_n@$0CI@@std@@YA_K_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CInteractionTrackerBindingManager::BringBoundTrackersStateInSync(
        __int64 a1,
        _DWORD *a2,
        __int64 a3,
        int a4)
{
  _DWORD *v4; // rbx
  SIZE_T size_of; // rax
  __int64 v9; // rdx
  _QWORD *v10; // rax
  SIZE_T v11; // rax
  __int64 v12; // rdx
  _QWORD *v13; // rax
  __int64 v14; // rdx
  __int64 *v15; // r14
  _DWORD *v16; // r15
  __int64 v17; // rdx
  _DWORD *v18; // r12
  __int64 *v19; // rax
  __int64 v20; // rsi
  __int64 v21; // rbx
  __int64 v22; // r8
  __int64 v23; // rbx
  __int64 v24; // r8
  __int64 v25; // rbx
  __int64 v26; // r8
  __int64 v27; // rbx
  __int64 v28; // r8
  __int64 v29; // rbx
  __int64 v30; // r8
  __int64 v31; // rbx
  __int64 v32; // r8
  __int64 *v33; // [rsp+30h] [rbp-30h] BYREF
  __int64 *v34; // [rsp+38h] [rbp-28h] BYREF
  void *v35[2]; // [rsp+40h] [rbp-20h] BYREF
  void *v36; // [rsp+50h] [rbp-10h] BYREF
  __int64 v37; // [rsp+58h] [rbp-8h]

  if ( a4 )
  {
    v4 = (_DWORD *)(a3 + 88);
    if ( a2[22] || *v4 )
    {
      v34 = 0LL;
      v33 = 0LL;
      v37 = 0LL;
      size_of = std::_Get_size_of_n<40>(1uLL);
      v10 = std::_Allocate<16,std::_Default_allocate_traits>(size_of, v9);
      *v10 = v10;
      v10[1] = v10;
      v10[2] = v10;
      *((_WORD *)v10 + 12) = 257;
      v36 = v10;
      v35[1] = 0LL;
      v11 = std::_Get_size_of_n<40>(1uLL);
      v13 = std::_Allocate<16,std::_Default_allocate_traits>(v11, v12);
      *v13 = v13;
      v13[1] = v13;
      v13[2] = v13;
      *((_WORD *)v13 + 12) = 257;
      v35[0] = v13;
      CInteractionTrackerBindingManager::GetConnectedTrackersForAxis(
        a1,
        (__int64)a2,
        7u,
        (_QWORD **)&v36,
        (__int64 *)&v34);
      CInteractionTrackerBindingManager::GetConnectedTrackersForAxis(a1, a3, 7u, (_QWORD **)v35, (__int64 *)&v33);
      v15 = v33;
      if ( v34 != v33 )
      {
        v16 = v4;
        if ( a2[22] && v37 == 1 )
        {
          (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)a2 + 416LL))(a2);
          v16 = (_DWORD *)(a3 + 88);
        }
        LOBYTE(v14) = 1;
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a3 + 432LL))(a3, v14);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)a3 + 440LL))(a3);
        v18 = v4;
        if ( v15 )
        {
          LOBYTE(v17) = 1;
          (*(void (__fastcall **)(__int64 *, __int64))(*v15 + 424))(v15, v17);
          v18 = v16;
        }
        if ( a2[22] != *v4 )
        {
          v19 = *(__int64 **)v35[0];
          v34 = *(__int64 **)v35[0];
          while ( !*((_BYTE *)v19 + 25) )
          {
            v20 = v19[4];
            if ( !a2[22] && *v18 == 1 )
            {
              (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v20 + 448LL))(v19[4], 2LL, 1LL);
              v21 = *(_QWORD *)v20;
              (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v20 + 232LL))(v20, 0LL);
              (*(void (__fastcall **)(__int64, _QWORD, __int64, __int64))(v21 + 456))(v20, 0LL, v22, 1LL);
              v23 = *(_QWORD *)v20;
              (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v20 + 232LL))(v20, 1LL);
              (*(void (__fastcall **)(__int64, __int64, __int64, __int64))(v23 + 456))(v20, 1LL, v24, 1LL);
              v25 = *(_QWORD *)v20;
              (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v20 + 232LL))(v20, 2LL);
              (*(void (__fastcall **)(__int64, __int64, __int64, __int64))(v25 + 456))(v20, 2LL, v26, 1LL);
              *(_BYTE *)(*(_QWORD *)(v20 + 96) + 24LL * (unsigned int)(*(_DWORD *)(v20 + 120) - 1) + 20) = 1;
            }
            (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v20 + 448LL))(v20, (unsigned int)a2[22], 1LL);
            if ( a2[22] == 2 )
            {
              v27 = *(_QWORD *)v20;
              (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v20 + 232LL))(v20, 0LL);
              (*(void (__fastcall **)(__int64, _QWORD, __int64, __int64))(v27 + 456))(v20, 0LL, v28, 1LL);
              v29 = *(_QWORD *)v20;
              (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v20 + 232LL))(v20, 1LL);
              (*(void (__fastcall **)(__int64, __int64, __int64, __int64))(v29 + 456))(v20, 1LL, v30, 1LL);
              v31 = *(_QWORD *)v20;
              (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v20 + 232LL))(v20, 2LL);
              (*(void (__fastcall **)(__int64, __int64, __int64, __int64))(v31 + 456))(v20, 2LL, v32, 1LL);
            }
            *(_BYTE *)(*(_QWORD *)(v20 + 96) + 24LL * (unsigned int)(*(_DWORD *)(v20 + 120) - 1) + 20) = 1;
            std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<CInteractionTrackerBase *>>,std::_Iterator_base0>::operator++(&v34);
            v19 = v34;
          }
        }
      }
      std::_Tree<std::_Tset_traits<CInteractionTrackerBase *,std::less<CInteractionTrackerBase *>,std::allocator<CInteractionTrackerBase *>,0>>::~_Tree<std::_Tset_traits<CInteractionTrackerBase *,std::less<CInteractionTrackerBase *>,std::allocator<CInteractionTrackerBase *>,0>>(v35);
      std::_Tree<std::_Tset_traits<CInteractionTrackerBase *,std::less<CInteractionTrackerBase *>,std::allocator<CInteractionTrackerBase *>,0>>::~_Tree<std::_Tset_traits<CInteractionTrackerBase *,std::less<CInteractionTrackerBase *>,std::allocator<CInteractionTrackerBase *>,0>>(&v36);
    }
  }
}
