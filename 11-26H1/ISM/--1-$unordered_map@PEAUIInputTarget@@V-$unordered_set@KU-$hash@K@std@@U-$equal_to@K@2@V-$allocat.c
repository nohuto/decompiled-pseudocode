/*
 * XREFs of ??1?$unordered_map@PEAUIInputTarget@@V?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@std@@U?$hash@PEAUIInputTarget@@@3@U?$equal_to@PEAUIInputTarget@@@3@V?$allocator@U?$pair@QEAUIInputTarget@@V?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@std@@@std@@@3@@std@@QEAA@XZ @ 0x1800776C4
 * Callers:
 *     _ContextualProcessorBuffer::DeliverInputToTarget_::_1_::dtor$1 @ 0x1801D4B4A (_ContextualProcessorBuffer--DeliverInputToTarget_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall std::unordered_map<IInputTarget *,std::unordered_set<unsigned long>>::~unordered_map<IInputTarget *,std::unordered_set<unsigned long>>(
        _QWORD *a1)
{
  return std::_Hash<std::_Umap_traits<IInputTarget *,std::unordered_set<unsigned long>,std::_Uhash_compare<IInputTarget *,std::hash<IInputTarget *>,std::equal_to<IInputTarget *>>,std::allocator<std::pair<IInputTarget * const,std::unordered_set<unsigned long>>>,0>>::~_Hash<std::_Umap_traits<IInputTarget *,std::unordered_set<unsigned long>,std::_Uhash_compare<IInputTarget *,std::hash<IInputTarget *>,std::equal_to<IInputTarget *>>,std::allocator<std::pair<IInputTarget * const,std::unordered_set<unsigned long>>>,0>>(a1);
}
