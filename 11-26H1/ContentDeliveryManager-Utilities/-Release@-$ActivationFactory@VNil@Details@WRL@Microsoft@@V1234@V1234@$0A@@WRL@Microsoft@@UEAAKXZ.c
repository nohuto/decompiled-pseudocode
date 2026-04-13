/*
 * XREFs of ?Release@?$ActivationFactory@VNil@Details@WRL@Microsoft@@V1234@V1234@$0A@@WRL@Microsoft@@UEAAKXZ @ 0x180045120
 * Callers:
 *     ??$CreateActivationFactory@V?$SimpleSealedActivationFactory@VAppInstallInfoRecordImpl@ContentManagement@@$0A@@WRL@Microsoft@@@Details@WRL@Microsoft@@YAJPEAIPEBUCreatorMap@012@AEBU_GUID@@PEAPEAUIUnknown@@@Z @ 0x180041290 (--$CreateActivationFactory@V-$SimpleSealedActivationFactory@VAppInstallInfoRecordImpl@ContentMan.c)
 *     ??$CreateActivationFactory@V?$SimpleSealedActivationFactory@VContentManagementBrokerServer@ContentManagement@@$0A@@WRL@Microsoft@@@Details@WRL@Microsoft@@YAJPEAIPEBUCreatorMap@012@AEBU_GUID@@PEAPEAUIUnknown@@@Z @ 0x180041340 (--$CreateActivationFactory@V-$SimpleSealedActivationFactory@VContentManagementBrokerServer@Conte.c)
 *     ??$CreateActivationFactory@V?$SimpleSealedActivationFactory@VContentManagementService@ContentManagement@@$0A@@WRL@Microsoft@@@Details@WRL@Microsoft@@YAJPEAIPEBUCreatorMap@012@AEBU_GUID@@PEAPEAUIUnknown@@@Z @ 0x1800413F0 (--$CreateActivationFactory@V-$SimpleSealedActivationFactory@VContentManagementService@ContentMan.c)
 *     ??$CreateActivationFactory@V?$SimpleSealedActivationFactory@VTargetedContentTriggerImpl@Internal@TargetedContent@Services@Windows@@$0A@@WRL@Microsoft@@@Details@WRL@Microsoft@@YAJPEAIPEBUCreatorMap@012@AEBU_GUID@@PEAPEAUIUnknown@@@Z @ 0x1800414A0 (--$CreateActivationFactory@V-$SimpleSealedActivationFactory@VTargetedContentTriggerImpl@Internal.c)
 *     ??$CreateActivationFactory@V?$SimpleSealedActivationFactory@VTargetedContentTriggerStateTransitionImpl@Internal@TargetedContent@Services@Windows@@$0A@@WRL@Microsoft@@@Details@WRL@Microsoft@@YAJPEAIPEBUCreatorMap@012@AEBU_GUID@@PEAPEAUIUnknown@@@Z @ 0x180041550 (--$CreateActivationFactory@V-$SimpleSealedActivationFactory@VTargetedContentTriggerStateTransiti.c)
 *     ??$MakeAndInitialize@V?$SimpleSealedActivationFactory@VAppInstallInfoRecordImpl@ContentManagement@@$0A@@WRL@Microsoft@@V123@$$V@Details@WRL@Microsoft@@YAJPEAPEAV?$SimpleSealedActivationFactory@VAppInstallInfoRecordImpl@ContentManagement@@$0A@@12@@Z @ 0x180041C34 (--$MakeAndInitialize@V-$SimpleSealedActivationFactory@VAppInstallInfoRecordImpl@ContentManagemen.c)
 *     ??$MakeAndInitialize@V?$SimpleSealedActivationFactory@VContentManagementBrokerServer@ContentManagement@@$0A@@WRL@Microsoft@@V123@$$V@Details@WRL@Microsoft@@YAJPEAPEAV?$SimpleSealedActivationFactory@VContentManagementBrokerServer@ContentManagement@@$0A@@12@@Z @ 0x180041CBC (--$MakeAndInitialize@V-$SimpleSealedActivationFactory@VContentManagementBrokerServer@ContentMana.c)
 *     ??$MakeAndInitialize@V?$SimpleSealedActivationFactory@VContentManagementService@ContentManagement@@$0A@@WRL@Microsoft@@V123@$$V@Details@WRL@Microsoft@@YAJPEAPEAV?$SimpleSealedActivationFactory@VContentManagementService@ContentManagement@@$0A@@12@@Z @ 0x180041D44 (--$MakeAndInitialize@V-$SimpleSealedActivationFactory@VContentManagementService@ContentManagemen.c)
 *     ??$MakeAndInitialize@V?$SimpleSealedActivationFactory@VTargetedContentTriggerImpl@Internal@TargetedContent@Services@Windows@@$0A@@WRL@Microsoft@@V123@$$V@Details@WRL@Microsoft@@YAJPEAPEAV?$SimpleSealedActivationFactory@VTargetedContentTriggerImpl@Internal@TargetedContent@Services@Windows@@$0A@@12@@Z @ 0x180041DCC (--$MakeAndInitialize@V-$SimpleSealedActivationFactory@VTargetedContentTriggerImpl@Internal@Targe.c)
 *     ??$MakeAndInitialize@V?$SimpleSealedActivationFactory@VTargetedContentTriggerStateTransitionImpl@Internal@TargetedContent@Services@Windows@@$0A@@WRL@Microsoft@@V123@$$V@Details@WRL@Microsoft@@YAJPEAPEAV?$SimpleSealedActivationFactory@VTargetedContentTriggerStateTransitionImpl@Internal@TargetedContent@Services@Windows@@$0A@@12@@Z @ 0x180041E54 (--$MakeAndInitialize@V-$SimpleSealedActivationFactory@VTargetedContentTriggerStateTransitionImpl.c)
 *     ??$CreateActivationFactory@V?$SimpleSealedActivationFactory@VContentDeliveryManagerAppInfoProvider@ApplicationModel@Extensions@Internal@Windows@@$0A@@WRL@Microsoft@@@Details@WRL@Microsoft@@YAJPEAIPEBUCreatorMap@012@AEBU_GUID@@PEAPEAUIUnknown@@@Z @ 0x1800AA590 (--$CreateActivationFactory@V-$SimpleSealedActivationFactory@VContentDeliveryManagerAppInfoProvid.c)
 *     ??$MakeAndInitialize@V?$SimpleSealedActivationFactory@VContentDeliveryManagerAppInfoProvider@ApplicationModel@Extensions@Internal@Windows@@$0A@@WRL@Microsoft@@V123@$$V@Details@WRL@Microsoft@@YAJPEAPEAV?$SimpleSealedActivationFactory@VContentDeliveryManagerAppInfoProvider@ApplicationModel@Extensions@Internal@Windows@@$0A@@12@@Z @ 0x1800AA640 (--$MakeAndInitialize@V-$SimpleSealedActivationFactory@VContentDeliveryManagerAppInfoProvider@App.c)
 * Callees:
 *     ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18003AC1C (-SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800C0010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::ActivationFactory<Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::Release(
        __int64 a1,
        volatile int *a2)
{
  unsigned int v2; // edi
  _DWORD *v3; // r10
  int v4; // ebx
  struct Microsoft::WRL::Details::ModuleBase *v5; // rcx

  v2 = Microsoft::WRL::Details::SafeUnknownDecrementReference((Microsoft::WRL::Details *)(a1 + 12), a2);
  v4 = v3[8] & 4;
  if ( v2 )
  {
    if ( v4 || v2 != 1 )
      return v2;
    v5 = Microsoft::WRL::Details::ModuleBase::module_;
    goto LABEL_9;
  }
  if ( v3 )
    (*(void (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)v3 + 56LL))(v3, 1LL);
  v5 = Microsoft::WRL::Details::ModuleBase::module_;
  if ( v4 )
  {
LABEL_9:
    if ( v5 )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)v5 + 16LL))(v5);
  }
  return v2;
}
