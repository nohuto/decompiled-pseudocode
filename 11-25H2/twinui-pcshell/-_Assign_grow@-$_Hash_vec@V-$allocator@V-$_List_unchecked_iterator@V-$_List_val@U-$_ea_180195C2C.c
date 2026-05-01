/*
 * XREFs of ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUTargetWindowContext@GamingOverlayExperienceManager@@@std@@@std@@@std@@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUTargetWindowContext@GamingOverlayExperienceManager@@@std@@@std@@@std@@@2@@Z @ 0x180195C2C
 * Callers:
 *     ??0GamingOverlayExperienceManager@@QEAA@XZ @ 0x180243D04 (--0GamingOverlayExperienceManager@@QEAA@XZ.c)
 *     ?_Forced_rehash@?$_Hash@V?$_Umap_traits@_KUTargetWindowContext@GamingOverlayExperienceManager@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KUTargetWindowContext@GamingOverlayExperienceManager@@@std@@@4@$0A@@std@@@std@@IEAAX_K@Z @ 0x1802461B0 (-_Forced_rehash@-$_Hash@V-$_Umap_traits@_KUTargetWindowContext@GamingOverlayExperienceManager@@V.c)
 * Callees:
 *     ??$_Allocate_manually_vector_aligned@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x180127670 (--$_Allocate_manually_vector_aligned@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x180295F8C (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2B34 (--2@YAPEAX_K@Z.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x1802E0490 (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 */

__int64 __fastcall std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned __int64 const,GamingOverlayExperienceManager::TargetWindowContext>>>>>>::_Assign_grow(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3)
{
  unsigned __int64 v3; // rdi
  __int64 v6; // rcx
  __int64 result; // rax
  __int64 v8; // rsi
  unsigned __int64 *v9; // rax
  unsigned __int64 *v10; // rdi
  void *v11; // rcx
  __int64 v12; // rax
  const struct std::nothrow_t *v13; // rdx
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // [rsp+20h] [rbp-28h] BYREF
  void *v16; // [rsp+28h] [rbp-20h] BYREF

  v3 = *(_QWORD *)(a1 + 8);
  v6 = v3 - *(_QWORD *)a1;
  result = v6 >> 3;
  if ( v6 >> 3 < a2 )
  {
    if ( a2 > 0x1FFFFFFFFFFFFFFFLL )
      std::_Throw_bad_array_new_length();
    v8 = a2;
    if ( 8 * a2 >= 0x1000 )
    {
      v9 = (unsigned __int64 *)std::_Allocate_manually_vector_aligned<std::_Default_allocate_traits>(8 * a2);
    }
    else
    {
      if ( !(v8 * 8) )
      {
        v10 = 0LL;
        goto LABEL_7;
      }
      v9 = (unsigned __int64 *)operator new(8 * a2);
    }
    v10 = v9;
LABEL_7:
    v11 = *(void **)a1;
    v12 = (__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 3;
    if ( v12 )
    {
      v13 = (const struct std::nothrow_t *)(8 * v12);
      v16 = *(void **)a1;
      v15 = 8 * v12;
      if ( (unsigned __int64)(8 * v12) >= 0x1000 )
      {
        std::_Adjust_manually_vector_aligned(&v16, &v15);
        v13 = (const struct std::nothrow_t *)v15;
        v11 = v16;
      }
      operator delete(v11, v13);
    }
    result = (__int64)&v10[v8];
    *(_QWORD *)a1 = v10;
    *(_QWORD *)(a1 + 8) = &v10[v8];
    *(_QWORD *)(a1 + 16) = &v10[v8];
    while ( v10 != (unsigned __int64 *)result )
      *v10++ = a3;
    return result;
  }
  v14 = (unsigned __int64)(v6 + 7) >> 3;
  if ( *(_QWORD *)a1 > v3 )
    v14 = 0LL;
  if ( v14 )
  {
    result = a3;
    memset64(*(void **)a1, a3, v14);
  }
  return result;
}
