/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00UIActivatedEventArgs@Activation@ApplicationModel@Windows@@UIActivatedEventArgsWithUser@567@U?$CloakedIid@UIInitializeActivatedEventArgs@Activation@ApplicationModel@Windows@@@23@U?$CloakedIid@UIActivatedEventArgsInternal@Activation@ApplicationModel@Windows@@@23@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180146ABC
 * Callers:
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00U?$ImplementsMarker@VCActivatedEventArgsBase@@@Details@23@UIApplicationViewActivatedEventArgs@Activation@ApplicationModel@Windows@@UIViewSwitcherProvider@789@U?$CloakedIid@UIMultiviewActivationProperties@Activation@ApplicationModel@Windows@@@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180146A00 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00U-$ImplementsMarker@VCA.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::ApplicationModel::Activation::IActivatedEventArgs,Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser,Microsoft::WRL::CloakedIid<Windows::ApplicationModel::Activation::IInitializeActivatedEventArgs>,Microsoft::WRL::CloakedIid<Windows::ApplicationModel::Activation::IActivatedEventArgsInternal>,Microsoft::WRL::FtmBase>::CanCastTo(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  int v4; // eax

  if ( *a2 == -815458541
    && a2[1] == *(_DWORD *)&GUID_cf651713_cd08_4fd8_b697_a281b6544e2e.Data2
    && a2[2] == *(_DWORD *)GUID_cf651713_cd08_4fd8_b697_a281b6544e2e.Data4
    && a2[3] == *(_DWORD *)&GUID_cf651713_cd08_4fd8_b697_a281b6544e2e.Data4[4] )
  {
    goto LABEL_13;
  }
  a1 += 8LL;
  if ( *a2 == 485530526
    && a2[1] == *(_DWORD *)&GUID_1cf09b9e_9962_4936_80ff_afc8e8ae5c8c.Data2
    && a2[2] == *(_DWORD *)GUID_1cf09b9e_9962_4936_80ff_afc8e8ae5c8c.Data4
    && a2[3] == *(_DWORD *)&GUID_1cf09b9e_9962_4936_80ff_afc8e8ae5c8c.Data4[4] )
  {
    goto LABEL_13;
  }
  a1 += 8LL;
  if ( *a2 == -1711520541
    && a2[1] == *(_DWORD *)&GUID_99fc44e3_ce9a_4284_bf04_76331d1b1788.Data2
    && a2[2] == *(_DWORD *)GUID_99fc44e3_ce9a_4284_bf04_76331d1b1788.Data4
    && a2[3] == *(_DWORD *)&GUID_99fc44e3_ce9a_4284_bf04_76331d1b1788.Data4[4] )
  {
    goto LABEL_13;
  }
  a1 += 8LL;
  if ( *a2 == -342392289
    && a2[1] == *(_DWORD *)&GUID_eb97821f_f2b3_4129_a736_1cbadda865e8.Data2
    && a2[2] == *(_DWORD *)GUID_eb97821f_f2b3_4129_a736_1cbadda865e8.Data4
    && a2[3] == *(_DWORD *)&GUID_eb97821f_f2b3_4129_a736_1cbadda865e8.Data4[4] )
  {
    goto LABEL_13;
  }
  a1 += 8LL;
  if ( *a2 == -1796592748 )
  {
    if ( a2[1] != *(_DWORD *)&GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data2
      || a2[2] != *(_DWORD *)GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data4 )
    {
      return 2147500034LL;
    }
    v4 = *(_DWORD *)&GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data4[4];
  }
  else
  {
    if ( *a2 != 3
      || a2[1] != *(_DWORD *)&GUID_00000003_0000_0000_c000_000000000046.Data2
      || a2[2] != *(_DWORD *)GUID_00000003_0000_0000_c000_000000000046.Data4 )
    {
      return 2147500034LL;
    }
    v4 = *(_DWORD *)&GUID_00000003_0000_0000_c000_000000000046.Data4[4];
  }
  if ( a2[3] == v4 )
  {
LABEL_13:
    *a3 = a1;
    return 0LL;
  }
  return 2147500034LL;
}
