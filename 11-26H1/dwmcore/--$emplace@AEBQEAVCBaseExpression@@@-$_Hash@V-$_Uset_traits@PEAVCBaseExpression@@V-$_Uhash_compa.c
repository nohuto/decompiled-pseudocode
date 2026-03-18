/*
 * XREFs of ??$emplace@AEBQEAVCBaseExpression@@@?$_Hash@V?$_Uset_traits@PEAVCBaseExpression@@V?$_Uhash_compare@PEAVCBaseExpression@@U?$hash@PEAVCBaseExpression@@@std@@U?$equal_to@PEAVCBaseExpression@@@3@@std@@V?$allocator@PEAVCBaseExpression@@@3@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@PEAVCBaseExpression@@@std@@@std@@@std@@_N@1@AEBQEAVCBaseExpression@@@Z @ 0x1801A0F64
 * Callers:
 *     ?CalculateValue@CNaturalAnimation@@AEAAXPEAVCExpressionValueStack@@PEAUCalculateValueResult@@@Z @ 0x180044E70 (-CalculateValue@CNaturalAnimation@@AEAAXPEAVCExpressionValueStack@@PEAUCalculateValueResult@@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800E95D0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?_Check_rehash_required_1@?$_Hash@V?$_Umap_traits@PEAVCInteractionTrackerBase@@W4InteractionTrackerBindingModeFlags@@V?$_Uhash_compare@PEAVCInteractionTrackerBase@@U?$hash@PEAVCInteractionTrackerBase@@@std@@U?$equal_to@PEAVCInteractionTrackerBase@@@3@@std@@V?$allocator@U?$pair@QEAVCInteractionTrackerBase@@W4InteractionTrackerBindingModeFlags@@@std@@@4@$0A@@std@@@std@@IEBA_NXZ @ 0x1801363E4 (-_Check_rehash_required_1@-$_Hash@V-$_Umap_traits@PEAVCInteractionTrackerBase@@W4InteractionTrac.c)
 *     ?_Check_max_size@?$_Hash@V?$_Uset_traits@PEAVCBaseExpression@@V?$_Uhash_compare@PEAVCBaseExpression@@U?$hash@PEAVCBaseExpression@@@std@@U?$equal_to@PEAVCBaseExpression@@@3@@std@@V?$allocator@PEAVCBaseExpression@@@3@$0A@@std@@@std@@IEBAXXZ @ 0x1801A10C4 (-_Check_max_size@-$_Hash@V-$_Uset_traits@PEAVCBaseExpression@@V-$_Uhash_compare@PEAVCBaseExpress.c)
 *     ?_Rehash_for_1@?$_Hash@V?$_Uset_traits@PEAVCBaseExpression@@V?$_Uhash_compare@PEAVCBaseExpression@@U?$hash@PEAVCBaseExpression@@@std@@U?$equal_to@PEAVCBaseExpression@@@3@@std@@V?$allocator@PEAVCBaseExpression@@@3@$0A@@std@@@std@@IEAAXXZ @ 0x1801A10F8 (-_Rehash_for_1@-$_Hash@V-$_Uset_traits@PEAVCBaseExpression@@V-$_Uhash_compare@PEAVCBaseExpressio.c)
 *     ??R?$_Conditionally_enabled_hash@PEAVCBaseExpression@@$00@std@@SA_KAEBQEAVCBaseExpression@@@Z @ 0x180211A54 (--R-$_Conditionally_enabled_hash@PEAVCBaseExpression@@$00@std@@SA_KAEBQEAVCBaseExpression@@@Z.c)
 */

