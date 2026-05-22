/*
 * XREFs of ?RemoveContactFromBuffer@ContextualProcessorBuffer@@UEAAXK@Z @ 0x1801A7C10
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Find_last@K@?$_Hash@V?$_Umap_traits@KPEAUIRawInputProvider@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKPEAUIRawInputProvider@@@std@@@3@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CBKPEAUIRawInputProvider@@@std@@PEAX@std@@@1@AEBK_K@Z @ 0x1800322E0 (--$_Find_last@K@-$_Hash@V-$_Umap_traits@KPEAUIRawInputProvider@@V-$_Uhash_compare@KU-$hash@K@std.c)
 *     ?_Erase_bucket@?$_Hash@V?$_Umap_traits@KW4ContextualProcessorState@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKW4ContextualProcessorState@@@std@@@3@$0A@@std@@@std@@IEAAXPEAU?$_List_node@U?$pair@$$CBKW4ContextualProcessorState@@@std@@PEAX@2@_K@Z @ 0x18005876C (-_Erase_bucket@-$_Hash@V-$_Umap_traits@KW4ContextualProcessorState@@V-$_Uhash_compare@KU-$hash@K.c)
 *     ??$_Erase@K@?$_Hash@V?$_Umap_traits@KW4ContextualProcessorDecision@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKW4ContextualProcessorDecision@@@std@@@3@$0A@@std@@@std@@AEAA_KAEBK@Z @ 0x18005A808 (--$_Erase@K@-$_Hash@V-$_Umap_traits@KW4ContextualProcessorDecision@@V-$_Uhash_compare@KU-$hash@K.c)
 *     ??R?$_Conditionally_enabled_hash@W4TestCommandMessageType@@$00@std@@SA_KAEBW4TestCommandMessageType@@@Z @ 0x18008A0A8 (--R-$_Conditionally_enabled_hash@W4TestCommandMessageType@@$00@std@@SA_KAEBW4TestCommandMessageT.c)
 *     ?_Unchecked_erase@?$list@U?$pair@$$CBGUActiveKeyProperties@ControllerProcessor@@@std@@V?$allocator@U?$pair@$$CBGUActiveKeyProperties@ControllerProcessor@@@std@@@2@@std@@AEAAPEAU?$_List_node@U?$pair@$$CBGUActiveKeyProperties@ControllerProcessor@@@std@@PEAX@2@QEAU32@@Z @ 0x18008A89C (-_Unchecked_erase@-$list@U-$pair@$$CBGUActiveKeyProperties@ControllerProcessor@@@std@@V-$allocat.c)
 */

void __fastcall ContextualProcessorBuffer::RemoveContactFromBuffer(ContextualProcessorBuffer *this, int a2)
{
  __int64 v2; // rsi
  __int64 v3; // rbx
  __int64 v4; // rbp
  _QWORD *v5; // rdi
  __int64 *v6; // rdx
  _QWORD **v7; // rdx
  __int64 *v8; // [rsp+20h] [rbp-18h] BYREF
  int v9; // [rsp+48h] [rbp+10h] BYREF

  v9 = a2;
  v2 = *((_QWORD *)this + 4);
  v3 = *((_QWORD *)this + 3);
  if ( v3 != v2 )
  {
    v4 = std::_Conditionally_enabled_hash<enum TestCommandMessageType,1>::operator()((unsigned __int8 *)&v9);
    v5 = (_QWORD *)(v3 + 8);
    do
    {
      v6 = std::_Hash<std::_Umap_traits<unsigned long,IRawInputProvider *,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,IRawInputProvider *>>,0>>::_Find_last<unsigned long>(
             v5,
             &v8,
             &v9,
             v4)[1];
      if ( v6 )
      {
        std::_Hash<std::_Umap_traits<unsigned long,enum ContextualProcessorState,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,enum ContextualProcessorState>>,0>>::_Erase_bucket(
          (__int64)v5,
          v6,
          v4 & v5[6]);
        std::list<std::pair<unsigned short const,ControllerProcessor::ActiveKeyProperties>>::_Unchecked_erase(
          (__int64)(v5 + 1),
          v7);
      }
      std::_Hash<std::_Umap_traits<unsigned long,enum ContextualProcessorDecision,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,enum ContextualProcessorDecision>>,0>>::_Erase<unsigned long>(
        v5 + 17,
        (unsigned __int8 *)&v9);
      v3 += 224LL;
      v5 += 28;
    }
    while ( v3 != v2 );
  }
}
