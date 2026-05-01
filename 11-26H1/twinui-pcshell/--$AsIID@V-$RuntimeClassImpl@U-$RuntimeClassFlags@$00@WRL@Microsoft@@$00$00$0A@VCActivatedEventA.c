/*
 * XREFs of ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VCActivatedEventArgsWithPrelaunchAndViewIdBase@@UILaunchActivatedEventArgs@Activation@ApplicationModel@Windows@@UILaunchActivatedEventArgs2@678@U?$CloakedIid@UIValueMarshalByPropertySet@Internal@Marshaling@Foundation@Windows@@@23@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$00@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VCActivatedEventArgsWithPrelaunchAndViewIdBase@@UILaunchActivatedEventArgs@Activation@ApplicationModel@Windows@@UILaunchActivatedEventArgs2@678@U?$CloakedIid@UIValueMarshalByPropertySet@Internal@Marshaling@Foundation@Windows@@@23@@123@AEBU_GUID@@PEAPEAX@Z @ 0x18014659C
 * Callers:
 *     ?QueryInterface@CLaunchActivatedEventArgs@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180146590 (-QueryInterface@CLaunchActivatedEventArgs@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00U?$ImplementsMarker@VCActivatedEventArgsBase@@@Details@23@UIApplicationViewActivatedEventArgs@Activation@ApplicationModel@Windows@@UIViewSwitcherProvider@789@U?$CloakedIid@UIMultiviewActivationProperties@Activation@ApplicationModel@Windows@@@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180146A00 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00U-$ImplementsMarker@VCA.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassBaseT<1>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,CActivatedEventArgsWithPrelaunchAndViewIdBase,Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs,Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs2,Microsoft::WRL::CloakedIid<Windows::Foundation::Marshaling::Internal::IValueMarshalByPropertySet>>>(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  _DWORD *v3; // rdx
  int CanCastTo; // ebx
  _QWORD *v5; // r8
  __int64 v6; // r11
  _DWORD *v7; // rcx
  __int64 v8; // r9
  __int64 v9; // rcx
  int v11; // eax

  *a3 = 0LL;
  if ( *a2 )
  {
    if ( *a2 != -1350114592
      || a2[1] != *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data2
      || a2[2] != *(_DWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4 )
    {
      goto LABEL_3;
    }
    v11 = *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4[4];
  }
  else
  {
    if ( a2[1] != *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data2
      || a2[2] != *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4 )
    {
      goto LABEL_3;
    }
    v11 = *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4];
  }
  if ( a2[3] == v11 )
  {
    *a3 = a1;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
    return 0LL;
  }
LABEL_3:
  CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<CActivatedEventArgsBase>,Windows::ApplicationModel::Activation::IApplicationViewActivatedEventArgs,Windows::ApplicationModel::Activation::IViewSwitcherProvider,Microsoft::WRL::CloakedIid<Windows::ApplicationModel::Activation::IMultiviewActivationProperties>>::CanCastTo();
  if ( CanCastTo != -2147467262 )
    goto LABEL_12;
  if ( *v3 == 205812091
    && (v7 = v3 + 1, v3[1] == *(_DWORD *)&GUID_0c44717b_19f7_48d6_b046_cf22826eaa74.Data2)
    && v3[2] == *(_DWORD *)GUID_0c44717b_19f7_48d6_b046_cf22826eaa74.Data4
    && v3[3] == *(_DWORD *)&GUID_0c44717b_19f7_48d6_b046_cf22826eaa74.Data4[4] )
  {
    CanCastTo = 0;
    *v5 = v6 + 216;
  }
  else
  {
    CanCastTo = -2147467262;
    v7 = v3 + 1;
  }
  if ( CanCastTo != -2147467262 )
    goto LABEL_12;
  v8 = v6 + 232;
  if ( *v3 == 56
    && (v7 = v3 + 1, v3[1] == *(_DWORD *)&GUID_00000038_0000_0000_c000_000000000046.Data2)
    && v3[2] == *(_DWORD *)GUID_00000038_0000_0000_c000_000000000046.Data4
    && v3[3] == *(_DWORD *)&GUID_00000038_0000_0000_c000_000000000046.Data4[4]
    || (v8 = v6 + 240, *v3 == -70697434)
    && *v7 == *(_DWORD *)&GUID_fbc93e26_a14a_4b4f_82b0_33bed920af52.Data2
    && v3[2] == *(_DWORD *)GUID_fbc93e26_a14a_4b4f_82b0_33bed920af52.Data4
    && v3[3] == *(_DWORD *)&GUID_fbc93e26_a14a_4b4f_82b0_33bed920af52.Data4[4] )
  {
    *v5 = v8;
LABEL_31:
    CanCastTo = 0;
    goto LABEL_12;
  }
  v9 = v6 + 248;
  if ( *v3 == 265518780
    && v3[1] == *(_DWORD *)&GUID_0fd37ebc_9dc9_46b5_9ace_bd95d4565345.Data2
    && v3[2] == *(_DWORD *)GUID_0fd37ebc_9dc9_46b5_9ace_bd95d4565345.Data4
    && v3[3] == *(_DWORD *)&GUID_0fd37ebc_9dc9_46b5_9ace_bd95d4565345.Data4[4]
    || (v9 = v6 + 256, *v3 == 556969989)
    && v3[1] == *(_DWORD *)&GUID_2132b005_c604_4354_85bd_8f2e24181b0c.Data2
    && v3[2] == *(_DWORD *)GUID_2132b005_c604_4354_85bd_8f2e24181b0c.Data4
    && v3[3] == *(_DWORD *)&GUID_2132b005_c604_4354_85bd_8f2e24181b0c.Data4[4] )
  {
    *v5 = v9;
    goto LABEL_31;
  }
  CanCastTo = -2147467262;
LABEL_12:
  if ( CanCastTo >= 0 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v5 + 8LL))(*v5);
  return (unsigned int)CanCastTo;
}
