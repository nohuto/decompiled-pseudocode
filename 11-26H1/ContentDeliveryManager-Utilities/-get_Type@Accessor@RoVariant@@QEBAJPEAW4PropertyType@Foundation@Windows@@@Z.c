/*
 * XREFs of ?get_Type@Accessor@RoVariant@@QEBAJPEAW4PropertyType@Foundation@Windows@@@Z @ 0x180089F24
 * Callers:
 *     ?EnumerateAllTriggersInContainer@Internal@TargetedContent@Services@Windows@@YA_NV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@V?$function@$$A6A_NV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@AEAVPropertySetHelper@Triggers@CreativeFramework@@@Z@6@@Z @ 0x180086838 (-EnumerateAllTriggersInContainer@Internal@TargetedContent@Services@Windows@@YA_NV-$shared_ptr@VI.c)
 *     ?GetCompositeValue@?$PropertySetHelperBase@$1?RuntimeClass_Windows_Foundation_Collections_PropertySet@@3QB_WB@Triggers@CreativeFramework@@QEAAJPEAUHSTRING__@@PEAPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180087060 (-GetCompositeValue@-$PropertySetHelperBase@$1-RuntimeClass_Windows_Foundation_Collections_Proper.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800C0010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall RoVariant::Accessor::get_Type(RoVariant::Accessor *this, enum Windows::Foundation::PropertyType *a2)
{
  int v2; // r8d
  unsigned int v3; // ebx
  int v5; // r8d
  int v6; // eax

  v2 = *((_DWORD *)this + 2);
  v3 = 0;
  if ( v2 < 0 )
    return (unsigned int)v2;
  if ( !v2 )
    goto LABEL_10;
  v5 = v2 - 1;
  if ( !v5 || v5 == 2 )
  {
    v3 = 13;
LABEL_10:
    *(_DWORD *)a2 = v3;
    return 0LL;
  }
  v6 = (*(__int64 (__fastcall **)(_QWORD, enum Windows::Foundation::PropertyType *))(**(_QWORD **)this + 48LL))(
         *(_QWORD *)this,
         a2);
  if ( v6 < 0 )
    return (unsigned int)v6;
  return v3;
}
