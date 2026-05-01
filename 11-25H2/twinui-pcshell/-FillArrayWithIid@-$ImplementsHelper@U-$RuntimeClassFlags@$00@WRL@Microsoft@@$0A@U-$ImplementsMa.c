/*
 * XREFs of ?FillArrayWithIid@?$ImplementsHelper@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$0A@U?$ImplementsMarker@VViewHostItemEventArgsBase@@@Details@23@UIWeakReferenceSource@@@Details@WRL@Microsoft@@IEAAXPEAKPEAU_GUID@@@Z @ 0x1803F8B3C
 * Callers:
 *     ?GetIids@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VViewHostItemEventArgsBase@@@Details@WRL@Microsoft@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x1803F8FF0 (-GetIids@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VViewHostItemEvent.c)
 * Callees:
 *     ?FillArrayWithIid@?$Implements@U?$RuntimeClassFlags@$00@WRL@Microsoft@@UIViewHostItemEventArgs@Holographic@Shell@Internal@Windows@@VFtmBase@23@@WRL@Microsoft@@IEAAXPEAKPEAU_GUID@@@Z @ 0x1803F8B00 (-FillArrayWithIid@-$Implements@U-$RuntimeClassFlags@$00@WRL@Microsoft@@UIViewHostItemEventArgs@H.c)
 */

__int64 Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,0,Microsoft::WRL::Details::ImplementsMarker<ViewHostItemEventArgsBase>,IWeakReferenceSource>::FillArrayWithIid()
{
  unsigned int *v0; // rdx
  int v1; // r9d
  __int64 v2; // r8
  __int64 result; // rax

  Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<1>,Windows::Internal::Shell::Holographic::IViewHostItemEventArgs,Microsoft::WRL::FtmBase>::FillArrayWithIid();
  v1 = *v0;
  *(GUID *)(v2 + 16LL * *v0) = _uuidof__AUIWeakReferenceSource_Details_Platform__;
  result = (unsigned int)(v1 + 1);
  *v0 = result;
  return result;
}
