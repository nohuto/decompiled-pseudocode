/*
 * XREFs of ??0InjectionRawInputProvider@@AEAA@PEAUIRawInputClient@@@Z @ 0x1800E1E78
 * Callers:
 *     ?Create@InjectionRawInputProvider@@SAJPEAUIRawInputClient@@KPEAPEAUIRawInputProvider@@@Z @ 0x1800E21E0 (-Create@InjectionRawInputProvider@@SAJPEAUIRawInputClient@@KPEAPEAUIRawInputProvider@@@Z.c)
 * Callees:
 *     ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUMessageInfo@ResizeProcessor@@@std@@@std@@@std@@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUMessageInfo@ResizeProcessor@@@std@@@std@@@std@@@2@@Z @ 0x180011A60 (-_Assign_grow@-$_Hash_vec@V-$allocator@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800880DC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??4?$ComPtr@VDWMCursorBroker@@@WRL@Microsoft@@QEAAAEAV012@PEAVDWMCursorBroker@@@Z @ 0x1800921D4 (--4-$ComPtr@VDWMCursorBroker@@@WRL@Microsoft@@QEAAAEAV012@PEAVDWMCursorBroker@@@Z.c)
 *     ??0?$_Hash@V?$_Umap_traits@KV?$unique_ptr@VInputInfoValidator@@U?$default_delete@VInputInfoValidator@@@std@@@std@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@2@V?$allocator@U?$pair@$$CBKV?$unique_ptr@VInputInfoValidator@@U?$default_delete@VInputInfoValidator@@@std@@@std@@@std@@@2@$0A@@std@@@std@@IEAA@AEBV?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@1@AEBV?$allocator@U?$pair@$$CBKV?$unique_ptr@VInputInfoValidator@@U?$default_delete@VInputInfoValidator@@@std@@@std@@@std@@@1@@Z @ 0x1800E1DF0 (--0-$_Hash@V-$_Umap_traits@KV-$unique_ptr@VInputInfoValidator@@U-$default_delete@VInputInfoValid.c)
 */

// Hidden C++ exception states: #wind=6
InjectionRawInputProvider *__fastcall InjectionRawInputProvider::InjectionRawInputProvider(
        InjectionRawInputProvider *this,
        struct IRawInputClient *a2)
{
  char *v4; // rbx
  _QWORD *v5; // rax
  char *v7; // [rsp+50h] [rbp+18h] BYREF

  *((_QWORD *)this + 1) = &RefCountedObject::`vftable';
  *((_DWORD *)this + 4) = 1;
  *(_QWORD *)this = &InjectionRawInputProvider::`vftable'{for `IRawInputProvider'};
  *((_QWORD *)this + 1) = &InjectionRawInputProvider::`vftable'{for `RefCountedObject'};
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  v4 = (char *)this + 40;
  v7 = (char *)this + 40;
  *((_DWORD *)this + 10) = 0;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  v5 = std::_Allocate<16,std::_Default_allocate_traits>(0x20uLL);
  *v5 = v5;
  v5[1] = v5;
  *((_QWORD *)v4 + 1) = v5;
  *((_QWORD *)v4 + 3) = 0LL;
  *((_QWORD *)v4 + 4) = 0LL;
  *((_QWORD *)v4 + 5) = 0LL;
  *((_QWORD *)v4 + 6) = 7LL;
  *((_QWORD *)v4 + 7) = 8LL;
  *(_DWORD *)v4 = 1065353216;
  std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,ResizeProcessor::MessageInfo>>>>>>::_Assign_grow(
    (unsigned __int64 **)v4 + 3,
    0x10uLL,
    *((_QWORD *)v4 + 1));
  LODWORD(v7) = 0;
  std::_Hash<std::_Umap_traits<unsigned long,std::unique_ptr<InputInfoValidator>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,std::unique_ptr<InputInfoValidator>>>,0>>::_Hash<std::_Umap_traits<unsigned long,std::unique_ptr<InputInfoValidator>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,std::unique_ptr<InputInfoValidator>>>,0>>(
    (__int64)this + 104,
    &v7);
  Microsoft::WRL::ComPtr<DWMCursorBroker>::operator=((__int64 *)this + 3, (__int64)a2);
  return this;
}
