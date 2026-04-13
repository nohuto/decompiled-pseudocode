/*
 * XREFs of ?AlreadyRegistered@Internal@TargetedContent@Services@Windows@@YA_NV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x180085F14
 * Callers:
 *     ?RegisterTriggerInternal@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@AEAAJPEAUITargetedContentTriggerInternal@2345@PEAUHSTRING__@@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@V?$shared_ptr@VIRuleSetHandler@RuleSetHandlers@CreativeFramework@@@9@@Z @ 0x18007E9B4 (-RegisterTriggerInternal@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@.c)
 * Callees:
 *     ??0?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@QEAA@AEBV01@@Z @ 0x18004B840 (--0-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18005A5D4 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?CreateTriggerKey@Internal@TargetedContent@Services@Windows@@YA?AVHString@Wrappers@WRL@Microsoft@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x18008190C (-CreateTriggerKey@Internal@TargetedContent@Services@Windows@@YA-AVHString@Wrappers@WRL@Microsoft.c)
 *     ?AlreadyRegistered@Internal@TargetedContent@Services@Windows@@YA_NV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEB_W@Z @ 0x180085FA0 (-AlreadyRegistered@Internal@TargetedContent@Services@Windows@@YA_NV-$shared_ptr@VIS_ea_180085FA0.c)
 */

// Hidden C++ exception states: #wind=3
char __fastcall Windows::Services::TargetedContent::Internal::AlreadyRegistered(__int64 *a1, __int64 a2)
{
  PCWSTR StringRawBuffer; // rbx
  _QWORD *v4; // rax
  char v5; // bl
  std::_Ref_count_base *v6; // rcx
  _QWORD v8[3]; // [rsp+20h] [rbp-18h] BYREF
  HSTRING string; // [rsp+50h] [rbp+18h] BYREF

  Windows::Services::TargetedContent::Internal::CreateTriggerKey((Microsoft::WRL::Wrappers::HString *)&string, a2);
  StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
  v4 = std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>(
         v8,
         a1);
  v5 = Windows::Services::TargetedContent::Internal::AlreadyRegistered(v4, StringRawBuffer);
  WindowsDeleteString(string);
  string = 0LL;
  v6 = (std::_Ref_count_base *)a1[1];
  if ( v6 )
    std::_Ref_count_base::_Decref(v6);
  return v5;
}
