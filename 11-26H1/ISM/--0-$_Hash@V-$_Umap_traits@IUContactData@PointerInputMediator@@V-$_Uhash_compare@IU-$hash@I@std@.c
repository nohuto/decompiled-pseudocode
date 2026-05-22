/*
 * XREFs of ??0?$_Hash@V?$_Umap_traits@IUContactData@PointerInputMediator@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUContactData@PointerInputMediator@@@std@@@4@$0A@@std@@@std@@IEAA@$$QEAV01@@Z @ 0x180059D60
 * Callers:
 *     ??$_Emplace_back_internal@UPointerFrame@PointerInputMediator@@@?$deque@UPointerFrame@PointerInputMediator@@V?$allocator@UPointerFrame@PointerInputMediator@@@std@@@std@@AEAAX$$QEAUPointerFrame@PointerInputMediator@@@Z @ 0x180059B9C (--$_Emplace_back_internal@UPointerFrame@PointerInputMediator@@@-$deque@UPointerFrame@PointerInpu.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800880DC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x18008A790 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ??$?0U_Move_allocator_tag@std@@V?$allocator@U?$_List_node@U?$pair@$$CBIUContactData@PointerInputMediator@@@std@@PEAX@std@@@1@$0A@@?$list@U?$pair@$$CBIUContactData@PointerInputMediator@@@std@@V?$allocator@U?$pair@$$CBIUContactData@PointerInputMediator@@@std@@@2@@std@@AEAA@U_Move_allocator_tag@1@AEAV?$allocator@U?$_List_node@U?$pair@$$CBIUContactData@PointerInputMediator@@@std@@PEAX@std@@@1@@Z @ 0x1800F49A8 (--$-0U_Move_allocator_tag@std@@V-$allocator@U-$_List_node@U-$pair@$$CBIUContactData@PointerInput.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall std::_Hash<std::_Umap_traits<unsigned int,PointerInputMediator::ContactData,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,PointerInputMediator::ContactData>>,0>>::_Hash<std::_Umap_traits<unsigned int,PointerInputMediator::ContactData,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,PointerInputMediator::ContactData>>,0>>(
        __int64 a1,
        __int64 a2)
{
  __int64 *v4; // r15
  __int64 v5; // rbx
  _QWORD *v6; // rdi
  __int64 v7; // rcx
  __int64 v8; // rdx
  _QWORD *v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rax

  *(_DWORD *)a1 = *(_DWORD *)a2;
  v4 = (__int64 *)(a1 + 8);
  std::list<std::pair<unsigned int const,PointerInputMediator::ContactData>>::list<std::pair<unsigned int const,PointerInputMediator::ContactData>>(a1 + 8);
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  v5 = *v4;
  v6 = (_QWORD *)std::_Allocate<16,std::_Default_allocate_traits>(128LL);
  v7 = *(_QWORD *)(a1 + 24);
  v8 = (*(_QWORD *)(a1 + 40) - v7) >> 3;
  if ( v8 )
    std::_Deallocate<16>(v7, 8 * v8);
  *(_QWORD *)(a1 + 24) = v6;
  v9 = v6 + 16;
  *(_QWORD *)(a1 + 32) = v6 + 16;
  *(_QWORD *)(a1 + 40) = v6 + 16;
  while ( v6 != v9 )
    *v6++ = v5;
  v10 = *v4;
  *v4 = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(a2 + 8) = v10;
  v11 = v4[1];
  v4[1] = *(_QWORD *)(a2 + 16);
  *(_QWORD *)(a2 + 16) = v11;
  v12 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)(a1 + 24) = *(_QWORD *)(a2 + 24);
  *(_QWORD *)(a2 + 24) = v12;
  v13 = *(_QWORD *)(a1 + 32);
  *(_QWORD *)(a1 + 32) = *(_QWORD *)(a2 + 32);
  *(_QWORD *)(a2 + 32) = v13;
  v14 = *(_QWORD *)(a1 + 40);
  *(_QWORD *)(a1 + 40) = *(_QWORD *)(a2 + 40);
  *(_QWORD *)(a2 + 40) = v14;
  v15 = *(_QWORD *)(a2 + 48);
  *(_QWORD *)(a2 + 48) = 7LL;
  *(_QWORD *)(a1 + 48) = v15;
  v16 = *(_QWORD *)(a2 + 56);
  *(_QWORD *)(a2 + 56) = 8LL;
  *(_QWORD *)(a1 + 56) = v16;
  return a1;
}
