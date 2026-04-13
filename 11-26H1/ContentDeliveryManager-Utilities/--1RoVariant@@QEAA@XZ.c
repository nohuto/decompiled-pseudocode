/*
 * XREFs of ??1RoVariant@@QEAA@XZ @ 0x1800854C8
 * Callers:
 *     ??1OutRef@RoVariant@@QEAA@XZ @ 0x18008544C (--1OutRef@RoVariant@@QEAA@XZ.c)
 *     ?EnumerateAllTriggersInContainer@Internal@TargetedContent@Services@Windows@@YA_NV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@V?$function@$$A6A_NV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@AEAVPropertySetHelper@Triggers@CreativeFramework@@@Z@6@@Z @ 0x180086838 (-EnumerateAllTriggersInContainer@Internal@TargetedContent@Services@Windows@@YA_NV-$shared_ptr@VI.c)
 *     ?GetCompositeValue@?$PropertySetHelperBase@$1?RuntimeClass_Windows_Foundation_Collections_PropertySet@@3QB_WB@Triggers@CreativeFramework@@QEAAJPEAUHSTRING__@@PEAPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180087060 (-GetCompositeValue@-$PropertySetHelperBase@$1-RuntimeClass_Windows_Foundation_Collections_Proper.c)
 *     ?SetCompositeValue@?$PropertySetHelperBase@$1?RuntimeClass_Windows_Foundation_Collections_PropertySet@@3QB_WB@Triggers@CreativeFramework@@QEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18008836C (-SetCompositeValue@-$PropertySetHelperBase@$1-RuntimeClass_Windows_Foundation_Collections_Proper.c)
 *     _Windows::Services::TargetedContent::Internal::EnumerateAllTriggersInContainer_::_1_::dtor$8 @ 0x1800BCF2A (_Windows--Services--TargetedContent--Internal--EnumerateAllTriggersInContainer_--_1_--dtor$8.c)
 *     _CreativeFramework::Triggers::PropertySetHelperBase_&RuntimeClass_Windows_Foundation_Collections_PropertySet_::GetCompositeValue_::_1_::dtor$1 @ 0x1800BD002 (_CreativeFramework--Triggers--PropertySetHelperBase_-RuntimeClass_Windows_Foundatio_ea_1800BD002.c)
 *     _CreativeFramework::Triggers::PropertySetHelperBase_&RuntimeClass_Windows_Foundation_Collections_PropertySet_::SetCompositeValue_::_1_::dtor$1 @ 0x1800BD16D (_CreativeFramework--Triggers--PropertySetHelperBase_-RuntimeClass_Windows_Foundatio_ea_1800BD16D.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800C0010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall RoVariant::~RoVariant(RoVariant *this)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)this;
  if ( v2 && (*((_DWORD *)this + 2) == 3 || *((_DWORD *)this + 2) == 7) )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
}
