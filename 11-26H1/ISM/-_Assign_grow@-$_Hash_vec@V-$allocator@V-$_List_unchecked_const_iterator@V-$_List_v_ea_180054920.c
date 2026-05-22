/*
 * XREFs of ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@PEAUISystemContextObserver@@@std@@@std@@U_Iterator_base0@2@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@PEAUISystemContextObserver@@@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x180054920
 * Callers:
 *     ??0SystemContextProvider@@IEAA@XZ @ 0x180087CA8 (--0SystemContextProvider@@IEAA@XZ.c)
 *     ?_Forced_rehash@?$_Hash@V?$_Uset_traits@PEAUISystemContextObserver@@V?$_Uhash_compare@PEAUISystemContextObserver@@U?$hash@PEAUISystemContextObserver@@@std@@U?$equal_to@PEAUISystemContextObserver@@@3@@std@@V?$allocator@PEAUISystemContextObserver@@@3@$0A@@std@@@std@@IEAAX_K@Z @ 0x18010CB40 (-_Forced_rehash@-$_Hash@V-$_Uset_traits@PEAUISystemContextObserver@@V-$_Uhash_compare@PEAUISyste.c)
 * Callees:
 *     ??$fill@PEAV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KPEAUIMPCTarget@@@std@@@std@@@std@@@std@@V12@@std@@YAXQEAV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KPEAUIMPCTarget@@@std@@@std@@@std@@@0@0AEBV10@@Z @ 0x18001E3B0 (--$fill@PEAV-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@$$CB_KPEAUIMPC.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800880DC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x18008A790 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x18009891C (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 */

unsigned __int64 __fastcall std::_Hash_vec<std::allocator<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<ISystemContextObserver *>>,std::_Iterator_base0>>>::_Assign_grow(
        unsigned __int64 **a1,
        unsigned __int64 a2,
        unsigned __int64 a3)
{
  __int64 v5; // r14
  unsigned __int64 *v6; // rdi
  __int64 v7; // rdx
  unsigned __int64 result; // rax
  unsigned __int64 v9; // [rsp+40h] [rbp+18h] BYREF

  v9 = a3;
  if ( a1[1] - *a1 >= a2 )
    return std::fill<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned __int64 const,IMPCTarget *>>>> *,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned __int64 const,IMPCTarget *>>>>>(
             *a1,
             a1[1],
             &v9);
  if ( a2 > 0x1FFFFFFFFFFFFFFFLL )
    std::_Throw_bad_array_new_length();
  v5 = a2;
  v6 = (unsigned __int64 *)std::_Allocate<16,std::_Default_allocate_traits>(8 * a2);
  v7 = a1[2] - *a1;
  if ( v7 )
    std::_Deallocate<16>(*a1, 8 * v7);
  result = (unsigned __int64)&v6[v5];
  *a1 = v6;
  a1[1] = &v6[v5];
  a1[2] = &v6[v5];
  while ( v6 != (unsigned __int64 *)result )
    *v6++ = a3;
  return result;
}
