/*
 * XREFs of ?AllTriggersExecutedForTriggerType@Internal@TargetedContent@Services@Windows@@YA_NPEAUITargetedContentTriggerInternal@1234@_N@Z @ 0x180085DF8
 * Callers:
 *     ?UnregisterTrigger@Internal@TargetedContent@Services@Windows@@YAXPEAUITargetedContentTriggerInternal@1234@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x180080840 (-UnregisterTrigger@Internal@TargetedContent@Services@Windows@@YAXPEAUITargetedContentTriggerInte.c)
 *     ?UnregisterTriggerInternal@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@AEAAJPEAUITargetedContentTriggerInternal@2345@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@EV?$shared_ptr@VIRuleSetHandler@RuleSetHandlers@CreativeFramework@@@8@@Z @ 0x180080C14 (-UnregisterTriggerInternal@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Service.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E0D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@QEAA@$$QEAV01@@Z @ 0x18004B7AC (--0-$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@QEAA@$$QEAV01.c)
 *     ??0?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@QEAA@AEBV01@@Z @ 0x18004B840 (--0-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18005A5D4 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?EnumerateTriggersWithStateInContainer@Internal@TargetedContent@Services@Windows@@YAXV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@W4TargetedContentTriggerState@1234@V?$function@$$A6A_NAEAVPropertySetHelper@Triggers@CreativeFramework@@@Z@6@@Z @ 0x180086F88 (-EnumerateTriggersWithStateInContainer@Internal@TargetedContent@Services@Windows@@YAXV-$shared_p.c)
 *     ?GetRootRegistrationSettingsForTriggerContainer@Internal@TargetedContent@Services@Windows@@YA?AV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@W4TargetedContentKnownTrigger@1234@@Z @ 0x18008726C (-GetRootRegistrationSettingsForTriggerContainer@Internal@TargetedContent@Services@Windows@@YA-AV.c)
 *     ?GetTriggerSettingsContainer@Internal@TargetedContent@Services@Windows@@YA?AV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x180087484 (-GetTriggerSettingsContainer@Internal@TargetedContent@Services@Windows@@YA-AV-$shared_ptr@VISett.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800C0010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=7
char __fastcall Windows::Services::TargetedContent::Internal::AllTriggersExecutedForTriggerType(
        Windows::Services::TargetedContent::Internal *this,
        struct Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal *a2)
{
  char v2; // di
  int v4; // eax
  __int64 *RootRegistrationSettingsForTriggerContainer; // rax
  int v6; // ebx
  _QWORD *v7; // rax
  __int64 v8; // rdx
  char v9; // bl
  __int64 v11; // [rsp+20h] [rbp-60h] BYREF
  std::_Ref_count_base *v12; // [rsp+28h] [rbp-58h]
  char v13[8]; // [rsp+30h] [rbp-50h] BYREF
  std::_Ref_count_base *v14; // [rsp+38h] [rbp-48h]
  char v15[8]; // [rsp+40h] [rbp-40h] BYREF
  std::_Ref_count_base *v16; // [rsp+48h] [rbp-38h]
  __int64 v17; // [rsp+50h] [rbp-30h] BYREF
  _QWORD v18[4]; // [rsp+60h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]
  char v20; // [rsp+A0h] [rbp+20h] BYREF
  unsigned int v21; // [rsp+B0h] [rbp+30h] BYREF
  _QWORD *v22; // [rsp+B8h] [rbp+38h]

  v2 = (char)a2;
  LODWORD(v22) = 0;
  v21 = 0;
  v4 = (*(__int64 (__fastcall **)(Windows::Services::TargetedContent::Internal *, unsigned int *))(*(_QWORD *)this + 80LL))(
         this,
         &v21);
  if ( v4 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      303LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
      (const char *)(unsigned int)v4,
      v11);
  if ( v2 )
  {
    RootRegistrationSettingsForTriggerContainer = (__int64 *)Windows::Services::TargetedContent::Internal::GetRootRegistrationSettingsForTriggerContainer(
                                                               v15,
                                                               v21);
    v6 = 1;
  }
  else
  {
    RootRegistrationSettingsForTriggerContainer = (__int64 *)Windows::Services::TargetedContent::Internal::GetTriggerSettingsContainer(
                                                               v13,
                                                               this);
    v6 = 2;
  }
  std::shared_ptr<ContentDeliveryManager::Background::CorrelationVectorWrapper>::shared_ptr<ContentDeliveryManager::Background::CorrelationVectorWrapper>(
    &v11,
    RootRegistrationSettingsForTriggerContainer);
  if ( (v6 & 2) != 0 )
  {
    v6 &= ~2u;
    LODWORD(v22) = v6;
    if ( v14 )
      std::_Ref_count_base::_Decref(v14);
  }
  if ( (v6 & 1) != 0 && v16 )
    std::_Ref_count_base::_Decref(v16);
  v20 = 1;
  v22 = v18;
  v18[0] = off_1800C9F60;
  v18[1] = &v20;
  v18[3] = v18;
  v7 = std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>(
         &v17,
         &v11);
  Windows::Services::TargetedContent::Internal::EnumerateTriggersWithStateInContainer(v7, v8, v18);
  v9 = v20;
  if ( v12 )
    std::_Ref_count_base::_Decref(v12);
  return v9;
}
