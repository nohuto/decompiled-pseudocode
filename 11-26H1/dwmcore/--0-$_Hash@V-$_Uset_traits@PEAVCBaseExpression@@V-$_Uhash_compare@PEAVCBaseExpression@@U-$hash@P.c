/*
 * XREFs of ??0?$_Hash@V?$_Uset_traits@PEAVCBaseExpression@@V?$_Uhash_compare@PEAVCBaseExpression@@U?$hash@PEAVCBaseExpression@@@std@@U?$equal_to@PEAVCBaseExpression@@@3@@std@@V?$allocator@PEAVCBaseExpression@@@3@$0A@@std@@@std@@IEAA@AEBV?$_Uhash_compare@PEAVCBaseExpression@@U?$hash@PEAVCBaseExpression@@@std@@U?$equal_to@PEAVCBaseExpression@@@3@@1@AEBV?$allocator@PEAVCBaseExpression@@@1@@Z @ 0x1801A0E14
 * Callers:
 *     ??0?$unordered_set@PEAVCBaseExpression@@U?$hash@PEAVCBaseExpression@@@std@@U?$equal_to@PEAVCBaseExpression@@@3@V?$allocator@PEAVCBaseExpression@@@3@@std@@QEAA@XZ @ 0x1801A0DE8 (--0-$unordered_set@PEAVCBaseExpression@@U-$hash@PEAVCBaseExpression@@@std@@U-$equal_to@PEAVCBase.c)
 * Callees:
 *     ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@PEAVCBaseExpression@@@std@@@std@@U_Iterator_base0@2@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@PEAVCBaseExpression@@@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x180152644 (-_Assign_grow@-$_Hash_vec@V-$allocator@V-$_List_unchecked_const_iterator@V-$_List_v_ea_180152644.c)
 *     ??0?$list@PEAUIUnknown@@V?$allocator@PEAUIUnknown@@@std@@@std@@QEAA@AEBV?$allocator@PEAUIUnknown@@@1@@Z @ 0x18020EB48 (--0-$list@PEAUIUnknown@@V-$allocator@PEAUIUnknown@@@std@@@std@@QEAA@AEBV-$allocator@PEAUIUnknown.c)
 */

__int64 __fastcall std::_Hash<std::_Uset_traits<CBaseExpression *,std::_Uhash_compare<CBaseExpression *,std::hash<CBaseExpression *>,std::equal_to<CBaseExpression *>>,std::allocator<CBaseExpression *>,0>>::_Hash<std::_Uset_traits<CBaseExpression *,std::_Uhash_compare<CBaseExpression *,std::hash<CBaseExpression *>,std::equal_to<CBaseExpression *>>,std::allocator<CBaseExpression *>,0>>(
        __int64 a1,
        _DWORD *a2)
{
  *(_DWORD *)a1 = *a2;
  std::list<IUnknown *>::list<IUnknown *>(a1 + 8);
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = 7LL;
  *(_QWORD *)(a1 + 56) = 8LL;
  *(_DWORD *)a1 = 1065353216;
  std::_Hash_vec<std::allocator<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<CBaseExpression *>>,std::_Iterator_base0>>>::_Assign_grow(
    a1 + 24,
    0x10uLL,
    *(_QWORD *)(a1 + 8));
  return a1;
}
