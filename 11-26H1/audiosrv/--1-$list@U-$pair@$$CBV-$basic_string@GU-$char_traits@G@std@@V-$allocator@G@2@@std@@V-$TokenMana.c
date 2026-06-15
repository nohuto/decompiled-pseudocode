/*
 * XREFs of ??1?$list@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$TokenManager@VCAudioPumpDspResourceTracker@@@@@std@@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$TokenManager@VCAudioPumpDspResourceTracker@@@@@std@@@2@@std@@QEAA@XZ @ 0x1800C1624
 * Callers:
 *     _CAudioPumpDspResourceTracker::CAudioPumpDspResourceTracker_::_1_::dtor$3 @ 0x1801679AA (_CAudioPumpDspResourceTracker--CAudioPumpDspResourceTracker_--_1_--dtor$3.c)
 * Callees:
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$TokenManager@VCAudioPumpDspResourceTracker@@@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$TokenManager@VCAudioPumpDspResourceTracker@@@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$TokenManager@VCAudioPumpDspResourceTracker@@@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1800C1070 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@.c)
 */

void __fastcall std::list<std::pair<std::wstring const,TokenManager<CAudioPumpDspResourceTracker>>>::~list<std::pair<std::wstring const,TokenManager<CAudioPumpDspResourceTracker>>>(
        __int64 *a1)
{
  std::_List_node<std::pair<std::wstring const,TokenManager<CAudioPumpDspResourceTracker>>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<std::wstring const,TokenManager<CAudioPumpDspResourceTracker>>,void *>>>(
    (__int64)a1,
    *a1);
  std::_Deallocate<16>((void *)*a1, (struct std::nothrow_t *)0x60);
}
