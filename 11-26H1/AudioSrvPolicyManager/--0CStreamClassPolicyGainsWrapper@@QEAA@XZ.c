/*
 * XREFs of ??0CStreamClassPolicyGainsWrapper@@QEAA@XZ @ 0x18002D398
 * Callers:
 *     ??0TSSession@@AEAA@XZ @ 0x18002D2B8 (--0TSSession@@AEAA@XZ.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180015160 (--2@YAPEAX_K@Z.c)
 *     ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCStreamClassPolicyGains@@U?$default_delete@VCStreamClassPolicyGains@@@std@@@2@@std@@@std@@@std@@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCStreamClassPolicyGains@@U?$default_delete@VCStreamClassPolicyGains@@@std@@@2@@std@@@std@@@std@@@2@@Z @ 0x180025784 (-_Assign_grow@-$_Hash_vec@V-$allocator@V-$_List_unchecked_iterator@V-$_List_val@U-$_ea_180025784.c)
 *     ??0CStreamClassPolicyGains@@QEAA@XZ @ 0x180029268 (--0CStreamClassPolicyGains@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=2
CStreamClassPolicyGainsWrapper *__fastcall CStreamClassPolicyGainsWrapper::CStreamClassPolicyGainsWrapper(
        CStreamClassPolicyGainsWrapper *this)
{
  _QWORD *v2; // rax

  *(_DWORD *)this = 0;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  v2 = operator new(0x38uLL);
  *v2 = v2;
  v2[1] = v2;
  *((_QWORD *)this + 1) = v2;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 7LL;
  *((_QWORD *)this + 7) = 8LL;
  *(_DWORD *)this = 1065353216;
  std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::wstring const,std::unique_ptr<CStreamClassPolicyGains>>>>>>>::_Assign_grow(
    (_QWORD *)this + 3,
    0x10uLL,
    *((_QWORD *)this + 1));
  CStreamClassPolicyGains::CStreamClassPolicyGains((CStreamClassPolicyGainsWrapper *)((char *)this + 64));
  CStreamClassPolicyGains::CStreamClassPolicyGains((CStreamClassPolicyGainsWrapper *)((char *)this + 488));
  return this;
}
