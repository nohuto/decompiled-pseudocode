/*
 * XREFs of ??1?$ComPtr@VCProtocolActivatedEventArgs@@@WRL@Microsoft@@QEAA@XZ @ 0x180328CD4
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_CProtocolActivatedEventArgs_Windows::ApplicationModel::Activation::IProtocolActivatedEventArgs_Windows::Foundation::IUriRuntimeClass____::_1_::dtor$2 @ 0x1806E1A39 (_Microsoft--WRL--Details--MakeAndInitialize_CProtocolActivatedEventArgs_Windows--ApplicationMode.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIProtocolActivatedEventArgs@Activation@ApplicationModel@Windows@@UIProtocolActivatedEventArgsWithCallerPackageFamilyNameAndData@567@U?$CloakedIid@UIServiceProvider@@@23@U?$CloakedIid@UIValueMarshalByPropertySet@Internal@Marshaling@Foundation@Windows@@@23@VCWRLObjectWithGITSite@@VCActivatedEventArgsWithViewIdBase@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18032D4F0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIProtocolActivate.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<CProtocolActivatedEventArgs>::~ComPtr<CProtocolActivatedEventArgs>(
        __int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::ApplicationModel::Activation::IProtocolActivatedEventArgs,Windows::ApplicationModel::Activation::IProtocolActivatedEventArgsWithCallerPackageFamilyNameAndData,Microsoft::WRL::CloakedIid<IServiceProvider>,Microsoft::WRL::CloakedIid<Windows::Foundation::Marshaling::Internal::IValueMarshalByPropertySet>,CWRLObjectWithGITSite,CActivatedEventArgsWithViewIdBase>::Release(result);
  }
  return result;
}
