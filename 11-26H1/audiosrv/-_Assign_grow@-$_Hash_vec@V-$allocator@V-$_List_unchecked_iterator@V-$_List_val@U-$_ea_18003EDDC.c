/*
 * XREFs of ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBU_GUID@@W4ValidEffectPackConfigurationSettings@@@std@@@std@@@std@@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBU_GUID@@W4ValidEffectPackConfigurationSettings@@@std@@@std@@@std@@@2@@Z @ 0x18003EDDC
 * Callers:
 *     _dynamic_initializer_for__s_validSettingsForSchema__ @ 0x1800085A0 (_dynamic_initializer_for__s_validSettingsForSchema__.c)
 *     ?_Forced_rehash@?$_Hash@V?$_Umap_traits@U_GUID@@W4ValidEffectPackConfigurationSettings@@V?$_Uhash_compare@U_GUID@@U?$hash@U_GUID@@@std@@U?$equal_to@U_GUID@@@3@@std@@V?$allocator@U?$pair@$$CBU_GUID@@W4ValidEffectPackConfigurationSettings@@@std@@@4@$0A@@std@@@std@@IEAAX_K@Z @ 0x18014D420 (-_Forced_rehash@-$_Hash@V-$_Umap_traits@U_GUID@@W4ValidEffectPackConfigurationSettings@@V-$_Uhas.c)
 * Callees:
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x180013CA8 (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18001E210 (--2@YAPEAX_K@Z.c)
 *     ??$_Allocate_manually_vector_aligned@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x18003F858 (--$_Allocate_manually_vector_aligned@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x1800A9EA0 (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800B24B4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<_GUID const,enum ValidEffectPackConfigurationSettings>>>>>>::_Assign_grow(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3)
{
  unsigned __int64 v3; // rdi
  __int64 v6; // rcx
  __int64 result; // rax
  unsigned __int64 v8; // rcx
  unsigned __int64 *v9; // rdi
  unsigned __int64 v10; // rsi
  void *v11; // rcx
  __int64 v12; // rdx
  const struct std::nothrow_t *v13; // rdx
  SIZE_T v14; // rcx
  unsigned __int64 *v15; // rax
  unsigned __int64 v16; // [rsp+40h] [rbp+8h] BYREF
  void *v17; // [rsp+48h] [rbp+10h] BYREF

  v3 = *(_QWORD *)(a1 + 8);
  v6 = v3 - *(_QWORD *)a1;
  result = v6 >> 3;
  if ( v6 >> 3 < a2 )
  {
    if ( a2 > 0x1FFFFFFFFFFFFFFFLL )
      std::_Throw_bad_array_new_length();
    v10 = a2;
    if ( 8 * a2 )
    {
      v14 = 8 * a2;
      if ( v10 < 512 )
        v15 = (unsigned __int64 *)operator new(v14);
      else
        v15 = (unsigned __int64 *)std::_Allocate_manually_vector_aligned<std::_Default_allocate_traits>(v14);
      v9 = v15;
    }
    else
    {
      v9 = 0LL;
    }
    v11 = *(void **)a1;
    v12 = (__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 3;
    if ( v12 )
    {
      v13 = (const struct std::nothrow_t *)(8 * v12);
      v16 = (unsigned __int64)v13;
      v17 = v11;
      if ( (unsigned __int64)v13 >= 0x1000 )
      {
        std::_Adjust_manually_vector_aligned(&v17, &v16);
        v13 = (const struct std::nothrow_t *)v16;
        v11 = v17;
      }
      operator delete(v11, v13);
    }
    result = (__int64)&v9[v10];
    *(_QWORD *)a1 = v9;
    *(_QWORD *)(a1 + 8) = &v9[v10];
    *(_QWORD *)(a1 + 16) = &v9[v10];
    while ( v9 != (unsigned __int64 *)result )
      *v9++ = a3;
  }
  else
  {
    v8 = (unsigned __int64)(v6 + 7) >> 3;
    if ( *(_QWORD *)a1 > v3 )
      v8 = 0LL;
    if ( v8 )
    {
      result = a3;
      memset64(*(void **)a1, a3, v8);
    }
  }
  return result;
}
