/*
 * XREFs of ??$emplace@AEAPEAVCBaseExpression@@@?$_Hash@V?$_Uset_traits@PEAVCBaseExpression@@V?$_Uhash_compare@PEAVCBaseExpression@@U?$hash@PEAVCBaseExpression@@@std@@U?$equal_to@PEAVCBaseExpression@@@3@@std@@V?$allocator@PEAVCBaseExpression@@@3@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@PEAVCBaseExpression@@@std@@@std@@@std@@_N@1@AEAPEAVCBaseExpression@@@Z @ 0x18010E66C
 * Callers:
 *     ?TryRegisterWithExpressionManager@CBaseExpression@@IEAAJXZ @ 0x18010E25C (-TryRegisterWithExpressionManager@CBaseExpression@@IEAAJXZ.c)
 *     ?SuspendAnimations@CExpressionManager@@QEAAXI_N0@Z @ 0x18016D708 (-SuspendAnimations@CExpressionManager@@QEAAXI_N0@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800E95D0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?_Check_rehash_required_1@?$_Hash@V?$_Umap_traits@PEAVCInteractionTrackerBase@@W4InteractionTrackerBindingModeFlags@@V?$_Uhash_compare@PEAVCInteractionTrackerBase@@U?$hash@PEAVCInteractionTrackerBase@@@std@@U?$equal_to@PEAVCInteractionTrackerBase@@@3@@std@@V?$allocator@U?$pair@QEAVCInteractionTrackerBase@@W4InteractionTrackerBindingModeFlags@@@std@@@4@$0A@@std@@@std@@IEBA_NXZ @ 0x1801363E4 (-_Check_rehash_required_1@-$_Hash@V-$_Umap_traits@PEAVCInteractionTrackerBase@@W4InteractionTrac.c)
 *     ??$_Find_last@PEAVCBaseExpression@@@?$_Hash@V?$_Uset_traits@PEAVCBaseExpression@@V?$_Uhash_compare@PEAVCBaseExpression@@U?$hash@PEAVCBaseExpression@@@std@@U?$equal_to@PEAVCBaseExpression@@@3@@std@@V?$allocator@PEAVCBaseExpression@@@3@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@PEAVCBaseExpression@@PEAX@std@@@1@AEBQEAVCBaseExpression@@_K@Z @ 0x180177B10 (--$_Find_last@PEAVCBaseExpression@@@-$_Hash@V-$_Uset_traits@PEAVCBaseExpression@@V-$_Uhash_compa.c)
 *     ?_Check_max_size@?$_Hash@V?$_Uset_traits@PEAVCBaseExpression@@V?$_Uhash_compare@PEAVCBaseExpression@@U?$hash@PEAVCBaseExpression@@@std@@U?$equal_to@PEAVCBaseExpression@@@3@@std@@V?$allocator@PEAVCBaseExpression@@@3@$0A@@std@@@std@@IEBAXXZ @ 0x1801A10C4 (-_Check_max_size@-$_Hash@V-$_Uset_traits@PEAVCBaseExpression@@V-$_Uhash_compare@PEAVCBaseExpress.c)
 *     ?_Rehash_for_1@?$_Hash@V?$_Uset_traits@PEAVCBaseExpression@@V?$_Uhash_compare@PEAVCBaseExpression@@U?$hash@PEAVCBaseExpression@@@std@@U?$equal_to@PEAVCBaseExpression@@@3@@std@@V?$allocator@PEAVCBaseExpression@@@3@$0A@@std@@@std@@IEAAXXZ @ 0x1801A10F8 (-_Rehash_for_1@-$_Hash@V-$_Uset_traits@PEAVCBaseExpression@@V-$_Uhash_compare@PEAVCBaseExpressio.c)
 *     ??R?$_Conditionally_enabled_hash@PEAVCBaseExpression@@$00@std@@SA_KAEBQEAVCBaseExpression@@@Z @ 0x180211A54 (--R-$_Conditionally_enabled_hash@PEAVCBaseExpression@@$00@std@@SA_KAEBQEAVCBaseExpression@@@Z.c)
 */

