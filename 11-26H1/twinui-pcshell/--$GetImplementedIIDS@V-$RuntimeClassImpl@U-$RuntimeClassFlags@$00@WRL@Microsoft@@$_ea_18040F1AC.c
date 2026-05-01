/*
 * XREFs of ??$GetImplementedIIDS@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VViewEventArgsBase@@UIViewEventArgsForShowAsStandalone@ViewManagerInterop@Shell@Internal@Windows@@UIWindowingEnironmentSettingsArgsForImplicitEvent@6789@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$00@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VViewEventArgsBase@@UIViewEventArgsForShowAsStandalone@ViewManagerInterop@Shell@Internal@Windows@@UIWindowingEnironmentSettingsArgsForImplicitEvent@6789@@123@PEAKPEAPEAU_GUID@@@Z @ 0x18040F1AC
 * Callers:
 *     ?GetIids@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VViewEventArgsBase@@UIViewEventArgsForShowAsStandalone@ViewManagerInterop@Shell@Internal@Windows@@UIWindowingEnironmentSettingsArgsForImplicitEvent@6789@@Details@WRL@Microsoft@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x180419580 (-GetIids@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VView_ea_180419580.c)
 * Callees:
 *     ?FillArrayWithIid@?$Implements@U?$RuntimeClassFlags@$00@WRL@Microsoft@@UIViewEventArgs@ViewManagerInterop@Shell@Internal@Windows@@VFtmBase@23@@WRL@Microsoft@@IEAAXPEAKPEAU_GUID@@@Z @ 0x18041885C (-FillArrayWithIid@-$Implements@U-$RuntimeClassFlags@$00@WRL@Microsoft@@UIViewEventArgs@ViewManag.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassBaseT<1>::GetImplementedIIDS<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,ViewEventArgsBase,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForShowAsStandalone,Windows::Internal::Shell::ViewManagerInterop::IWindowingEnironmentSettingsArgsForImplicitEvent>>(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  __int64 v5; // rcx
  LPVOID v6; // r8
  __int64 result; // rax
  unsigned int v8; // edx
  __int64 v9; // r8
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  v10 = a1;
  *a3 = 0LL;
  *a2 = 0;
  v6 = CoTaskMemAlloc(0x40uLL);
  if ( !v6 )
    return 2147942414LL;
  LODWORD(v10) = 0;
  Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<1>,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs,Microsoft::WRL::FtmBase>::FillArrayWithIid(
    v5,
    &v10,
    v6);
  v8 = v10 + 1;
  *(GUID *)(v9 + 16LL * (unsigned int)v10) = GUID_00000038_0000_0000_c000_000000000046;
  *(GUID *)(v9 + 16LL * v8) = GUID_73fde223_ab79_4255_b395_e73cc002703f;
  result = 0LL;
  *(GUID *)(v9 + 16LL * (v8 + 1)) = GUID_ca746cf0_7375_4d7a_9d29_6c72d8b5e684;
  *a2 = 4;
  *a3 = v9;
  return result;
}
