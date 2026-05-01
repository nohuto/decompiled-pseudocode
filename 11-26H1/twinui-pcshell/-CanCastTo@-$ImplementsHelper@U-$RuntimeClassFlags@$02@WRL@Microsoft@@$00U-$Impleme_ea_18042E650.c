/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00U?$ImplementsMarker@VWindowWrapperBase@@@Details@23@UIWeakReferenceSource@@UIUAPViewWrapper@@UIViewWrapperSplashScreenSupport@ViewManagerInterop@Shell@Internal@Windows@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18042E650
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VWindowWrapperBase@@UIUAPViewWrapper@@UIViewWrapperSplashScreenSupport@ViewManagerInterop@Shell@Internal@Windows@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18042EA60 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0_ea_18042EA60.c)
 * Callees:
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x180057770 (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIViewResourcePolicies@ViewManagerInterop@Shell@Internal@Windows@@UIClientWindowState@5678@UIViewRecoveryState@5678@UIFramedViewWrapper@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1800E989C (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIViewResourcePolicies@.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIViewWrapperSplashScreenSupport@ViewManagerInterop@Shell@Internal@Windows@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1801CD350 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIViewWrapperSplashScre.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<WindowWrapperBase>,IWeakReferenceSource,IUAPViewWrapper,Windows::Internal::Shell::ViewManagerInterop::IViewWrapperSplashScreenSupport>::CanCastTo(
        __int64 a1,
        const struct _GUID *a2)
{
  const struct _GUID *v2; // rcx
  _QWORD *v3; // r8
  __int64 v4; // r11
  __int64 result; // rax
  const struct _GUID *v6; // rcx
  _QWORD *v7; // r8
  __int64 v8; // r10
  const struct _GUID *v9; // rcx
  _QWORD *v10; // r8
  struct _GUID *v11; // r9
  __int64 v12; // r10
  const struct _GUID *v13; // rcx
  _QWORD *v14; // r8
  __int64 v15; // r10
  const struct _GUID *v16; // rcx
  _DWORD *v17; // r9

  if ( InlineIsEqualGUID(a2, &GUID_9230a21d_831d_414f_87f1_f0131a16a75a) )
  {
    *v3 = v4;
    return 0LL;
  }
  if ( InlineIsEqualGUID(v2, &GUID_79eaeb1a_4280_4be7_b345_9f7a790149f5) )
  {
LABEL_5:
    *v7 = v8;
    return 0LL;
  }
  if ( InlineIsEqualGUID(v6, &GUID_175d1cfe_6fbc_42ba_81e5_e3bc56d5aae9)
    || InlineIsEqualGUID(v9, &GUID_be4d17af_f213_4ed0_b92b_33a17d72d96d) )
  {
    *v10 = v12;
LABEL_9:
    result = 0LL;
    goto LABEL_13;
  }
  if ( InlineIsEqualGUID(v13, &GUID_7ae7a925_240e_4f93_9f3b_87d346eb1835) )
  {
    *v14 = v15;
    goto LABEL_9;
  }
  result = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Internal::Shell::ViewManagerInterop::IViewResourcePolicies,Windows::Internal::Shell::ViewManagerInterop::IClientWindowState,Windows::Internal::Shell::ViewManagerInterop::IViewRecoveryState,IFramedViewWrapper,Microsoft::WRL::FtmBase>::CanCastTo(
             v15 + 8,
             v11,
             v14);
LABEL_13:
  if ( (_DWORD)result == -2147467262 )
  {
    if ( InlineIsEqualGUID(v11, &GUID_00000038_0000_0000_c000_000000000046)
      || InlineIsEqualGUID(v16, &GUID_a52f5b9b_ee55_4add_b559_55f1c012e15f) )
    {
      goto LABEL_5;
    }
    return Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Internal::Shell::ViewManagerInterop::IViewWrapperSplashScreenSupport>::CanCastTo(
             v8 + 8,
             v17,
             v7);
  }
  return result;
}
