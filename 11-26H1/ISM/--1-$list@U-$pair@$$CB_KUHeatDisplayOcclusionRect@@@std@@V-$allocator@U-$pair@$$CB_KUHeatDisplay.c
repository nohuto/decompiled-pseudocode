/*
 * XREFs of ??1?$list@U?$pair@$$CB_KUHeatDisplayOcclusionRect@@@std@@V?$allocator@U?$pair@$$CB_KUHeatDisplayOcclusionRect@@@std@@@2@@std@@QEAA@XZ @ 0x1801971CC
 * Callers:
 *     _std::variant_std::monostate_HeatInputConfigContextMessage_HeatLowPowerStateContextMessage_HeatHingeAngleContextMessage_HeatDisplayOcclusionContextMessage_HeatVirtualTouchpadContextMessage_HeatTouchpadEnabledContextMessage_HeatTouchpadHapticConfigContextMessage_HeatTouchpadClickForceSensitivityContextMessage_::emplace_HeatDisplayOcclusionContextMessage_4_0__::_1_::dtor$3 @ 0x1801DC834 (_std--variant_std--monostate_HeatInputConfigContextMessage_HeatLowPowerStateContextMessage_HeatH.c)
 * Callees:
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CB_KUHeatDisplayOcclusionRect@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CB_KUHeatDisplayOcclusionRect@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CB_KUHeatDisplayOcclusionRect@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x18019674C (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CB_KUHeatDisplayOcclusionRect@@@std@@PEAX.c)
 */

void __fastcall std::list<std::pair<unsigned __int64 const,HeatDisplayOcclusionRect>>::~list<std::pair<unsigned __int64 const,HeatDisplayOcclusionRect>>(
        void **a1)
{
  std::_List_node<std::pair<unsigned __int64 const,HeatDisplayOcclusionRect>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned __int64 const,HeatDisplayOcclusionRect>,void *>>>(
    (__int64)a1,
    (_QWORD **)*a1);
  std::_Deallocate<16>(*a1, (struct std::nothrow_t *)0xB0);
}
