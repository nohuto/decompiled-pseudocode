/*
 * XREFs of ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKPEAVInputInfoValidator@@@std@@@std@@@std@@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKPEAVInputInfoValidator@@@std@@@std@@@std@@@2@@Z @ 0x18007EC9C
 * Callers:
 *     ??0Win32kInterop@@QEAA@XZ @ 0x1800F06CC (--0Win32kInterop@@QEAA@XZ.c)
 * Callees:
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x18002B550 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800880DC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x18008A790 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 */

unsigned __int64 *__fastcall std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,InputInfoValidator *>>>>>>::_Assign_grow(
        unsigned __int64 **a1,
        __int64 a2,
        unsigned __int64 a3)
{
  unsigned __int64 *v3; // rdx
  __int64 v6; // rcx
  __int64 size_of; // rax
  unsigned __int64 *v8; // rdi
  __int64 v9; // rdx
  unsigned __int64 *result; // rax
  unsigned __int64 v11; // rcx

  v3 = a1[1];
  v6 = (char *)v3 - (char *)*a1;
  if ( (unsigned __int64)(v6 >> 3) >= 0x10 )
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
    size_of = std::_Get_size_of_n<8>(0x10uLL);
    v8 = (unsigned __int64 *)std::_Allocate<16,std::_Default_allocate_traits>(size_of);
    v9 = a1[2] - *a1;
    if ( v9 )
      std::_Deallocate<16>(*a1, 8 * v9);
    result = v8 + 16;
    *a1 = v8;
    a1[1] = v8 + 16;
    a1[2] = v8 + 16;
    while ( v8 != result )
      *v8++ = a3;
  }
  return result;
}
