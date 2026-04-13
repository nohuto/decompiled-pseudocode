/*
 * XREFs of ??0PropertySetHelper@Triggers@CreativeFramework@@QEAA@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800851C8
 * Callers:
 *     ?EnumerateAllTriggersInContainer@Internal@TargetedContent@Services@Windows@@YA_NV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@V?$function@$$A6A_NV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@AEAVPropertySetHelper@Triggers@CreativeFramework@@@Z@6@@Z @ 0x180086838 (-EnumerateAllTriggersInContainer@Internal@TargetedContent@Services@Windows@@YA_NV-$shared_ptr@VI.c)
 *     ?SetTriggerRegistration@Internal@TargetedContent@Services@Windows@@YAJV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x1800885D4 (-SetTriggerRegistration@Internal@TargetedContent@Services@Windows@@YAJV-$shared_ptr@VISettingsCo.c)
 *     ?SetTriggerState@Internal@TargetedContent@Services@Windows@@YAXV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEAUITargetedContentTriggerInternal@1234@W4TargetedContentTriggerState@1234@@Z @ 0x180088F40 (-SetTriggerState@Internal@TargetedContent@Services@Windows@@YAXV-$shared_ptr@VISettingsContainer.c)
 *     ?GetValues@SettingsContainer@CommonHelper@CreativeFramework@@UEAA?AV?$shared_ptr@VPropertySetHelper@Triggers@CreativeFramework@@@std@@XZ @ 0x1800B8B40 (-GetValues@SettingsContainer@CommonHelper@CreativeFramework@@UEAA-AV-$shared_ptr@VPropertySetHel.c)
 * Callees:
 *     ?Initialize@?$PropertySetHelperBase@$1?RuntimeClass_Windows_Foundation_Collections_PropertySet@@3QB_WB@Triggers@CreativeFramework@@AEAAJPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180087FDC (-Initialize@-$PropertySetHelperBase@$1-RuntimeClass_Windows_Foundation_Collections_PropertySet@@.c)
 */

CreativeFramework::Triggers::PropertySetHelper *__fastcall CreativeFramework::Triggers::PropertySetHelper::PropertySetHelper(
        CreativeFramework::Triggers::PropertySetHelper *this,
        struct Windows::Foundation::Collections::IPropertySet *a2)
{
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_DWORD *)this + 4) = CreativeFramework::Triggers::PropertySetHelperBase<&wchar_t const near * const RuntimeClass_Windows_Foundation_Collections_PropertySet>::Initialize(
                            this,
                            a2);
  return this;
}
