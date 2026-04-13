/*
 * XREFs of ??0?$_Tree_comp@$0A@V?$_Tmap_traits@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@2@Uless@Details@CommonHelper@CreativeFramework@@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@2@@std@@@2@$0A@@std@@@std@@QEAA@AEBUless@Details@CommonHelper@CreativeFramework@@AEBV?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@2@@std@@@1@@Z @ 0x1800B8788
 * Callers:
 *     ??$make_shared@VSettingsContainer@CommonHelper@CreativeFramework@@AEAPEAUIApplicationDataContainer@Storage@Windows@@@std@@YA?AV?$shared_ptr@VSettingsContainer@CommonHelper@CreativeFramework@@@0@AEAPEAUIApplicationDataContainer@Storage@Windows@@@Z @ 0x1800B85F4 (--$make_shared@VSettingsContainer@CommonHelper@CreativeFramework@@AEAPEAUIApplicationDataContain.c)
 *     ??0?$_Tree@V?$_Tmap_traits@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@2@Uless@Details@CommonHelper@CreativeFramework@@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@2@@std@@@2@$0A@@std@@@std@@QEAA@AEBV01@AEBV?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@2@@std@@@1@@Z @ 0x1800B86FC (--0-$_Tree@V-$_Tmap_traits@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@V-$s.c)
 * Callees:
 *     ?_Buyheadnode@?$_Tree_alloc@$0A@U?$_Tree_base_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VBaseScenarioEvents@details@Health@CreativeFramework@@@2@@std@@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VBaseScenarioEvents@details@Health@CreativeFramework@@@2@@std@@@2@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VBaseScenarioEvents@details@Health@CreativeFramework@@@2@@std@@PEAX@2@XZ @ 0x18005A320 (-_Buyheadnode@-$_Tree_alloc@$0A@U-$_Tree_base_types@U-$pair@$$CBV-$basic_string@GU-$char_traits@.c)
 */

_QWORD *__fastcall std::_Tree_comp<0,std::_Tmap_traits<std::wstring,std::shared_ptr<CreativeFramework::CommonHelper::ISettingsContainer>,CreativeFramework::CommonHelper::Details::less,std::allocator<std::pair<std::wstring const,std::shared_ptr<CreativeFramework::CommonHelper::ISettingsContainer>>>,0>>::_Tree_comp<0,std::_Tmap_traits<std::wstring,std::shared_ptr<CreativeFramework::CommonHelper::ISettingsContainer>,CreativeFramework::CommonHelper::Details::less,std::allocator<std::pair<std::wstring const,std::shared_ptr<CreativeFramework::CommonHelper::ISettingsContainer>>>,0>>(
        _QWORD *a1)
{
  *a1 = 0LL;
  a1[1] = 0LL;
  *a1 = std::_Tree_alloc<0,std::_Tree_base_types<std::pair<std::wstring const,std::shared_ptr<CreativeFramework::Health::details::BaseScenarioEvents>>>>::_Buyheadnode();
  return a1;
}
