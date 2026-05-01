/*
 * XREFs of ?Release@CProtocolActivatedEventArgs@@UEAAKXZ @ 0x18032D7E0
 * Callers:
 *     ?Release@CProtocolActivatedEventArgs@@W7EAAKXZ @ 0x18032D7F0 (-Release@CProtocolActivatedEventArgs@@W7EAAKXZ.c)
 *     ?Release@CProtocolActivatedEventArgs@@WBA@EAAKXZ @ 0x18032D800 (-Release@CProtocolActivatedEventArgs@@WBA@EAAKXZ.c)
 *     ?Release@CProtocolActivatedEventArgs@@WBI@EAAKXZ @ 0x18032D810 (-Release@CProtocolActivatedEventArgs@@WBI@EAAKXZ.c)
 *     ?Release@CProtocolActivatedEventArgs@@WCA@EAAKXZ @ 0x18032D820 (-Release@CProtocolActivatedEventArgs@@WCA@EAAKXZ.c)
 *     ?Release@CProtocolActivatedEventArgs@@WCI@EAAKXZ @ 0x18032D830 (-Release@CProtocolActivatedEventArgs@@WCI@EAAKXZ.c)
 *     ?Release@CProtocolActivatedEventArgs@@WFA@EAAKXZ @ 0x18032D840 (-Release@CProtocolActivatedEventArgs@@WFA@EAAKXZ.c)
 *     ?Release@CProtocolActivatedEventArgs@@WFI@EAAKXZ @ 0x18032D850 (-Release@CProtocolActivatedEventArgs@@WFI@EAAKXZ.c)
 *     ?Release@CProtocolActivatedEventArgs@@WGA@EAAKXZ @ 0x18032D860 (-Release@CProtocolActivatedEventArgs@@WGA@EAAKXZ.c)
 *     ?Release@CProtocolActivatedEventArgs@@WGI@EAAKXZ @ 0x18032D870 (-Release@CProtocolActivatedEventArgs@@WGI@EAAKXZ.c)
 *     ?Release@CProtocolActivatedEventArgs@@WHA@EAAKXZ @ 0x18032D880 (-Release@CProtocolActivatedEventArgs@@WHA@EAAKXZ.c)
 *     ?Release@CProtocolActivatedEventArgs@@WOI@EAAKXZ @ 0x18032D890 (-Release@CProtocolActivatedEventArgs@@WOI@EAAKXZ.c)
 *     ?Release@CProtocolActivatedEventArgs@@WPA@EAAKXZ @ 0x18032D8B0 (-Release@CProtocolActivatedEventArgs@@WPA@EAAKXZ.c)
 *     ?Release@CProtocolActivatedEventArgs@@WPI@EAAKXZ @ 0x18032D8D0 (-Release@CProtocolActivatedEventArgs@@WPI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CProtocolActivatedEventArgs::Release(__int64 this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::ApplicationModel::Activation::IProtocolActivatedEventArgs,Windows::ApplicationModel::Activation::IProtocolActivatedEventArgsWithCallerPackageFamilyNameAndData,Microsoft::WRL::CloakedIid<IServiceProvider>,Microsoft::WRL::CloakedIid<Windows::Foundation::Marshaling::Internal::IValueMarshalByPropertySet>,CWRLObjectWithGITSite,CActivatedEventArgsWithViewIdBase>::Release(this);
}
