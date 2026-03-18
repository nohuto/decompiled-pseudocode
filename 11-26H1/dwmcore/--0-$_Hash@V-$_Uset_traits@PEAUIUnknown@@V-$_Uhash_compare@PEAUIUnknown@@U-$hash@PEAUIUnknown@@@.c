/*
 * XREFs of ??0?$_Hash@V?$_Uset_traits@PEAUIUnknown@@V?$_Uhash_compare@PEAUIUnknown@@U?$hash@PEAUIUnknown@@@std@@U?$equal_to@PEAUIUnknown@@@3@@std@@V?$allocator@PEAUIUnknown@@@3@$0A@@std@@@std@@IEAA@AEBV?$_Uhash_compare@PEAUIUnknown@@U?$hash@PEAUIUnknown@@@std@@U?$equal_to@PEAUIUnknown@@@3@@1@AEBV?$allocator@PEAUIUnknown@@@1@@Z @ 0x1801DD0BC
 * Callers:
 *     ?TransitionTrue@CAnimationTrigger@@AEAAXXZ @ 0x1801D5634 (-TransitionTrue@CAnimationTrigger@@AEAAXXZ.c)
 *     ??0CAnimationTrigger@@QEAA@PEAVCComposition@@@Z @ 0x18020ACC8 (--0CAnimationTrigger@@QEAA@PEAVCComposition@@@Z.c)
 * Callees:
 *     ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@PEAUIUnknown@@@std@@@std@@U_Iterator_base0@2@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@PEAUIUnknown@@@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x1800E8884 (-_Assign_grow@-$_Hash_vec@V-$allocator@V-$_List_unchecked_const_iterator@V-$_List_val@U-$_List_s.c)
 *     ??0?$list@PEAUIUnknown@@V?$allocator@PEAUIUnknown@@@std@@@std@@QEAA@AEBV?$allocator@PEAUIUnknown@@@1@@Z @ 0x18020EB48 (--0-$list@PEAUIUnknown@@V-$allocator@PEAUIUnknown@@@std@@@std@@QEAA@AEBV-$allocator@PEAUIUnknown.c)
 */

__int64 __fastcall std::_Hash<std::_Uset_traits<IUnknown *,std::_Uhash_compare<IUnknown *,std::hash<IUnknown *>,std::equal_to<IUnknown *>>,std::allocator<IUnknown *>,0>>::_Hash<std::_Uset_traits<IUnknown *,std::_Uhash_compare<IUnknown *,std::hash<IUnknown *>,std::equal_to<IUnknown *>>,std::allocator<IUnknown *>,0>>(
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
  std::_Hash_vec<std::allocator<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<IUnknown *>>,std::_Iterator_base0>>>::_Assign_grow(
    a1 + 24,
    0x10uLL,
    *(_QWORD *)(a1 + 8));
  return a1;
}
