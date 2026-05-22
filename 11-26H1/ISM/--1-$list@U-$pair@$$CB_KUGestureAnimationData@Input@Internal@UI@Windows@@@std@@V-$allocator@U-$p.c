/*
 * XREFs of ??1?$list@U?$pair@$$CB_KUGestureAnimationData@Input@Internal@UI@Windows@@@std@@V?$allocator@U?$pair@$$CB_KUGestureAnimationData@Input@Internal@UI@Windows@@@std@@@2@@std@@QEAA@XZ @ 0x18008A444
 * Callers:
 *     _EdgyProcessor::EdgyProcessor_::_1_::dtor$12 @ 0x1801D64B0 (_EdgyProcessor--EdgyProcessor_--_1_--dtor$12.c)
 *     _DragManagerClientProxy::DragManagerClientProxy_::_1_::dtor$3 @ 0x1801D6E0E (_DragManagerClientProxy--DragManagerClientProxy_--_1_--dtor$3.c)
 *     _ConsumerControlDeviceCollection::ConsumerControlDeviceCollection_::_1_::dtor$3 @ 0x1801D9B16 (_ConsumerControlDeviceCollection--ConsumerControlDeviceCollection_--_1_--dtor$3.c)
 *     _HeatVirtualTouchpadContextMessage::HeatVirtualTouchpadContextMessage_::_1_::dtor$2 @ 0x1801DC84A (_HeatVirtualTouchpadContextMessage--HeatVirtualTouchpadContextMessage_--_1_--dtor$2.c)
 * Callees:
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBKUUsageList@ConsumerControlDeviceCollection@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBKUUsageList@ConsumerControlDeviceCollection@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBKUUsageList@ConsumerControlDeviceCollection@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x180045328 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBKUUsageList@ConsumerControlDeviceCollec.c)
 */

__int64 __fastcall std::list<std::pair<unsigned __int64 const,Windows::UI::Internal::Input::GestureAnimationData>>::~list<std::pair<unsigned __int64 const,Windows::UI::Internal::Input::GestureAnimationData>>(
        __int64 *a1)
{
  std::_List_node<std::pair<unsigned long const,ConsumerControlDeviceCollection::UsageList>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned long const,ConsumerControlDeviceCollection::UsageList>,void *>>>(
    (__int64)a1,
    *a1);
  return std::_Deallocate<16>(*a1, 40LL);
}
