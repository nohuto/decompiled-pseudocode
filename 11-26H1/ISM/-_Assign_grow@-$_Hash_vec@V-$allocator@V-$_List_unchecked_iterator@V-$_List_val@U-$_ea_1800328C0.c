/*
 * XREFs of ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKW4ContextualProcessorDecision@@@std@@@std@@@std@@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKW4ContextualProcessorDecision@@@std@@@std@@@std@@@2@@Z @ 0x1800328C0
 * Callers:
 *     ??0?$_Hash@V?$_Umap_traits@KW4ContextualProcessorDecision@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKW4ContextualProcessorDecision@@@std@@@3@$0A@@std@@@std@@IEAA@$$QEAV01@@Z @ 0x1801A7300 (--0-$_Hash@V-$_Umap_traits@KW4ContextualProcessorDecision@@V-$_Uhash_compare@KU-$hash@K@std@@U-$.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800880DC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x18008A790 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x18009891C (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 */

unsigned __int64 *__fastcall std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,enum ContextualProcessorDecision>>>>>>::_Assign_grow(
        unsigned __int64 **a1,
        unsigned __int64 a2,
        unsigned __int64 a3)
{
  unsigned __int64 *v3; // rdi
  unsigned __int64 v6; // r8
  __int64 v7; // rcx
  __int64 v8; // r14
  unsigned __int64 *v9; // rdi
  __int64 v10; // rdx
  unsigned __int64 *result; // rax
  unsigned __int64 v12; // rcx

  v3 = *a1;
  v6 = (unsigned __int64)a1[1];
  v7 = v6 - (_QWORD)*a1;
  if ( v7 >> 3 >= a2 )
  {
    result = 0LL;
    v12 = (unsigned __int64)(v7 + 7) >> 3;
    if ( (unsigned __int64)v3 > v6 )
      v12 = 0LL;
    if ( v12 )
    {
      result = (unsigned __int64 *)a3;
      memset64(v3, a3, v12);
    }
  }
  else
  {
    if ( a2 > 0x1FFFFFFFFFFFFFFFLL )
      std::_Throw_bad_array_new_length();
    v8 = a2;
    v9 = (unsigned __int64 *)std::_Allocate<16,std::_Default_allocate_traits>(8 * a2);
    v10 = a1[2] - *a1;
    if ( v10 )
      std::_Deallocate<16>(*a1, 8 * v10);
    result = &v9[v8];
    *a1 = v9;
    a1[1] = &v9[v8];
    for ( a1[2] = &v9[v8]; v9 != result; ++v9 )
      *v9 = a3;
  }
  return result;
}
