/*
 * XREFs of ??$_Emplace_back_internal@UPointerFrame@PointerInputMediator@@@?$deque@UPointerFrame@PointerInputMediator@@V?$allocator@UPointerFrame@PointerInputMediator@@@std@@@std@@AEAAX$$QEAUPointerFrame@PointerInputMediator@@@Z @ 0x180059B9C
 * Callers:
 *     ??$emplace_back@UPointerFrame@PointerInputMediator@@@?$deque@UPointerFrame@PointerInputMediator@@V?$allocator@UPointerFrame@PointerInputMediator@@@std@@@std@@QEAAAEAUPointerFrame@PointerInputMediator@@$$QEAU23@@Z @ 0x18008B2EC (--$emplace_back@UPointerFrame@PointerInputMediator@@@-$deque@UPointerFrame@PointerInputMediator@.c)
 * Callees:
 *     ??0?$_Hash@V?$_Umap_traits@IUContactData@PointerInputMediator@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUContactData@PointerInputMediator@@@std@@@4@$0A@@std@@@std@@IEAA@$$QEAV01@@Z @ 0x180059D60 (--0-$_Hash@V-$_Umap_traits@IUContactData@PointerInputMediator@@V-$_Uhash_compare@IU-$hash@I@std@.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800880DC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?_Subscript@?$_Deque_val@U?$_Deque_simple_types@UPointerFrame@PointerInputMediator@@@std@@@std@@QEBAAEBUPointerFrame@PointerInputMediator@@_K@Z @ 0x18008B294 (-_Subscript@-$_Deque_val@U-$_Deque_simple_types@UPointerFrame@PointerInputMediator@@@std@@@std@@.c)
 *     ?_Getblock@?$deque@UPointerFrame@PointerInputMediator@@V?$allocator@UPointerFrame@PointerInputMediator@@@std@@@std@@AEBA_J_K@Z @ 0x1800C7554 (-_Getblock@-$deque@UPointerFrame@PointerInputMediator@@V-$allocator@UPointerFrame@PointerInputMe.c)
 *     ?_Growmap@?$deque@UPointerFrame@PointerInputMediator@@V?$allocator@UPointerFrame@PointerInputMediator@@@std@@@std@@AEAAX_K@Z @ 0x1800F4CA0 (-_Growmap@-$deque@UPointerFrame@PointerInputMediator@@V-$allocator@UPointerFrame@PointerInputMed.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall std::deque<PointerInputMediator::PointerFrame>::_Emplace_back_internal<PointerInputMediator::PointerFrame>(
        _QWORD *a1,
        __int64 a2)
{
  __int64 v4; // rbp
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 result; // rax
  __int64 v13; // [rsp+30h] [rbp+8h]

  if ( a1[2] <= (unsigned __int64)(a1[4] + 1LL) )
    std::deque<PointerInputMediator::PointerFrame>::_Growmap();
  a1[3] &= a1[2] - 1LL;
  v4 = a1[3] + a1[4];
  v5 = std::deque<PointerInputMediator::PointerFrame>::_Getblock(a1, v4);
  if ( !*(_QWORD *)(a1[1] + 8 * v5) )
    *(_QWORD *)(a1[1] + 8 * v5) = std::_Allocate<16,std::_Default_allocate_traits>(272LL);
  v13 = std::_Deque_val<std::_Deque_simple_types<PointerInputMediator::PointerFrame>>::_Subscript(a1, v4);
  *(_DWORD *)v13 = *(_DWORD *)a2;
  *(_DWORD *)(v13 + 4) = *(_DWORD *)(a2 + 4);
  *(_OWORD *)(v13 + 8) = *(_OWORD *)(a2 + 8);
  *(_OWORD *)(v13 + 24) = *(_OWORD *)(a2 + 24);
  *(_OWORD *)(v13 + 40) = *(_OWORD *)(a2 + 40);
  *(_OWORD *)(v13 + 56) = *(_OWORD *)(a2 + 56);
  *(_OWORD *)(v13 + 72) = *(_OWORD *)(a2 + 72);
  *(_OWORD *)(v13 + 88) = *(_OWORD *)(a2 + 88);
  *(_OWORD *)(v13 + 104) = *(_OWORD *)(a2 + 104);
  *(_OWORD *)(v13 + 120) = *(_OWORD *)(a2 + 120);
  *(_OWORD *)(v13 + 136) = *(_OWORD *)(a2 + 136);
  *(_QWORD *)(v13 + 152) = *(_QWORD *)(a2 + 152);
  v6 = *(_QWORD *)(a2 + 176);
  *(_QWORD *)(a2 + 176) = 0LL;
  v7 = *(_QWORD *)(a2 + 168);
  *(_QWORD *)(a2 + 168) = 0LL;
  v8 = *(_QWORD *)(a2 + 160);
  *(_QWORD *)(a2 + 160) = 0LL;
  *(_QWORD *)(v13 + 160) = v8;
  *(_QWORD *)(v13 + 168) = v7;
  *(_QWORD *)(v13 + 176) = v6;
  v9 = *(_QWORD *)(a2 + 200);
  *(_QWORD *)(a2 + 200) = 0LL;
  v10 = *(_QWORD *)(a2 + 192);
  *(_QWORD *)(a2 + 192) = 0LL;
  v11 = *(_QWORD *)(a2 + 184);
  *(_QWORD *)(a2 + 184) = 0LL;
  *(_QWORD *)(v13 + 184) = v11;
  *(_QWORD *)(v13 + 192) = v10;
  *(_QWORD *)(v13 + 200) = v9;
  result = std::_Hash<std::_Umap_traits<unsigned int,PointerInputMediator::ContactData,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,PointerInputMediator::ContactData>>,0>>::_Hash<std::_Umap_traits<unsigned int,PointerInputMediator::ContactData,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,PointerInputMediator::ContactData>>,0>>(
             v13 + 208,
             a2 + 208);
  ++a1[4];
  return result;
}
