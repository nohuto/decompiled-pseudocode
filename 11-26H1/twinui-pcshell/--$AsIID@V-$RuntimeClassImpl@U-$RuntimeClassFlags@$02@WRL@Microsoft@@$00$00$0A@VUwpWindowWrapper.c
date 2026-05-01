/*
 * XREFs of ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VUwpWindowWrapperBase@@UILegacyViewWrapper@@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$02@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VUwpWindowWrapperBase@@UILegacyViewWrapper@@@123@AEBU_GUID@@PEAPEAX@Z @ 0x1800B842C
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VUwpWindowWrapperBase@@UILegacyViewWrapper@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800B8420 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0_ea_1800B8420.c)
 * Callees:
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UINtUserViewWrapper@@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@U?$ChainInterfaces@UIUwpWindowWrapperInternal@@UIWindowWrapper@ViewManagerInterop@Shell@Internal@Windows@@VNil@Details@WRL@Microsoft@@V789Microsoft@@V789Microsoft@@V789Microsoft@@V789Microsoft@@V789Microsoft@@V789Microsoft@@V789Microsoft@@@23@UIViewVisibilityOverride@6Desktop@789@UIViewWrapperDesktopExtension@6Desktop@789@UIViewResourcePolicies@6789@UIClientWindowState@6789@UIViewRecoveryState@6789@UIFramedViewWrapper@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1800B8510 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00UINtUserViewWrapper@@UI.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWeakReferenceSource@@UILegacyViewWrapper@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18042C874 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWeakRefe_ea_18042C874.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassBaseT<3>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,UwpWindowWrapperBase,ILegacyViewWrapper>>(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  int CanCastTo; // ebx
  __int64 v4; // r10

  *a3 = 0LL;
  if ( *a2 )
  {
    if ( *a2 != -1350114592 || a2[1] != *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data2 )
      goto LABEL_5;
    if ( a2[2] != *(_DWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4
      || a2[3] != *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4[4] )
    {
      if ( a2[1] == *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data2
        && a2[2] == *(_DWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4
        && a2[3] == *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4[4] )
      {
        *a3 = a1;
        CanCastTo = 0;
LABEL_8:
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 8LL))(*a3);
        return (unsigned int)CanCastTo;
      }
LABEL_5:
      CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,INtUserViewWrapper,Windows::Internal::Shell::ViewManagerInterop::IViewWrapper,Microsoft::WRL::ChainInterfaces<IUwpWindowWrapperInternal,Windows::Internal::Shell::ViewManagerInterop::IWindowWrapper,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Windows::Internal::Shell::Desktop::ViewManagerInterop::IViewVisibilityOverride,Windows::Internal::Shell::Desktop::ViewManagerInterop::IViewWrapperDesktopExtension,Windows::Internal::Shell::ViewManagerInterop::IViewResourcePolicies,Windows::Internal::Shell::ViewManagerInterop::IClientWindowState,Windows::Internal::Shell::ViewManagerInterop::IViewRecoveryState,IFramedViewWrapper,Microsoft::WRL::FtmBase>::CanCastTo(a1 + 8);
      if ( CanCastTo == -2147467262 )
        CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,ILegacyViewWrapper>::CanCastTo(v4 + 560);
      if ( CanCastTo < 0 )
        return (unsigned int)CanCastTo;
      goto LABEL_8;
    }
  }
  else if ( a2[1] != *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data2
         || a2[2] != *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
         || a2[3] != *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4] )
  {
    goto LABEL_5;
  }
  *a3 = a1;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
  return 0LL;
}