__int64 __fastcall std::_Hash<std::_Uset_traits<CBaseExpression *,std::_Uhash_compare<CBaseExpression *,std::hash<CBaseExpression *>,std::equal_to<CBaseExpression *>>,std::allocator<CBaseExpression *>,0>>::emplace<CBaseExpression * const &>(
        _QWORD *a1,
        __int64 a2,
        unsigned __int8 *a3)
{
  __int64 v6; // rax
  _QWORD *v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // r15
  __int64 v10; // rax
  __int64 v11; // rdx
  _QWORD *v12; // rcx
  _QWORD *v13; // rax
  __int64 v14; // rdx
  _QWORD *v15; // rbx
  __int64 v16; // rdx
  _QWORD *v17; // rax
  _QWORD *v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rax
  _QWORD *v21; // r8

  v6 = std::_Conditionally_enabled_hash<CBaseExpression *,1>::operator()(a3);
  v7 = (_QWORD *)a1[1];
  v8 = a1[6] & v6;
  v9 = v6;
  v10 = a1[3];
  v11 = 2 * v8;
  v12 = *(_QWORD **)(v10 + 8 * v11 + 8);
  if ( v12 == v7 )
  {
LABEL_6:
    std::_Hash<std::_Uset_traits<CBaseExpression *,std::_Uhash_compare<CBaseExpression *,std::hash<CBaseExpression *>,std::equal_to<CBaseExpression *>>,std::allocator<CBaseExpression *>,0>>::_Check_max_size(a1);
    v15 = std::_Allocate<16,std::_Default_allocate_traits>(0x18uLL, v14);
    v15[2] = *(_QWORD *)a3;
    if ( std::_Hash<std::_Umap_traits<CInteractionTrackerBase *,enum InteractionTrackerBindingModeFlags,std::_Uhash_compare<CInteractionTrackerBase *,std::hash<CInteractionTrackerBase *>,std::equal_to<CInteractionTrackerBase *>>,std::allocator<std::pair<CInteractionTrackerBase * const,enum InteractionTrackerBindingModeFlags>>,0>>::_Check_rehash_required_1((__int64)a1) )
    {
      std::_Hash<std::_Uset_traits<CBaseExpression *,std::_Uhash_compare<CBaseExpression *,std::hash<CBaseExpression *>,std::equal_to<CBaseExpression *>>,std::allocator<CBaseExpression *>,0>>::_Rehash_for_1(a1);
      v16 = a1[3];
      v7 = (_QWORD *)a1[1];
      v17 = *(_QWORD **)(v16 + 16 * (v9 & a1[6]) + 8);
      if ( v17 != v7 )
      {
        while ( 1 )
        {
          if ( v15[2] == v17[2] )
          {
            v7 = (_QWORD *)*v17;
            goto LABEL_10;
          }
          if ( v17 == *(_QWORD **)(v16 + 16 * (v9 & a1[6])) )
            break;
          v17 = (_QWORD *)v17[1];
        }
        v7 = v17;
      }
    }
LABEL_10:
    v18 = (_QWORD *)v7[1];
    ++a1[2];
    *v15 = v7;
    v15[1] = v18;
    *v18 = v15;
    v7[1] = v15;
    v19 = a1[3];
    v20 = 2 * (v9 & a1[6]);
    v21 = *(_QWORD **)(v19 + 16 * (v9 & a1[6]));
    if ( v21 == (_QWORD *)a1[1] )
    {
      *(_QWORD *)(v19 + 16 * (v9 & a1[6])) = v15;
    }
    else
    {
      if ( v21 == v7 )
      {
        *(_QWORD *)(v19 + 16 * (v9 & a1[6])) = v15;
LABEL_16:
        *(_QWORD *)a2 = v15;
        *(_BYTE *)(a2 + 8) = 1;
        return a2;
      }
      if ( *(_QWORD **)(v19 + 16 * (v9 & a1[6]) + 8) != v18 )
        goto LABEL_16;
    }
    *(_QWORD *)(v19 + 8 * v20 + 8) = v15;
    goto LABEL_16;
  }
  v13 = *(_QWORD **)(v10 + 8 * v11);
  while ( *(_QWORD *)a3 != v12[2] )
  {
    if ( v12 == v13 )
    {
      v7 = v12;
      goto LABEL_6;
    }
    v12 = (_QWORD *)v12[1];
  }
  *(_QWORD *)a2 = v12;
  *(_BYTE *)(a2 + 8) = 0;
  return a2;
}
