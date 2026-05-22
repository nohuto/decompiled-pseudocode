/*
 * XREFs of ??1?$list@U?$pair@QEAXV?$vector@IV?$allocator@I@std@@@std@@@std@@V?$allocator@U?$pair@QEAXV?$vector@IV?$allocator@I@std@@@std@@@std@@@2@@std@@QEAA@XZ @ 0x180073AD0
 * Callers:
 *     _Win32kInterop::DeliverInputToAllTargets_::_1_::dtor$4 @ 0x1801D429C (_Win32kInterop--DeliverInputToAllTargets_--_1_--dtor$4.c)
 * Callees:
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@QEAXV?$vector@IV?$allocator@I@std@@@std@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@QEAXV?$vector@IV?$allocator@I@std@@@std@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@QEAXV?$vector@IV?$allocator@I@std@@@std@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1800119CC (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@QEAXV-$vector@IV-$allocator@I@std@@@std@@@s.c)
 */

__int64 __fastcall std::list<std::pair<void * const,std::vector<unsigned int>>>::~list<std::pair<void * const,std::vector<unsigned int>>>(
        __int64 *a1)
{
  std::_List_node<std::pair<void * const,std::vector<unsigned int>>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<void * const,std::vector<unsigned int>>,void *>>>(
    (__int64)a1,
    *a1);
  return std::_Deallocate<16>(*a1, 48LL);
}
