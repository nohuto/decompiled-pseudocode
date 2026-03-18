/*
 * XREFs of ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUInput@CFilterEffect@@@std@@@std@@@std@@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUInput@CFilterEffect@@@std@@@std@@@std@@@2@@Z @ 0x1800E7078
 * Callers:
 *     ?OnUpdateIdChanged@CFilterEffect@@QEAAXXZ @ 0x180267614 (-OnUpdateIdChanged@CFilterEffect@@QEAAXXZ.c)
 *     ?_Forced_rehash@?$_Hash@V?$_Umap_traits@IUInput@CFilterEffect@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUInput@CFilterEffect@@@std@@@4@$0A@@std@@@std@@IEAAX_K@Z @ 0x180267AB4 (-_Forced_rehash@-$_Hash@V-$_Umap_traits@IUInput@CFilterEffect@@V-$_Uhash_compare@IU-$hash@I@std@.c)
 * Callees:
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x1800E8B50 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800E95D0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x1801513C8 (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x180220694 (--3@YAXPEAX_K@Z.c)
 */

unsigned __int64 *__fastcall std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned int const,CFilterEffect::Input>>>>>>::_Assign_grow(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3)
{
  unsigned __int64 v5; // rdx
  __int64 v7; // rcx
  SIZE_T size_of; // rax
  __int64 v9; // rax
  void *v10; // rcx
  unsigned __int64 *v11; // rdi
  __int64 v12; // rdx
  unsigned __int64 v13; // rdx
  unsigned __int64 *result; // rax
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // [rsp+40h] [rbp+8h] BYREF
  void *v17; // [rsp+48h] [rbp+10h] BYREF

  v5 = *(_QWORD *)(a1 + 8);
  v7 = v5 - *(_QWORD *)a1;
  if ( v7 >> 3 >= a2 )
  {
    result = 0LL;
    v15 = (unsigned __int64)(v7 + 7) >> 3;
    if ( *(_QWORD *)a1 > v5 )
      v15 = 0LL;
    if ( v15 )
    {
      result = (unsigned __int64 *)a3;
      memset64(*(void **)a1, a3, v15);
    }
  }
  else
  {
    size_of = std::_Get_size_of_n<8>(a2);
    v9 = std::_Allocate<16,std::_Default_allocate_traits>(size_of);
    v10 = *(void **)a1;
    v11 = (unsigned __int64 *)v9;
    v12 = (__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 3;
    if ( v12 )
    {
      v13 = 8 * v12;
      v16 = v13;
      v17 = v10;
      if ( v13 >= 0x1000 )
      {
        std::_Adjust_manually_vector_aligned(&v17, &v16);
        v13 = v16;
        v10 = v17;
      }
      operator delete(v10, v13);
    }
    result = &v11[a2];
    *(_QWORD *)a1 = v11;
    *(_QWORD *)(a1 + 8) = result;
    *(_QWORD *)(a1 + 16) = result;
    while ( v11 != result )
      *v11++ = a3;
  }
  return result;
}
