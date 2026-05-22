/*
 * XREFs of ?clear@?$list@U?$pair@$$CBIUContactData@PointerInputMediator@@@std@@V?$allocator@U?$pair@$$CBIUContactData@PointerInputMediator@@@std@@@2@@std@@QEAAXXZ @ 0x180010B34
 * Callers:
 *     ?clear@?$_Hash@V?$_Umap_traits@IUContactData@PointerInputMediator@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUContactData@PointerInputMediator@@@std@@@4@$0A@@std@@@std@@QEAAXXZ @ 0x180010AB0 (-clear@-$_Hash@V-$_Umap_traits@IUContactData@PointerInputMediator@@V-$_Uhash_compare@IU-$hash@I@.c)
 * Callees:
 *     ??$_Freenode@V?$allocator@U?$_List_node@U?$pair@$$CBIUContactData@PointerInputMediator@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBIUContactData@PointerInputMediator@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBIUContactData@PointerInputMediator@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1800122B8 (--$_Freenode@V-$allocator@U-$_List_node@U-$pair@$$CBIUContactData@PointerInputMediator@@@std@@PE.c)
 */

__int64 __fastcall std::list<std::pair<unsigned int const,PointerInputMediator::ContactData>>::clear(_QWORD *a1)
{
  _QWORD **v1; // rdx
  _QWORD *v3; // rdx
  __int64 result; // rax
  _QWORD *v5; // rbx

  v1 = (_QWORD **)*a1;
  **(_QWORD **)(*a1 + 8LL) = 0LL;
  v3 = *v1;
  if ( v3 )
  {
    do
    {
      v5 = (_QWORD *)*v3;
      std::_List_node<std::pair<unsigned int const,PointerInputMediator::ContactData>,void *>::_Freenode<std::allocator<std::_List_node<std::pair<unsigned int const,PointerInputMediator::ContactData>,void *>>>();
      v3 = v5;
    }
    while ( v5 );
  }
  *(_QWORD *)*a1 = *a1;
  result = *a1;
  *(_QWORD *)(*a1 + 8LL) = *a1;
  a1[1] = 0LL;
  return result;
}
