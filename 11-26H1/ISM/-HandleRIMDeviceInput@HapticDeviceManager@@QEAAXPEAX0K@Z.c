/*
 * XREFs of ?HandleRIMDeviceInput@HapticDeviceManager@@QEAAXPEAX0K@Z @ 0x18018EF30
 * Callers:
 *     ?OnInputReport@PenDeviceCollection@@MEAAJKPEAXK@Z @ 0x1800DF290 (-OnInputReport@PenDeviceCollection@@MEAAJKPEAXK@Z.c)
 * Callees:
 *     ?find@?$_Hash@V?$_Umap_traits@_KV?$shared_ptr@VSystemCursor2@@@std@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@2@V?$allocator@U?$pair@$$CB_KV?$shared_ptr@VSystemCursor2@@@std@@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$shared_ptr@VSystemCursor2@@@std@@@std@@@std@@@std@@@2@AEB_K@Z @ 0x1800F9B48 (-find@-$_Hash@V-$_Umap_traits@_KV-$shared_ptr@VSystemCursor2@@@std@@V-$_Uhash_compare@_KU-$hash@.c)
 *     ?ProcessInputReport@PenInterface@@QEAAJPEADK@Z @ 0x180194654 (-ProcessInputReport@PenInterface@@QEAAJPEADK@Z.c)
 */

void __fastcall HapticDeviceManager::HandleRIMDeviceInput(
        HapticDeviceManager *this,
        void *a2,
        char *a3,
        unsigned int a4)
{
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF
  void *v8; // [rsp+38h] [rbp+10h] BYREF

  v8 = a2;
  std::_Hash<std::_Umap_traits<unsigned __int64,std::shared_ptr<SystemCursor2>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,std::shared_ptr<SystemCursor2>>>,0>>::find(
    (_QWORD *)this + 12,
    &v7,
    (const unsigned __int8 *)&v8);
  if ( v7 != *((_QWORD *)this + 13) )
    PenInterface::ProcessInputReport(*(PenInterface **)(v7 + 24), a3, a4);
}
