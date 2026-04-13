/*
 * XREFs of ?MakeDiagTrackRuleSetHandler@RuleSetHandlers@CreativeFramework@@YA?AV?$shared_ptr@VIRuleSetHandler@RuleSetHandlers@CreativeFramework@@@std@@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@4@@Z @ 0x18008B6F0
 * Callers:
 *     ?RegisterTrigger@Internal@TargetedContent@Services@Windows@@YAXPEAUITargetedContentTriggerInternal@1234@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x18007E5D0 (-RegisterTrigger@Internal@TargetedContent@Services@Windows@@YAXPEAUITargetedContentTriggerIntern.c)
 *     ?RegisterTrigger@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@UEAAJPEAU?$IVectorView@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@5@PEAUHSTRING__@@1@Z @ 0x18007E790 (-RegisterTrigger@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@.c)
 *     ?UnregisterTrigger@Internal@TargetedContent@Services@Windows@@YAXPEAUITargetedContentTriggerInternal@1234@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x180080840 (-UnregisterTrigger@Internal@TargetedContent@Services@Windows@@YAXPEAUITargetedContentTriggerInte.c)
 *     ?UnregisterTrigger@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@UEAAJPEAU?$IVectorView@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@5@PEAUHSTRING__@@E@Z @ 0x180080A10 (-UnregisterTrigger@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Window.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18005A5D4 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$make_shared@VDiagTrackRuleSetHandler@RuleSetHandlers@CreativeFramework@@AEAV?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@std@@YA?AV?$shared_ptr@VDiagTrackRuleSetHandler@RuleSetHandlers@CreativeFramework@@@0@AEAV?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@0@@Z @ 0x18008AF44 (--$make_shared@VDiagTrackRuleSetHandler@RuleSetHandlers@CreativeFramework@@AEAV-$shared_ptr@VCor.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall CreativeFramework::RuleSetHandlers::MakeDiagTrackRuleSetHandler(_QWORD *a1, __int64 *a2)
{
  _QWORD *v4; // rax
  std::_Ref_count_base *v5; // rcx
  __int64 v7; // [rsp+28h] [rbp-20h] BYREF
  std::_Ref_count_base *v8; // [rsp+30h] [rbp-18h]

  v4 = std::make_shared<CreativeFramework::RuleSetHandlers::DiagTrackRuleSetHandler,std::shared_ptr<ContentDeliveryManager::Background::CorrelationVectorWrapper> &>(
         &v7,
         a2);
  *a1 = *v4;
  a1[1] = v4[1];
  *v4 = 0LL;
  v4[1] = 0LL;
  if ( v8 )
    std::_Ref_count_base::_Decref(v8);
  v5 = (std::_Ref_count_base *)a2[1];
  if ( v5 )
    std::_Ref_count_base::_Decref(v5);
  return a1;
}
