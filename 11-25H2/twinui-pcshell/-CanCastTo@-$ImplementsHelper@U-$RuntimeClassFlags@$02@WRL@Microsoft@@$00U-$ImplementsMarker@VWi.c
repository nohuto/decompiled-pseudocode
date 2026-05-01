/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00U?$ImplementsMarker@VWindowWrapperBase@@@Details@23@UIWeakReferenceSource@@UILegacyViewWrapper@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1804213C0
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VWindowWrapperBase@@UILegacyViewWrapper@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180421860 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VWindowWrap.c)
 * Callees:
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x18004F930 (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIViewResourcePolicies@ViewManagerInterop@Shell@Internal@Windows@@UIClientWindowState@5678@UIViewRecoveryState@5678@UIFramedViewWrapper@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1800E66CC (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIViewResourcePolicies@.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWeakReferenceSource@@UILegacyViewWrapper@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180421480 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWeakRefe_ea_180421480.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<WindowWrapperBase>,IWeakReferenceSource,ILegacyViewWrapper>::CanCastTo(
        __int64 a1,
        const struct _GUID *a2)
{
  BOOL IsEqualGUID; // eax
  const struct _GUID *v4; // rcx
  _QWORD *v5; // r8
  unsigned int CanCastTo; // r9d
  const struct _GUID *v7; // rcx
  _QWORD *v8; // r8
  __int64 v9; // r11
  const struct _GUID *v10; // rcx
  _QWORD *v11; // r8
  __int64 v12; // r11
  const struct _GUID *v13; // rcx
  _DWORD *v14; // r10

  IsEqualGUID = InlineIsEqualGUID(a2, &GUID_9230a21d_831d_414f_87f1_f0131a16a75a);
  CanCastTo = 0;
  if ( IsEqualGUID )
  {
    *v5 = a1;
    return CanCastTo;
  }
  if ( InlineIsEqualGUID(v4, &GUID_79eaeb1a_4280_4be7_b345_9f7a790149f5) )
    goto LABEL_4;
  if ( InlineIsEqualGUID(v7, &GUID_175d1cfe_6fbc_42ba_81e5_e3bc56d5aae9)
    || InlineIsEqualGUID(v10, &GUID_be4d17af_f213_4ed0_b92b_33a17d72d96d) )
  {
    *v11 = v12;
  }
  else
  {
    if ( InlineIsEqualGUID(v13, &GUID_7ae7a925_240e_4f93_9f3b_87d346eb1835) )
    {
LABEL_4:
      *v8 = v9;
      goto LABEL_10;
    }
    CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Internal::Shell::ViewManagerInterop::IViewResourcePolicies,Windows::Internal::Shell::ViewManagerInterop::IClientWindowState,Windows::Internal::Shell::ViewManagerInterop::IViewRecoveryState,IFramedViewWrapper,Microsoft::WRL::FtmBase>::CanCastTo(
                  v9 + 8,
                  v14,
                  v8);
  }
LABEL_10:
  if ( CanCastTo == -2147467262 )
    return (unsigned int)Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,ILegacyViewWrapper>::CanCastTo(a1 + 568);
  return CanCastTo;
}
