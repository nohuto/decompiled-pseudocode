/*
 * XREFs of ??$_Buynode@U?$pair@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@V?$BaseEventsWithEvaluation@$00@details@Health@CreativeFramework@@@2@@std@@@?$_Tree_buy@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VBaseScenarioEvents@details@Health@CreativeFramework@@@2@@std@@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VBaseScenarioEvents@details@Health@CreativeFramework@@@2@@std@@@2@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VBaseScenarioEvents@details@Health@CreativeFramework@@@2@@std@@PEAX@1@$$QEAU?$pair@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@V?$BaseEventsWithEvaluation@$00@details@Health@CreativeFramework@@@2@@1@@Z @ 0x1800492E0
 * Callers:
 *     ??$insert@U?$pair@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@V?$BaseEventsWithEvaluation@$00@details@Health@CreativeFramework@@@2@@std@@@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VBaseScenarioEvents@details@Health@CreativeFramework@@@2@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VBaseScenarioEvents@details@Health@CreativeFramework@@@2@@std@@@2@$0A@@std@@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VBaseScenarioEvents@details@Health@CreativeFramework@@@2@@std@@@std@@@std@@@std@@_N@1@$$QEAU?$pair@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@V?$BaseEventsWithEvaluation@$00@details@Health@CreativeFramework@@@2@@1@@Z @ 0x180049AC0 (--$insert@U-$pair@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$shared_ptr@V-.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@$$QEAV01@@Z @ 0x18004B5F0 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@$$QEAV01@@Z.c)
 *     ?_Buynode0@?$_Tree_buy@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VBaseScenarioEvents@details@Health@CreativeFramework@@@2@@std@@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VBaseScenarioEvents@details@Health@CreativeFramework@@@2@@std@@@2@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VBaseScenarioEvents@details@Health@CreativeFramework@@@2@@std@@PEAX@2@XZ @ 0x18005A360 (-_Buynode0@-$_Tree_buy@U-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@.c)
 */

__int64 __fastcall std::_Tree_buy<std::pair<std::wstring const,std::shared_ptr<CreativeFramework::Health::details::BaseScenarioEvents>>>::_Buynode<std::pair<std::wstring,std::shared_ptr<CreativeFramework::Health::details::BaseEventsWithEvaluation<1>>>>(
        __int64 a1,
        __int64 a2)
{
  __int64 v4; // [rsp+30h] [rbp+8h]

  v4 = std::_Tree_buy<std::pair<std::wstring const,std::shared_ptr<CreativeFramework::Health::details::BaseScenarioEvents>>>::_Buynode0();
  *(_WORD *)(v4 + 24) = 0;
  std::wstring::wstring(v4 + 32, a2);
  *(_QWORD *)(v4 + 64) = *(_QWORD *)(a2 + 32);
  *(_QWORD *)(v4 + 72) = *(_QWORD *)(a2 + 40);
  *(_QWORD *)(a2 + 32) = 0LL;
  *(_QWORD *)(a2 + 40) = 0LL;
  return v4;
}
