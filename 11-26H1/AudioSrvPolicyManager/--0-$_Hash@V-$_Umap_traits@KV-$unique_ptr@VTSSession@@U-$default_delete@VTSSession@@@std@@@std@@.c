/*
 * XREFs of ??0?$_Hash@V?$_Umap_traits@KV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@2@V?$allocator@U?$pair@$$CBKV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@std@@@2@$0A@@std@@@std@@IEAA@AEBV?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@1@AEBV?$allocator@U?$pair@$$CBKV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@std@@@1@@Z @ 0x18002D198
 * Callers:
 *     _dynamic_initializer_for__TsSessionList__ @ 0x180001C80 (_dynamic_initializer_for__TsSessionList__.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180015160 (--2@YAPEAX_K@Z.c)
 *     ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@std@@@std@@@std@@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@std@@@std@@@std@@@2@@Z @ 0x1800159F0 (-_Assign_grow@-$_Hash_vec@V-$allocator@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_.c)
 */

// Hidden C++ exception states: #wind=2
int *__fastcall std::_Hash<std::_Umap_traits<unsigned long,std::unique_ptr<TSSession>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,std::unique_ptr<TSSession>>>,0>>::_Hash<std::_Umap_traits<unsigned long,std::unique_ptr<TSSession>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,std::unique_ptr<TSSession>>>,0>>(
        __int64 a1,
        int *a2)
{
  _QWORD *v2; // rax

  dword_180068A30 = *a2;
  qword_180068A38 = 0LL;
  qword_180068A40 = 0LL;
  v2 = operator new(0x20uLL);
  *v2 = v2;
  v2[1] = v2;
  qword_180068A38 = (__int64)v2;
  qword_180068A48 = 0LL;
  xmmword_180068A50 = 0LL;
  qword_180068A60 = 7LL;
  qword_180068A68 = 8LL;
  dword_180068A30 = 1065353216;
  std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,std::unique_ptr<TSSession>>>>>>>::_Assign_grow(
    &qword_180068A48,
    0x10uLL,
    (__int64)v2);
  return &dword_180068A30;
}
