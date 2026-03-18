/*
 * XREFs of ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@PEAVCBaseExpression@@@std@@@std@@U_Iterator_base0@2@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@PEAVCBaseExpression@@@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x180152644
 * Callers:
 *     ??0?$_Hash@V?$_Uset_traits@PEAVCBaseExpression@@V?$_Uhash_compare@PEAVCBaseExpression@@U?$hash@PEAVCBaseExpression@@@std@@U?$equal_to@PEAVCBaseExpression@@@3@@std@@V?$allocator@PEAVCBaseExpression@@@3@$0A@@std@@@std@@IEAA@AEBV?$_Uhash_compare@PEAVCBaseExpression@@U?$hash@PEAVCBaseExpression@@@std@@U?$equal_to@PEAVCBaseExpression@@@3@@1@AEBV?$allocator@PEAVCBaseExpression@@@1@@Z @ 0x1801A0E14 (--0-$_Hash@V-$_Uset_traits@PEAVCBaseExpression@@V-$_Uhash_compare@PEAVCBaseExpression@@U-$hash@P.c)
 *     ?_Forced_rehash@?$_Hash@V?$_Uset_traits@PEAVCBaseExpression@@V?$_Uhash_compare@PEAVCBaseExpression@@U?$hash@PEAVCBaseExpression@@@std@@U?$equal_to@PEAVCBaseExpression@@@3@@std@@V?$allocator@PEAVCBaseExpression@@@3@$0A@@std@@@std@@IEAAX_K@Z @ 0x1801A1124 (-_Forced_rehash@-$_Hash@V-$_Uset_traits@PEAVCBaseExpression@@V-$_Uhash_compare@PEAVCBaseExpressi.c)
 *     ??0CInteractionTrackerBindingManager@@QEAA@PEAVCComposition@@PEAVCChannelContext@@@Z @ 0x180201018 (--0CInteractionTrackerBindingManager@@QEAA@PEAVCComposition@@PEAVCChannelContext@@@Z.c)
 *     ?_Forced_rehash@?$_Hash@V?$_Umap_traits@PEAVCInteractionTrackerBase@@V?$unordered_map@PEAVCInteractionTrackerBase@@W4InteractionTrackerBindingModeFlags@@U?$hash@PEAVCInteractionTrackerBase@@@std@@U?$equal_to@PEAVCInteractionTrackerBase@@@4@V?$allocator@U?$pair@QEAVCInteractionTrackerBase@@W4InteractionTrackerBindingModeFlags@@@std@@@4@@std@@V?$_Uhash_compare@PEAVCInteractionTrackerBase@@U?$hash@PEAVCInteractionTrackerBase@@@std@@U?$equal_to@PEAVCInteractionTrackerBase@@@3@@3@V?$allocator@U?$pair@QEAVCInteractionTrackerBase@@V?$unordered_map@PEAVCInteractionTrackerBase@@W4InteractionTrackerBindingModeFlags@@U?$hash@PEAVCInteractionTrackerBase@@@std@@U?$equal_to@PEAVCInteractionTrackerBase@@@4@V?$allocator@U?$pair@QEAVCInteractionTrackerBase@@W4InteractionTrackerBindingModeFlags@@@std@@@4@@std@@@std@@@3@$0A@@std@@@std@@IEAAX_K@Z @ 0x180279578 (-_Forced_rehash@-$_Hash@V-$_Umap_traits@PEAVCInteractionTrackerBase@@V-$unordered_map@PEAVCInter.c)
 * Callees:
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x1800E8B50 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800E95D0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??$fill@PEAV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUInput@CFilterEffect@@@std@@@std@@@std@@@std@@V12@@std@@YAXQEAV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUInput@CFilterEffect@@@std@@@std@@@std@@@0@0AEBV10@@Z @ 0x180148494 (--$fill@PEAV-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@$$CBIUInput@CF.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x1801513C8 (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x180220694 (--3@YAXPEAX_K@Z.c)
 */

unsigned __int64 __fastcall std::_Hash_vec<std::allocator<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<CBaseExpression *>>,std::_Iterator_base0>>>::_Assign_grow(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3)
{
  SIZE_T size_of; // rax
  __int64 v7; // rdx
  unsigned __int64 *v8; // rax
  void *v9; // rcx
  unsigned __int64 *v10; // rdi
  __int64 v11; // rdx
  unsigned __int64 v12; // rdx
  unsigned __int64 result; // rax
  unsigned __int64 v14; // [rsp+40h] [rbp+8h] BYREF
  void *v15; // [rsp+48h] [rbp+10h] BYREF
  unsigned __int64 v16; // [rsp+50h] [rbp+18h] BYREF

  v16 = a3;
  if ( (__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 3 >= a2 )
    return std::fill<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned int const,CFilterEffect::Input>>>> *,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned int const,CFilterEffect::Input>>>>>(
             *(unsigned __int64 **)a1,
             *(unsigned __int64 **)(a1 + 8),
             &v16);
  size_of = std::_Get_size_of_n<8>(a2);
  v8 = (unsigned __int64 *)std::_Allocate<16,std::_Default_allocate_traits>(size_of, v7);
  v9 = *(void **)a1;
  v10 = v8;
  v11 = (__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 3;
  if ( v11 )
  {
    v12 = 8 * v11;
    v14 = v12;
    v15 = v9;
    if ( v12 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(&v15, &v14);
      v12 = v14;
      v9 = v15;
    }
    operator delete(v9, v12);
  }
  result = (unsigned __int64)&v10[a2];
  *(_QWORD *)a1 = v10;
  *(_QWORD *)(a1 + 8) = result;
  *(_QWORD *)(a1 + 16) = result;
  while ( v10 != (unsigned __int64 *)result )
    *v10++ = a3;
  return result;
}
