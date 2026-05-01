/*
 * XREFs of ?FillArrayWithIid@?$ImplementsHelper@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$0A@U?$ImplementsMarker@VViewHostItemEventArgsBase@@@Details@23@UIWeakReferenceSource@@@Details@WRL@Microsoft@@IEAAXPEAKPEAU_GUID@@@Z @ 0x1804033A8
 * Callers:
 *     ?GetIids@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VViewHostItemEventArgsBase@@@Details@WRL@Microsoft@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x180403860 (-GetIids@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VViewHostItemEvent.c)
 * Callees:
 *     ?FillArrayWithIid@?$Implements@U?$RuntimeClassFlags@$00@WRL@Microsoft@@UIViewHostItemEventArgs@Holographic@Shell@Internal@Windows@@VFtmBase@23@@WRL@Microsoft@@IEAAXPEAKPEAU_GUID@@@Z @ 0x18040336C (-FillArrayWithIid@-$Implements@U-$RuntimeClassFlags@$00@WRL@Microsoft@@UIViewHostItemEventArgs@H.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,0,Microsoft::WRL::Details::ImplementsMarker<ViewHostItemEventArgsBase>,IWeakReferenceSource>::FillArrayWithIid(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  unsigned int *v3; // rdx
  int v4; // r9d
  __int64 v5; // r8
  __int64 result; // rax

  Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<1>,Windows::Internal::Shell::Holographic::IViewHostItemEventArgs,Microsoft::WRL::FtmBase>::FillArrayWithIid(
    a1,
    a2,
    a3);
  v4 = *v3;
  *(GUID *)(v5 + 16LL * *v3) = GUID_00000038_0000_0000_c000_000000000046;
  result = (unsigned int)(v4 + 1);
  *v3 = result;
  return result;
}
