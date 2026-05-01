/*
 * XREFs of ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUTargetWindowContext@GamingOverlayExperienceManager@@@std@@@std@@@std@@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUTargetWindowContext@GamingOverlayExperienceManager@@@std@@@std@@@std@@@2@@Z @ 0x1801A3A40
 * Callers:
 *     ??0GamingOverlayExperienceManager@@QEAA@XZ @ 0x180234D14 (--0GamingOverlayExperienceManager@@QEAA@XZ.c)
 *     ?_Forced_rehash@?$_Hash@V?$_Umap_traits@_KUTargetWindowContext@GamingOverlayExperienceManager@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KUTargetWindowContext@GamingOverlayExperienceManager@@@std@@@4@$0A@@std@@@std@@IEAAX_K@Z @ 0x180237194 (-_Forced_rehash@-$_Hash@V-$_Umap_traits@_KUTargetWindowContext@GamingOverlayExperienceManager@@V.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x180285A90 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x180285C68 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x1802B9568 (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 */

unsigned __int64 *__fastcall std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned __int64 const,GamingOverlayExperienceManager::TargetWindowContext>>>>>>::_Assign_grow(
        unsigned __int64 **a1,
        unsigned __int64 a2,
        unsigned __int64 a3)
{
  unsigned __int64 *v3; // rdi
  __int64 v6; // rcx
  __int64 v7; // r14
  unsigned __int64 *v8; // rdi
  __int64 v9; // rdx
  unsigned __int64 *result; // rax
  unsigned __int64 v11; // rcx

  v3 = a1[1];
  v6 = (char *)v3 - (char *)*a1;
  if ( v6 >> 3 >= a2 )
  {
    result = 0LL;
    v11 = (unsigned __int64)(v6 + 7) >> 3;
    if ( *a1 > v3 )
      v11 = 0LL;
    if ( v11 )
    {
      result = (unsigned __int64 *)a3;
      memset64(*a1, a3, v11);
    }
  }
  else
  {
    if ( a2 > 0x1FFFFFFFFFFFFFFFLL )
      std::_Throw_bad_array_new_length();
    v7 = a2;
    v8 = (unsigned __int64 *)std::_Allocate<16,std::_Default_allocate_traits>(8 * a2);
    v9 = a1[2] - *a1;
    if ( v9 )
      std::_Deallocate<16>(*a1, 8 * v9);
    result = &v8[v7];
    *a1 = v8;
    a1[1] = &v8[v7];
    a1[2] = &v8[v7];
    while ( v8 != result )
      *v8++ = a3;
  }
  return result;
}
