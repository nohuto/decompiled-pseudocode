/*
 * XREFs of ?AddRef@CProtocolActivatedEventArgs@@UEAAKXZ @ 0x18032C650
 * Callers:
 *     ?AddRef@CProtocolActivatedEventArgs@@W7EAAKXZ @ 0x18032C6B0 (-AddRef@CProtocolActivatedEventArgs@@W7EAAKXZ.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIProtocolActivatedEventArgs@Activation@ApplicationModel@Windows@@UIProtocolActivatedEventArgsWithCallerPackageFamilyNameAndData@567@U?$CloakedIid@UIServiceProvider@@@23@U?$CloakedIid@UIValueMarshalByPropertySet@Internal@Marshaling@Foundation@Windows@@@23@VCWRLObjectWithGITSite@@VCActivatedEventArgsWithViewIdBase@@@Details@WRL@Microsoft@@WBA@EAAKXZ @ 0x18032C6C0 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIProtocolActivated.c)
 *     ?AddRef@CProtocolActivatedEventArgs@@WBI@EAAKXZ @ 0x18032C6D0 (-AddRef@CProtocolActivatedEventArgs@@WBI@EAAKXZ.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIProtocolActivatedEventArgs@Activation@ApplicationModel@Windows@@UIProtocolActivatedEventArgsWithCallerPackageFamilyNameAndData@567@U?$CloakedIid@UIServiceProvider@@@23@U?$CloakedIid@UIValueMarshalByPropertySet@Internal@Marshaling@Foundation@Windows@@@23@VCWRLObjectWithGITSite@@VCActivatedEventArgsWithViewIdBase@@@Details@WRL@Microsoft@@WCA@EAAKXZ @ 0x18032C6E0 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIProt_ea_18032C6E0.c)
 *     ?AddRef@CProtocolActivatedEventArgs@@WCI@EAAKXZ @ 0x18032C6F0 (-AddRef@CProtocolActivatedEventArgs@@WCI@EAAKXZ.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIProtocolActivatedEventArgs@Activation@ApplicationModel@Windows@@UIProtocolActivatedEventArgsWithCallerPackageFamilyNameAndData@567@U?$CloakedIid@UIServiceProvider@@@23@U?$CloakedIid@UIValueMarshalByPropertySet@Internal@Marshaling@Foundation@Windows@@@23@VCWRLObjectWithGITSite@@VCActivatedEventArgsWithViewIdBase@@@Details@WRL@Microsoft@@WFA@EAAKXZ @ 0x18032C700 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIProt_ea_18032C700.c)
 *     ?AddRef@CProtocolActivatedEventArgs@@WFI@EAAKXZ @ 0x18032C710 (-AddRef@CProtocolActivatedEventArgs@@WFI@EAAKXZ.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIProtocolActivatedEventArgs@Activation@ApplicationModel@Windows@@UIProtocolActivatedEventArgsWithCallerPackageFamilyNameAndData@567@U?$CloakedIid@UIServiceProvider@@@23@U?$CloakedIid@UIValueMarshalByPropertySet@Internal@Marshaling@Foundation@Windows@@@23@VCWRLObjectWithGITSite@@VCActivatedEventArgsWithViewIdBase@@@Details@WRL@Microsoft@@WGA@EAAKXZ @ 0x18032C720 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIProt_ea_18032C720.c)
 *     ?AddRef@CProtocolActivatedEventArgs@@WGI@EAAKXZ @ 0x18032C730 (-AddRef@CProtocolActivatedEventArgs@@WGI@EAAKXZ.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIProtocolActivatedEventArgs@Activation@ApplicationModel@Windows@@UIProtocolActivatedEventArgsWithCallerPackageFamilyNameAndData@567@U?$CloakedIid@UIServiceProvider@@@23@U?$CloakedIid@UIValueMarshalByPropertySet@Internal@Marshaling@Foundation@Windows@@@23@VCWRLObjectWithGITSite@@VCActivatedEventArgsWithViewIdBase@@@Details@WRL@Microsoft@@WHA@EAAKXZ @ 0x18032C740 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIProt_ea_18032C740.c)
 *     ?AddRef@CProtocolActivatedEventArgs@@WOI@EAAKXZ @ 0x18032C750 (-AddRef@CProtocolActivatedEventArgs@@WOI@EAAKXZ.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIProtocolActivatedEventArgs@Activation@ApplicationModel@Windows@@UIProtocolActivatedEventArgsWithCallerPackageFamilyNameAndData@567@U?$CloakedIid@UIServiceProvider@@@23@U?$CloakedIid@UIValueMarshalByPropertySet@Internal@Marshaling@Foundation@Windows@@@23@VCWRLObjectWithGITSite@@VCActivatedEventArgsWithViewIdBase@@@Details@WRL@Microsoft@@WPA@EAAKXZ @ 0x18032C770 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIProt_ea_18032C770.c)
 *     ?AddRef@CProtocolActivatedEventArgs@@WPI@EAAKXZ @ 0x18032C790 (-AddRef@CProtocolActivatedEventArgs@@WPI@EAAKXZ.c)
 * Callees:
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1800532A0 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 */

__int64 __fastcall CProtocolActivatedEventArgs::AddRef(CProtocolActivatedEventArgs *this)
{
  signed __int64 v1; // rax
  unsigned int v3; // ecx
  signed __int64 v4; // rtt

  v1 = *((_QWORD *)this + 38);
  while ( v1 >= 0 )
  {
    if ( (_DWORD)v1 == 0x7FFFFFFF )
      return 0x7FFFFFFF;
    v3 = v1 + 1;
    v4 = v1;
    v1 = _InterlockedCompareExchange64((volatile signed __int64 *)this + 38, v1 + 1, v1);
    if ( v4 == v1 )
      return v3;
  }
  return (unsigned int)Microsoft::WRL::Details::SafeUnknownIncrementReference(
                         (Microsoft::WRL::Details *)(2 * v1 + 16),
                         (volatile int *)((unsigned __int64)v1 >> 63));
}
