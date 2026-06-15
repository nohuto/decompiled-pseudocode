/*
 * XREFs of _dynamic_initializer_for__TsSessionList__ @ 0x180001C80
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$_Hash@V?$_Umap_traits@KV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@2@V?$allocator@U?$pair@$$CBKV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@std@@@2@$0A@@std@@@std@@IEAA@AEBV?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@1@AEBV?$allocator@U?$pair@$$CBKV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@std@@@1@@Z @ 0x18002D198 (--0-$_Hash@V-$_Umap_traits@KV-$unique_ptr@VTSSession@@U-$default_delete@VTSSession@@@std@@@std@@.c)
 */

int __fastcall dynamic_initializer_for__TsSessionList__(__int64 a1)
{
  int v2; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  std::_Hash<std::_Umap_traits<unsigned long,std::unique_ptr<TSSession>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,std::unique_ptr<TSSession>>>,0>>::_Hash<std::_Umap_traits<unsigned long,std::unique_ptr<TSSession>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,std::unique_ptr<TSSession>>>,0>>(
    a1,
    &v2);
  return atexit((void (__cdecl *)())dynamic_atexit_destructor_for__TsSessionList__);
}
