/*
 * XREFs of _lambda_0f325790d88d3e0e1d8faff7704602cc_::_lambda_0f325790d88d3e0e1d8faff7704602cc__0 @ 0x18007BA04
 * Callers:
 *     ?GetTriggeredItemsForStateAsync@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@UEAAJPEAUHSTRING__@@00PEAPEAU?$IAsyncOperation@PEAU?$IVectorView@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@Windows@@@Foundation@5@@Z @ 0x18007DC10 (-GetTriggeredItemsForStateAsync@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Se.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@VTargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@@WRL@Microsoft@@IEBAXXZ @ 0x1800447B8 (-InternalAddRef@-$ComPtr@VTargetedContentTriggerManagerStatics@Internal@TargetedContent@Services.c)
 *     ??0?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@QEAA@AEBV01@@Z @ 0x18004B840 (--0-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@QEAA@AEBV01@@Z.c)
 *     ??0?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x18007BB60 (--0-$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@_ea_18007BB60.c)
 */

__int64 __fastcall lambda_0f325790d88d3e0e1d8faff7704602cc_::_lambda_0f325790d88d3e0e1d8faff7704602cc__0(
        __int64 a1,
        volatile int *a2,
        __int64 *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 *a7)
{
  __int64 *v8; // rcx

  *(_QWORD *)a1 = a2;
  v8 = (__int64 *)(a1 + 8);
  *v8 = *a3;
  Microsoft::WRL::ComPtr<Windows::Services::TargetedContent::Internal::TargetedContentTriggerManagerStatics>::InternalAddRef(
    v8,
    a2);
  *(_QWORD *)(a1 + 16) = *(_QWORD *)a4;
  *(_QWORD *)a4 = 0LL;
  *(_BYTE *)(a1 + 24) = 0;
  *(_BYTE *)(a4 + 8) = 1;
  *(_QWORD *)(a1 + 32) = *(_QWORD *)a5;
  *(_QWORD *)a5 = 0LL;
  *(_BYTE *)(a1 + 40) = 0;
  *(_BYTE *)(a5 + 8) = 1;
  wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    a1 + 48,
    a6);
  *(_QWORD *)(a1 + 48) = &ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::TriggerManagerGetTriggeredItemsForStateActivity::`vftable';
  std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>(
    (_QWORD *)(a1 + 376),
    a7);
  return a1;
}
