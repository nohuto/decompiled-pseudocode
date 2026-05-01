/*
 * XREFs of ??$GetImplementedIIDS@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VViewHostItemEventArgsBase@@UIViewHostItemPropertyChangedArgs@Holographic@Shell@Internal@Windows@@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$00@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VViewHostItemEventArgsBase@@UIViewHostItemPropertyChangedArgs@Holographic@Shell@Internal@Windows@@@123@PEAKPEAPEAU_GUID@@@Z @ 0x1803FFE2C
 * Callers:
 *     ?GetIids@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VViewHostItemEventArgsBase@@UIViewHostItemPropertyChangedArgs@Holographic@Shell@Internal@Windows@@@Details@WRL@Microsoft@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x1804038D0 (-GetIids@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VView_ea_1804038D0.c)
 * Callees:
 *     ?FillArrayWithIid@?$Implements@U?$RuntimeClassFlags@$00@WRL@Microsoft@@UIViewHostItemEventArgs@Holographic@Shell@Internal@Windows@@VFtmBase@23@@WRL@Microsoft@@IEAAXPEAKPEAU_GUID@@@Z @ 0x18040336C (-FillArrayWithIid@-$Implements@U-$RuntimeClassFlags@$00@WRL@Microsoft@@UIViewHostItemEventArgs@H.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassBaseT<1>::GetImplementedIIDS<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,ViewHostItemEventArgsBase,Windows::Internal::Shell::Holographic::IViewHostItemPropertyChangedArgs>>(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  __int64 v5; // rcx
  LPVOID v6; // r8
  __int64 result; // rax
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  v10 = a1;
  *a3 = 0LL;
  *a2 = 0;
  v6 = CoTaskMemAlloc(0x30uLL);
  if ( !v6 )
    return 2147942414LL;
  LODWORD(v10) = 0;
  Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<1>,Windows::Internal::Shell::Holographic::IViewHostItemEventArgs,Microsoft::WRL::FtmBase>::FillArrayWithIid(
    v5,
    &v10,
    v6);
  v8 = 2LL * (unsigned int)(v10 + 1);
  *(GUID *)(v9 + 16LL * (unsigned int)v10) = GUID_00000038_0000_0000_c000_000000000046;
  result = 0LL;
  *(GUID *)(v9 + 8 * v8) = GUID_9e9bf7a6_7bfc_48e0_87e5_259b27939cd4;
  *a2 = 3;
  *a3 = v9;
  return result;
}
