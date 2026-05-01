/*
 * XREFs of ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VViewEventArgsBase@@UIViewEventArgsForShowAsStandalone@ViewManagerInterop@Shell@Internal@Windows@@UIWindowingEnironmentSettingsArgsForImplicitEvent@6789@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180410A40
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VViewEventArgsBase@@UIViewEventArgsForShowAsStandalone@ViewManagerInterop@Shell@Internal@Windows@@UIWindowingEnironmentSettingsArgsForImplicitEvent@6789@@Details@WRL@Microsoft@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180410A50 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0_ea_180410A50.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VViewEventArgsBase@@UIViewEventArgsForShowAsStandalone@ViewManagerInterop@Shell@Internal@Windows@@UIWindowingEnironmentSettingsArgsForImplicitEvent@6789@@Details@WRL@Microsoft@@WEA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180410A60 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0_ea_180410A60.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VViewEventArgsBase@@UIViewEventArgsForShowAsStandalone@ViewManagerInterop@Shell@Internal@Windows@@UIWindowingEnironmentSettingsArgsForImplicitEvent@6789@@Details@WRL@Microsoft@@WEI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180410A70 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0_ea_180410A70.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VViewEventArgsBase@@UIViewEventArgsForShowAsStandalone@ViewManagerInterop@Shell@Internal@Windows@@UIWindowingEnironmentSettingsArgsForImplicitEvent@6789@@Details@WRL@Microsoft@@WFA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180410A80 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0_ea_180410A80.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,ViewEventArgsBase,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForShowAsStandalone,Windows::Internal::Shell::ViewManagerInterop::IWindowingEnironmentSettingsArgsForImplicitEvent>::QueryInterface(
        __int64 a1,
        const struct _GUID *a2,
        _QWORD *a3)
{
  return Microsoft::WRL::Details::RuntimeClassBaseT<1>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,ViewEventArgsBase,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForShowAsStandalone,Windows::Internal::Shell::ViewManagerInterop::IWindowingEnironmentSettingsArgsForImplicitEvent>>(
           a1,
           a2,
           a3);
}
