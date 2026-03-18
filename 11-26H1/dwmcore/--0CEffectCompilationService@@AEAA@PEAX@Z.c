/*
 * XREFs of ??0CEffectCompilationService@@AEAA@PEAX@Z @ 0x18022ED20
 * Callers:
 *     ?Create@CEffectCompilationService@@SAJPEAXPEAPEAV1@@Z @ 0x1801D6860 (-Create@CEffectCompilationService@@SAJPEAXPEAPEAV1@@Z.c)
 * Callees:
 *     ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@PEAUIUnknown@@@std@@@std@@U_Iterator_base0@2@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@PEAUIUnknown@@@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x1800E8884 (-_Assign_grow@-$_Hash_vec@V-$allocator@V-$_List_unchecked_const_iterator@V-$_List_val@U-$_List_s.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800E95D0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??$_Alloc_proxy@V?$allocator@U_Container_proxy@std@@@std@@@_Container_base12@std@@QEAAX$$QEAV?$allocator@U_Container_proxy@std@@@1@@Z @ 0x180138AB8 (--$_Alloc_proxy@V-$allocator@U_Container_proxy@std@@@std@@@_Container_base12@std@@QEAAX$$QEAV-$a.c)
 *     ??$_Get_size_of_n@$0CI@@std@@YA_K_K@Z @ 0x1801B18E0 (--$_Get_size_of_n@$0CI@@std@@YA_K_K@Z.c)
 */

CEffectCompilationService *__fastcall CEffectCompilationService::CEffectCompilationService(
        CEffectCompilationService *this,
        void *a2)
{
  SIZE_T size_of; // rax
  __int64 v5; // rdx
  _QWORD *v6; // rax
  __int64 v7; // rdx
  CEffectCompilationService *result; // rax

  *((_DWORD *)this + 2) = 0;
  *(_QWORD *)this = &CEffectCompilationService::`vftable';
  InitializeCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  *((_QWORD *)this + 7) = a2;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_DWORD *)this + 22) = 0;
  *((_DWORD *)this + 24) = 0;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  size_of = std::_Get_size_of_n<40>(1uLL);
  v6 = std::_Allocate<16,std::_Default_allocate_traits>(size_of, v5);
  *v6 = v6;
  v6[1] = v6;
  *((_QWORD *)this + 13) = v6;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 7LL;
  *((_QWORD *)this + 19) = 8LL;
  *((_DWORD *)this + 24) = 1065353216;
  std::_Hash_vec<std::allocator<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<IUnknown *>>,std::_Iterator_base0>>>::_Assign_grow(
    (__int64)this + 120,
    0x10uLL,
    *((_QWORD *)this + 13));
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 22) = 0LL;
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 24) = 0LL;
  std::_Container_base12::_Alloc_proxy<std::allocator<std::_Container_proxy>>((_QWORD *)this + 20, v7);
  result = this;
  *((_DWORD *)this + 50) = 0;
  *((_QWORD *)this + 26) = 0LL;
  *((_QWORD *)this + 27) = 0LL;
  *((_QWORD *)this + 28) = 0LL;
  *((_QWORD *)this + 29) = 0LL;
  *((_WORD *)this + 120) = 0;
  *((_BYTE *)this + 242) = 0;
  return result;
}
