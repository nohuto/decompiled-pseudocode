/*
 * XREFs of ?EnumerateTriggersWithStateInContainer@Internal@TargetedContent@Services@Windows@@YAXV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@W4TargetedContentTriggerState@1234@V?$function@$$A6A_NAEAVPropertySetHelper@Triggers@CreativeFramework@@@Z@6@@Z @ 0x180086F88
 * Callers:
 *     ?AllTriggersExecutedForTriggerType@Internal@TargetedContent@Services@Windows@@YA_NPEAUITargetedContentTriggerInternal@1234@_N@Z @ 0x180085DF8 (-AllTriggersExecutedForTriggerType@Internal@TargetedContent@Services@Windows@@YA_NPEAUITargetedC.c)
 *     ?GetTriggeredRegistration@Internal@TargetedContent@Services@Windows@@YAJV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEAPEAU?$IVector@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@4@@Z @ 0x180087DC0 (-GetTriggeredRegistration@Internal@TargetedContent@Services@Windows@@YAJV-$shared_ptr@VISettings.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180004554 (--2@YAPEAX_K@Z.c)
 *     ?_Xbad_alloc@std@@YAXXZ @ 0x180004758 (-_Xbad_alloc@std@@YAXXZ.c)
 *     ??0?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@QEAA@AEBV01@@Z @ 0x18004B840 (--0-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@QEAA@AEBV01@@Z.c)
 *     ??1?$function@$$A6AXPEAUITargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z@std@@QEAA@XZ @ 0x18004CEC0 (--1-$function@$$A6AXPEAUITargetedContentTriggerInternal@Internal@TargetedContent@Services@Window.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18005A5D4 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?ResolveNameFromTriggerState@Internal@TargetedContent@Services@Windows@@YAPEB_WW4TargetedContentTriggerState@1234@@Z @ 0x180083360 (-ResolveNameFromTriggerState@Internal@TargetedContent@Services@Windows@@YAPEB_WW4TargetedContent.c)
 *     ?EnumerateAllTriggersInContainer@Internal@TargetedContent@Services@Windows@@YA_NV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@V?$function@$$A6A_NV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@AEAVPropertySetHelper@Triggers@CreativeFramework@@@Z@6@@Z @ 0x180086838 (-EnumerateAllTriggersInContainer@Internal@TargetedContent@Services@Windows@@YA_NV-$shared_ptr@VI.c)
 *     __security_check_cookie @ 0x1800B9110 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Windows::Services::TargetedContent::Internal::EnumerateTriggersWithStateInContainer(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  _QWORD *v5; // rax
  __int64 *v6; // rax
  std::_Ref_count_base *v7; // rcx
  _QWORD v9[3]; // [rsp+20h] [rbp-60h] BYREF
  __int64 v10; // [rsp+38h] [rbp-48h] BYREF
  _BYTE v11[24]; // [rsp+48h] [rbp-38h] BYREF
  _QWORD *v12; // [rsp+60h] [rbp-20h]
  __int64 v13; // [rsp+68h] [rbp-18h]

  v9[2] = a1;
  v13 = a3;
  v9[0] = Windows::Services::TargetedContent::Internal::ResolveNameFromTriggerState(2);
  v9[1] = v11;
  v12 = 0LL;
  v5 = operator new(0x20uLL);
  if ( !v5 )
    std::_Xbad_alloc();
  *v5 = off_1800CA008;
  v5[1] = v9;
  v5[2] = a3;
  v12 = v5;
  v6 = std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>(
         &v10,
         a1);
  Windows::Services::TargetedContent::Internal::EnumerateAllTriggersInContainer(v6, (__int64)v11);
  v7 = (std::_Ref_count_base *)a1[1];
  if ( v7 )
    std::_Ref_count_base::_Decref(v7);
  return std::function<void (Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal *,std::shared_ptr<ContentDeliveryManager::Background::CorrelationVectorWrapper>)>::~function<void (Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal *,std::shared_ptr<ContentDeliveryManager::Background::CorrelationVectorWrapper>)>(a3);
}
