/*
 * XREFs of ??0?$ActivationFactory@VNil@Details@WRL@Microsoft@@V1234@V1234@$0A@@WRL@Microsoft@@QEAA@XZ @ 0x1800424DC
 * Callers:
 *     ??$MakeAndInitialize@V?$SimpleSealedActivationFactory@VAppInstallInfoRecordImpl@ContentManagement@@$0A@@WRL@Microsoft@@V123@$$V@Details@WRL@Microsoft@@YAJPEAPEAV?$SimpleSealedActivationFactory@VAppInstallInfoRecordImpl@ContentManagement@@$0A@@12@@Z @ 0x180041C34 (--$MakeAndInitialize@V-$SimpleSealedActivationFactory@VAppInstallInfoRecordImpl@ContentManagemen.c)
 *     ??$MakeAndInitialize@V?$SimpleSealedActivationFactory@VContentManagementBrokerServer@ContentManagement@@$0A@@WRL@Microsoft@@V123@$$V@Details@WRL@Microsoft@@YAJPEAPEAV?$SimpleSealedActivationFactory@VContentManagementBrokerServer@ContentManagement@@$0A@@12@@Z @ 0x180041CBC (--$MakeAndInitialize@V-$SimpleSealedActivationFactory@VContentManagementBrokerServer@ContentMana.c)
 *     ??$MakeAndInitialize@V?$SimpleSealedActivationFactory@VContentManagementService@ContentManagement@@$0A@@WRL@Microsoft@@V123@$$V@Details@WRL@Microsoft@@YAJPEAPEAV?$SimpleSealedActivationFactory@VContentManagementService@ContentManagement@@$0A@@12@@Z @ 0x180041D44 (--$MakeAndInitialize@V-$SimpleSealedActivationFactory@VContentManagementService@ContentManagemen.c)
 *     ??$MakeAndInitialize@V?$SimpleSealedActivationFactory@VTargetedContentTriggerImpl@Internal@TargetedContent@Services@Windows@@$0A@@WRL@Microsoft@@V123@$$V@Details@WRL@Microsoft@@YAJPEAPEAV?$SimpleSealedActivationFactory@VTargetedContentTriggerImpl@Internal@TargetedContent@Services@Windows@@$0A@@12@@Z @ 0x180041DCC (--$MakeAndInitialize@V-$SimpleSealedActivationFactory@VTargetedContentTriggerImpl@Internal@Targe.c)
 *     ??$MakeAndInitialize@V?$SimpleSealedActivationFactory@VTargetedContentTriggerStateTransitionImpl@Internal@TargetedContent@Services@Windows@@$0A@@WRL@Microsoft@@V123@$$V@Details@WRL@Microsoft@@YAJPEAPEAV?$SimpleSealedActivationFactory@VTargetedContentTriggerStateTransitionImpl@Internal@TargetedContent@Services@Windows@@$0A@@12@@Z @ 0x180041E54 (--$MakeAndInitialize@V-$SimpleSealedActivationFactory@VTargetedContentTriggerStateTransitionImpl.c)
 *     ??$MakeAndInitialize@V?$SimpleSealedActivationFactory@VContentDeliveryManagerAppInfoProvider@ApplicationModel@Extensions@Internal@Windows@@$0A@@WRL@Microsoft@@V123@$$V@Details@WRL@Microsoft@@YAJPEAPEAV?$SimpleSealedActivationFactory@VContentDeliveryManagerAppInfoProvider@ApplicationModel@Extensions@Internal@Windows@@$0A@@12@@Z @ 0x1800AA640 (--$MakeAndInitialize@V-$SimpleSealedActivationFactory@VContentDeliveryManagerAppInfoProvider@App.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$InterfaceListHelper@UIActivationFactory@@VNil@Details@WRL@Microsoft@@V2345@V2345@V2345@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$0N@@34@$0A@$00$0A@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180042550 (--0-$RuntimeClass@U-$InterfaceListHelper@UIActivationFactory@@VNil@Details@WRL@Microsoft@@V2345@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800C0010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::ActivationFactory<Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::ActivationFactory<Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>(
        __int64 a1)
{
  Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceListHelper<IActivationFactory,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<13>,0,1,0>::RuntimeClass<Microsoft::WRL::Details::InterfaceListHelper<IActivationFactory,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<13>,0,1,0>();
  *(_QWORD *)a1 = &Microsoft::WRL::ActivationFactory<Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::`vftable';
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_DWORD *)(a1 + 32) = 4;
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  return a1;
}
