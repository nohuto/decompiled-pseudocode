/*
 * XREFs of ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIProtocolActivatedEventArgs@Activation@ApplicationModel@Windows@@UIProtocolActivatedEventArgsWithCallerPackageFamilyNameAndData@567@U?$CloakedIid@UIServiceProvider@@@23@U?$CloakedIid@UIValueMarshalByPropertySet@Internal@Marshaling@Foundation@Windows@@@23@VCWRLObjectWithGITSite@@VCActivatedEventArgsWithViewIdBase@@@Details@WRL@Microsoft@@WFI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18032F080
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::ApplicationModel::Activation::IProtocolActivatedEventArgs,Windows::ApplicationModel::Activation::IProtocolActivatedEventArgsWithCallerPackageFamilyNameAndData,Microsoft::WRL::CloakedIid<IServiceProvider>,Microsoft::WRL::CloakedIid<Windows::Foundation::Marshaling::Internal::IValueMarshalByPropertySet>,CWRLObjectWithGITSite,CActivatedEventArgsWithViewIdBase>::QueryInterface(
        __int64 a1,
        const struct _GUID *a2,
        void **a3)
{
  return CProtocolActivatedEventArgs::QueryInterface((CProtocolActivatedEventArgs *)(a1 - 88), a2, a3);
}
