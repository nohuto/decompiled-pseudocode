/*
 * XREFs of ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCStreamClassPolicyGains@@U?$default_delete@VCStreamClassPolicyGains@@@std@@@2@@std@@@std@@@std@@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCStreamClassPolicyGains@@U?$default_delete@VCStreamClassPolicyGains@@@std@@@2@@std@@@std@@@std@@@2@@Z @ 0x180025784
 * Callers:
 *     ??0CStreamClassPolicyGainsWrapper@@QEAA@XZ @ 0x18002D398 (--0CStreamClassPolicyGainsWrapper@@QEAA@XZ.c)
 *     ?_Forced_rehash@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCStreamClassPolicyGains@@U?$default_delete@VCStreamClassPolicyGains@@@std@@@2@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCStreamClassPolicyGains@@U?$default_delete@VCStreamClassPolicyGains@@@std@@@2@@std@@@2@$0A@@std@@@std@@IEAAX_K@Z @ 0x18004256C (-_Forced_rehash@-$_Hash@V-$_Umap_traits@V-$basic_string@GU-$char_traits@G@std@@V-$a_ea_18004256C.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x18000E6B0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x18002584C (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x18002B87C (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 *     ??$fill@PEAV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCStreamClassPolicyGains@@U?$default_delete@VCStreamClassPolicyGains@@@std@@@2@@std@@@std@@@std@@@std@@V12@@std@@YAXQEAV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCStreamClassPolicyGains@@U?$default_delete@VCStreamClassPolicyGains@@@std@@@2@@std@@@std@@@std@@@0@0AEBV10@@Z @ 0x18002D240 (--$fill@PEAV-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@$$CBV-$basic_s.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002FCE4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::wstring const,std::unique_ptr<CStreamClassPolicyGains>>>>>>>::_Assign_grow(
        _QWORD *a1,
        unsigned __int64 a2,
        __int64 a3)
{
  SIZE_T size_of; // rax
  _QWORD *v7; // rax
  void *v8; // rcx
  _QWORD *v9; // rdi
  __int64 v10; // rdx
  struct std::nothrow_t *v11; // rdx
  __int64 result; // rax
  struct std::nothrow_t *v13; // [rsp+40h] [rbp+8h] BYREF
  void *v14; // [rsp+48h] [rbp+10h] BYREF
  __int64 v15; // [rsp+50h] [rbp+18h] BYREF

  v15 = a3;
  if ( (__int64)(a1[1] - *a1) >> 3 >= a2 )
    return std::fill<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::wstring const,std::unique_ptr<CStreamClassPolicyGains>>>>> *,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::wstring const,std::unique_ptr<CStreamClassPolicyGains>>>>>>(
             *a1,
             a1[1],
             &v15);
  size_of = std::_Get_size_of_n<8>(a2);
  v7 = std::_Allocate<16,std::_Default_allocate_traits>(size_of);
  v8 = (void *)*a1;
  v9 = v7;
  v10 = (__int64)(a1[2] - *a1) >> 3;
  if ( v10 )
  {
    v11 = (struct std::nothrow_t *)(8 * v10);
    v13 = v11;
    v14 = v8;
    if ( (unsigned __int64)v11 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(&v14, (unsigned __int64 *)&v13);
      v11 = v13;
      v8 = v14;
    }
    operator delete(v8, v11);
  }
  result = (__int64)&v9[a2];
  *a1 = v9;
  a1[1] = result;
  a1[2] = result;
  while ( v9 != (_QWORD *)result )
    *v9++ = a3;
  return result;
}