__int64 __fastcall std::_Hash<std::_Uset_traits<CBaseExpression *,std::_Uhash_compare<CBaseExpression *,std::hash<CBaseExpression *>,std::equal_to<CBaseExpression *>>,std::allocator<CBaseExpression *>,0>>::emplace<CBaseExpression * &>(
        _QWORD *a1,
        __int64 a2,
        unsigned __int8 *a3)
{
  __int64 v6; // rax
  __int64 v7; // rbp
  __int64 v8; // rdx
  __int64 v9; // r12
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rdx
  _QWORD *v15; // rbx
  _QWORD *v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // r8
  _BYTE v21[40]; // [rsp+20h] [rbp-28h] BYREF

  v6 = std::_Conditionally_enabled_hash<CBaseExpression *,1>::operator()(a3);
  v7 = a1[1];
  v8 = a1[6] & v6;
  v9 = v6;
  v10 = a1[3];
  v11 = 2 * v8;
  v12 = *(_QWORD *)(v10 + 8 * v11 + 8);
  if ( v12 == v7 )
  {
LABEL_6:
    std::_Hash<std::_Uset_traits<CBaseExpression *,std::_Uhash_compare<CBaseExpression *,std::hash<CBaseExpression *>,std::equal_to<CBaseExpression *>>,std::allocator<CBaseExpression *>,0>>::_Check_max_size(a1);
    v15 = std::_Allocate<16,std::_Default_allocate_traits>(0x18uLL, v14);
    v15[2] = *(_QWORD *)a3;
    if ( (unsigned __int8)std::_Hash<std::_Umap_traits<CInteractionTrackerBase *,enum InteractionTrackerBindingModeFlags,std::_Uhash_compare<CInteractionTrackerBase *,std::hash<CInteractionTrackerBase *>,std::equal_to<CInteractionTrackerBase *>>,std::allocator<std::pair<CInteractionTrackerBase * const,enum InteractionTrackerBindingModeFlags>>,0>>::_Check_rehash_required_1(a1) )
    {
      std::_Hash<std::_Uset_traits<CBaseExpression *,std::_Uhash_compare<CBaseExpression *,std::hash<CBaseExpression *>,std::equal_to<CBaseExpression *>>,std::allocator<CBaseExpression *>,0>>::_Rehash_for_1(a1);
      v7 = *(_QWORD *)std::_Hash<std::_Uset_traits<CBaseExpression *,std::_Uhash_compare<CBaseExpression *,std::hash<CBaseExpression *>,std::equal_to<CBaseExpression *>>,std::allocator<CBaseExpression *>,0>>::_Find_last<CBaseExpression *>(
                        a1,
                        v21,
                        v15 + 2,
                        v9);
    }
    v16 = *(_QWORD **)(v7 + 8);
    ++a1[2];
    *v15 = v7;
    v15[1] = v16;
    *v16 = v15;
    *(_QWORD *)(v7 + 8) = v15;
    v17 = a1[3];
    v18 = 2 * (v9 & a1[6]);
    v19 = *(_QWORD *)(v17 + 16 * (v9 & a1[6]));
    if ( v19 == a1[1] )
    {
      *(_QWORD *)(v17 + 16 * (v9 & a1[6])) = v15;
    }
    else
    {
      if ( v19 == v7 )
      {
        *(_QWORD *)(v17 + 16 * (v9 & a1[6])) = v15;
LABEL_13:
        *(_QWORD *)a2 = v15;
        *(_BYTE *)(a2 + 8) = 1;
        return a2;
      }
      if ( *(_QWORD **)(v17 + 16 * (v9 & a1[6]) + 8) != v16 )
        goto LABEL_13;
    }
    *(_QWORD *)(v17 + 8 * v18 + 8) = v15;
    goto LABEL_13;
  }
  v13 = *(_QWORD *)(v10 + 8 * v11);
  while ( *(_QWORD *)a3 != *(_QWORD *)(v12 + 16) )
  {
    if ( v12 == v13 )
    {
      v7 = v12;
      goto LABEL_6;
    }
    v12 = *(_QWORD *)(v12 + 8);
  }
  *(_QWORD *)a2 = v12;
  *(_BYTE *)(a2 + 8) = 0;
  return a2;
}
