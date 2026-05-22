/*
 * XREFs of ??1?$list@U?$pair@$$CBUtagMsgRoutingInfo@@UtagInputRoutingInfo@@@std@@V?$allocator@U?$pair@$$CBUtagMsgRoutingInfo@@UtagInputRoutingInfo@@@std@@@2@@std@@QEAA@XZ @ 0x18016123C
 * Callers:
 *     _NonBamoInputDeliveryServer::NonBamoInputDeliveryServer_::_1_::dtor$12 @ 0x1801DBD14 (_NonBamoInputDeliveryServer--NonBamoInputDeliveryServer_--_1_--dtor$12.c)
 * Callees:
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBUtagMsgRoutingInfo@@UtagInputRoutingInfo@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBUtagMsgRoutingInfo@@UtagInputRoutingInfo@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBUtagMsgRoutingInfo@@UtagInputRoutingInfo@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x180161070 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBUtagMsgRoutingInfo@@UtagInputRoutingInf.c)
 */

void __fastcall std::list<std::pair<tagMsgRoutingInfo const,tagInputRoutingInfo>>::~list<std::pair<tagMsgRoutingInfo const,tagInputRoutingInfo>>(
        void **a1)
{
  std::_List_node<std::pair<tagMsgRoutingInfo const,tagInputRoutingInfo>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<tagMsgRoutingInfo const,tagInputRoutingInfo>,void *>>>(
    (__int64)a1,
    (_QWORD **)*a1);
  std::_Deallocate<16>(*a1, (struct std::nothrow_t *)0x68);
}
