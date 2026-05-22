/*
 * XREFs of ??1?$list@U?$pair@QEAUIInputTarget@@V?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@std@@@std@@V?$allocator@U?$pair@QEAUIInputTarget@@V?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@std@@@std@@@2@@std@@QEAA@XZ @ 0x18006AB94
 * Callers:
 *     _ContextualProcessorBuffer::DeliverInputToTarget_::_1_::dtor$16 @ 0x1801D4BDA (_ContextualProcessorBuffer--DeliverInputToTarget_--_1_--dtor$16.c)
 * Callees:
 *     ??$_Freenode@V?$allocator@U?$_List_node@U?$pair@QEAUIInputTarget@@V?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@std@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@QEAUIInputTarget@@V?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@std@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@QEAUIInputTarget@@V?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@std@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x18008A36C (--$_Freenode@V-$allocator@U-$_List_node@U-$pair@QEAUIInputTarget@@V-$unordered_set@KU-$hash@K@st.c)
 */

__int64 __fastcall std::list<std::pair<IInputTarget * const,std::unordered_set<unsigned long>>>::~list<std::pair<IInputTarget * const,std::unordered_set<unsigned long>>>(
        _QWORD *a1)
{
  _QWORD **v1; // rdx
  _QWORD *v3; // rdx
  _QWORD *v5; // rbx

  v1 = (_QWORD **)*a1;
  **(_QWORD **)(*a1 + 8LL) = 0LL;
  v3 = *v1;
  if ( v3 )
  {
    do
    {
      v5 = (_QWORD *)*v3;
      std::_List_node<std::pair<IInputTarget * const,std::unordered_set<unsigned long>>,void *>::_Freenode<std::allocator<std::_List_node<std::pair<IInputTarget * const,std::unordered_set<unsigned long>>,void *>>>();
      v3 = v5;
    }
    while ( v5 );
  }
  return std::_Deallocate<16>(*a1, 88LL);
}
