/*
 * XREFs of ??1?$PropertySetHelperBase@$1?RuntimeClass_Windows_Foundation_Collections_ValueSet@@3QBGB@Triggers@CreativeFramework@@QEAA@XZ @ 0x18004CA78
 * Callers:
 *     ??1ValueSetHelper@Triggers@CreativeFramework@@QEAA@XZ @ 0x18004D224 (--1ValueSetHelper@Triggers@CreativeFramework@@QEAA@XZ.c)
 *     ?SendAppServiceMessage@ContentManagementService@ContentManagement@@AEAAJW4TriggerId@Triggers@CreativeFramework@@V?$function@$$A6AJAEAVValueSetHelper@Triggers@CreativeFramework@@@Z@wistd@@@Z @ 0x180057E00 (-SendAppServiceMessage@ContentManagementService@ContentManagement@@AEAAJW4TriggerId@Triggers@Cre.c)
 *     ?EnumerateAllTriggersInContainer@Internal@TargetedContent@Services@Windows@@YA_NV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@V?$function@$$A6A_NV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@AEAVPropertySetHelper@Triggers@CreativeFramework@@@Z@6@@Z @ 0x180086838 (-EnumerateAllTriggersInContainer@Internal@TargetedContent@Services@Windows@@YA_NV-$shared_ptr@VI.c)
 *     ?SetTriggerRegistration@Internal@TargetedContent@Services@Windows@@YAJV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x1800885D4 (-SetTriggerRegistration@Internal@TargetedContent@Services@Windows@@YAJV-$shared_ptr@VISettingsCo.c)
 *     ?SetTriggerState@Internal@TargetedContent@Services@Windows@@YAXV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEAUITargetedContentTriggerInternal@1234@W4TargetedContentTriggerState@1234@@Z @ 0x180088F40 (-SetTriggerState@Internal@TargetedContent@Services@Windows@@YAXV-$shared_ptr@VISettingsContainer.c)
 *     ?_Destroy@?$_Ref_count_obj@VPropertySetHelper@Triggers@CreativeFramework@@@std@@EEAAXXZ @ 0x1800B9050 (-_Destroy@-$_Ref_count_obj@VPropertySetHelper@Triggers@CreativeFramework@@@std@@EEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180033C28 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall CreativeFramework::Triggers::PropertySetHelperBase<&unsigned short const near * const RuntimeClass_Windows_Foundation_Collections_ValueSet>::~PropertySetHelperBase<&unsigned short const near * const RuntimeClass_Windows_Foundation_Collections_ValueSet>(
        __int64 *a1)
{
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(a1 + 1);
  return Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(a1);
}
