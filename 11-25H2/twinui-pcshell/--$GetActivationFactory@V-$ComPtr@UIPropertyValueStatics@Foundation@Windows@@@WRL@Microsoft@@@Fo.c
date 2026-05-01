/*
 * XREFs of ??$GetActivationFactory@V?$ComPtr@UIPropertyValueStatics@Foundation@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIPropertyValueStatics@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x1801FCE10
 * Callers:
 *     _lambda_d7884d2305cb98080a7771b114819b2a_::operator() @ 0x18042E954 (_lambda_d7884d2305cb98080a7771b114819b2a_--operator().c)
 *     _lambda_993f706d182f480392a468d901dd08e8_::operator() @ 0x180439968 (_lambda_993f706d182f480392a468d901dd08e8_--operator().c)
 *     ??$UsePropertyFactory@V_lambda_f0b0058c35c91142d2603957657c1ded_@@@?$EffectBase@UIGaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@@@Effects@Composition@UI@Internal@Microsoft@@KAJAEBV_lambda_f0b0058c35c91142d2603957657c1ded_@@@Z @ 0x180537F30 (--$UsePropertyFactory@V_lambda_f0b0058c35c91142d2603957657c1ded_@@@-$EffectBase@UIGaussianBlurEf.c)
 *     ?MarshalObjectToPropertySet@CProtocolActivatedEventArgs@@UEAAJPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180652D60 (-MarshalObjectToPropertySet@CProtocolActivatedEventArgs@@UEAAJPEAUIPropertySet@Collections@Found.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 */

__int64 __fastcall Windows::Foundation::GetActivationFactory<Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValueStatics>>(
        __int64 a1,
        __int64 *a2)
{
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(a2);
  return RoGetActivationFactory(a1, &GUID_629bdbc8_d932_4ff4_96b9_8d96c5c1e858, a2);
}
