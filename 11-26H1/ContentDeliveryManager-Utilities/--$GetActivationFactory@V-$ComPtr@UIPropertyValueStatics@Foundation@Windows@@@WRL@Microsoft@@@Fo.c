/*
 * XREFs of ??$GetActivationFactory@V?$ComPtr@UIPropertyValueStatics@Foundation@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIPropertyValueStatics@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18004651C
 * Callers:
 *     ?Initialize@?$PropertySetHelperBase@$1?RuntimeClass_Windows_Foundation_Collections_ValueSet@@3QBGB@Triggers@CreativeFramework@@AEAAJXZ @ 0x180053DC0 (-Initialize@-$PropertySetHelperBase@$1-RuntimeClass_Windows_Foundation_Collections_ValueSet@@3QB.c)
 *     ?Initialize@?$PropertySetHelperBase@$1?RuntimeClass_Windows_Foundation_Collections_PropertySet@@3QB_WB@Triggers@CreativeFramework@@AEAAJPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180087FDC (-Initialize@-$PropertySetHelperBase@$1-RuntimeClass_Windows_Foundation_Collections_PropertySet@@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180033C28 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Windows::Foundation::GetActivationFactory<Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValueStatics>>(
        __int64 a1,
        __int64 *a2)
{
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(a2);
  return RoGetActivationFactory(a1, &GUID_629bdbc8_d932_4ff4_96b9_8d96c5c1e858, a2);
}
