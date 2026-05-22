/*
 * XREFs of ?_Erase_bucket@?$_Hash@V?$_Umap_traits@KW4ContextualProcessorState@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKW4ContextualProcessorState@@@std@@@3@$0A@@std@@@std@@IEAAXPEAU?$_List_node@U?$pair@$$CBKW4ContextualProcessorState@@@std@@PEAX@2@_K@Z @ 0x18005876C
 * Callers:
 *     ?DeliverInput@ContextualProcessorBuffer@@UEAAJPEAUInputInfo@@@Z @ 0x1800176E0 (-DeliverInput@ContextualProcessorBuffer@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?RemoveContactFromBuffer@ContextualProcessorBuffer@@UEAAXK@Z @ 0x1801A7C10 (-RemoveContactFromBuffer@ContextualProcessorBuffer@@UEAAXK@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall std::_Hash<std::_Umap_traits<unsigned long,enum ContextualProcessorState,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,enum ContextualProcessorState>>,0>>::_Erase_bucket(
        __int64 a1,
        _QWORD *a2,
        __int64 a3)
{
  __int64 v3; // r9
  __int64 v4; // r8
  __int64 v5; // rax

  v3 = *(_QWORD *)(a1 + 24);
  v4 = 2 * a3;
  if ( *(_QWORD **)(v3 + 8 * v4 + 8) == a2 )
  {
    if ( *(_QWORD **)(v3 + 8 * v4) == a2 )
    {
      v5 = *(_QWORD *)(a1 + 8);
      *(_QWORD *)(v3 + 8 * v4) = v5;
    }
    else
    {
      v5 = a2[1];
    }
    *(_QWORD *)(v3 + 8 * v4 + 8) = v5;
  }
  else if ( *(_QWORD **)(v3 + 8 * v4) == a2 )
  {
    *(_QWORD *)(v3 + 8 * v4) = *a2;
  }
}
