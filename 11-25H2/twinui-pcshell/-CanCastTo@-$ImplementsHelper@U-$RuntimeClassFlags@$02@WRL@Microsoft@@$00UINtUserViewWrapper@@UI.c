/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UINtUserViewWrapper@@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@U?$ChainInterfaces@UIUwpWindowWrapperInternal@@UIWindowWrapper@ViewManagerInterop@Shell@Internal@Windows@@VNil@Details@WRL@Microsoft@@V789Microsoft@@V789Microsoft@@V789Microsoft@@V789Microsoft@@V789Microsoft@@V789Microsoft@@V789Microsoft@@@23@UIViewVisibilityOverride@6Desktop@789@UIViewWrapperDesktopExtension@6Desktop@789@UIViewResourcePolicies@6789@UIClientWindowState@6789@UIViewRecoveryState@6789@UIFramedViewWrapper@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1800D0950
 * Callers:
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VUwpWindowWrapperBase@@UILegacyViewWrapper@@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$02@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VUwpWindowWrapperBase@@UILegacyViewWrapper@@@123@AEBU_GUID@@PEAPEAX@Z @ 0x1800D0870 (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VUwpWindowWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,INtUserViewWrapper,Windows::Internal::Shell::ViewManagerInterop::IViewWrapper,Microsoft::WRL::ChainInterfaces<IUwpWindowWrapperInternal,Windows::Internal::Shell::ViewManagerInterop::IWindowWrapper,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Windows::Internal::Shell::Desktop::ViewManagerInterop::IViewVisibilityOverride,Windows::Internal::Shell::Desktop::ViewManagerInterop::IViewWrapperDesktopExtension,Windows::Internal::Shell::ViewManagerInterop::IViewResourcePolicies,Windows::Internal::Shell::ViewManagerInterop::IClientWindowState,Windows::Internal::Shell::ViewManagerInterop::IViewRecoveryState,IFramedViewWrapper,Microsoft::WRL::FtmBase>::CanCastTo(
        __int64 a1,
        int *a2,
        _QWORD *a3)
{
  int v3; // r10d
  __int64 result; // rax
  __int64 v7; // r9
  int v8; // ecx

  v3 = *a2;
  result = 0LL;
  if ( *a2 == -1842306531
    && a2[1] == *(_DWORD *)&GUID_9230a21d_831d_414f_87f1_f0131a16a75a.Data2
    && a2[2] == *(_DWORD *)GUID_9230a21d_831d_414f_87f1_f0131a16a75a.Data4
    && a2[3] == *(_DWORD *)&GUID_9230a21d_831d_414f_87f1_f0131a16a75a.Data4[4] )
  {
    *a3 = a1;
    return result;
  }
  v7 = a1 + 8;
  if ( v3 == 2045438746
    && a2[1] == *(_DWORD *)&GUID_79eaeb1a_4280_4be7_b345_9f7a790149f5.Data2
    && a2[2] == *(_DWORD *)GUID_79eaeb1a_4280_4be7_b345_9f7a790149f5.Data4
    && a2[3] == *(_DWORD *)&GUID_79eaeb1a_4280_4be7_b345_9f7a790149f5.Data4[4] )
  {
    goto LABEL_16;
  }
  v7 = a1 + 16;
  if ( v3 == -1272435583 )
  {
    if ( a2[1] != *(_DWORD *)&GUID_b4282c81_a540_4f5c_b46e_449970e517a8.Data2
      || a2[2] != *(_DWORD *)GUID_b4282c81_a540_4f5c_b46e_449970e517a8.Data4 )
    {
      goto LABEL_23;
    }
    v8 = *(_DWORD *)&GUID_b4282c81_a540_4f5c_b46e_449970e517a8.Data4[4];
  }
  else
  {
    if ( v3 != -1102243921
      || a2[1] != *(_DWORD *)&GUID_be4d17af_f213_4ed0_b92b_33a17d72d96d.Data2
      || a2[2] != *(_DWORD *)GUID_be4d17af_f213_4ed0_b92b_33a17d72d96d.Data4 )
    {
      goto LABEL_23;
    }
    v8 = *(_DWORD *)&GUID_be4d17af_f213_4ed0_b92b_33a17d72d96d.Data4[4];
  }
  if ( a2[3] == v8 )
  {
LABEL_16:
    *a3 = v7;
    return result;
  }
LABEL_23:
  v7 = a1 + 24;
  if ( v3 == 2062002469
    && a2[1] == *(_DWORD *)&GUID_7ae7a925_240e_4f93_9f3b_87d346eb1835.Data2
    && a2[2] == *(_DWORD *)GUID_7ae7a925_240e_4f93_9f3b_87d346eb1835.Data4
    && a2[3] == *(_DWORD *)&GUID_7ae7a925_240e_4f93_9f3b_87d346eb1835.Data4[4] )
  {
    goto LABEL_16;
  }
  v7 = a1 + 32;
  if ( v3 == 249508466
    && a2[1] == *(_DWORD *)&GUID_0edf3272_236c_4754_865e_81f6b2040b56.Data2
    && a2[2] == *(_DWORD *)GUID_0edf3272_236c_4754_865e_81f6b2040b56.Data4
    && a2[3] == *(_DWORD *)&GUID_0edf3272_236c_4754_865e_81f6b2040b56.Data4[4] )
  {
    goto LABEL_16;
  }
  v7 = a1 + 40;
  if ( v3 == 905012364
    && a2[1] == *(_DWORD *)&GUID_35f1648c_265f_402c_b575_c9a325451df5.Data2
    && a2[2] == *(_DWORD *)GUID_35f1648c_265f_402c_b575_c9a325451df5.Data4
    && a2[3] == *(_DWORD *)&GUID_35f1648c_265f_402c_b575_c9a325451df5.Data4[4] )
  {
    goto LABEL_16;
  }
  v7 = a1 + 48;
  if ( v3 == 1935131509
    && a2[1] == *(_DWORD *)&GUID_7357c375_0d63_4d6c_a22a_d2d4fc1c012e.Data2
    && a2[2] == *(_DWORD *)GUID_7357c375_0d63_4d6c_a22a_d2d4fc1c012e.Data4
    && a2[3] == *(_DWORD *)&GUID_7357c375_0d63_4d6c_a22a_d2d4fc1c012e.Data4[4] )
  {
    goto LABEL_16;
  }
  v7 = a1 + 56;
  if ( v3 == 1906570277
    && a2[1] == *(_DWORD *)&GUID_71a3f425_a716_4859_b1a4_1d9044e6a055.Data2
    && a2[2] == *(_DWORD *)GUID_71a3f425_a716_4859_b1a4_1d9044e6a055.Data4
    && a2[3] == *(_DWORD *)&GUID_71a3f425_a716_4859_b1a4_1d9044e6a055.Data4[4] )
  {
    goto LABEL_16;
  }
  v7 = a1 + 64;
  if ( v3 == 994192510
    && a2[1] == *(_DWORD *)&GUID_3b422c7e_2c2b_4e2c_81e3_49920376ed20.Data2
    && a2[2] == *(_DWORD *)GUID_3b422c7e_2c2b_4e2c_81e3_49920376ed20.Data4
    && a2[3] == *(_DWORD *)&GUID_3b422c7e_2c2b_4e2c_81e3_49920376ed20.Data4[4] )
  {
    goto LABEL_16;
  }
  v7 = a1 + 72;
  if ( v3 == -1796592748 )
  {
    if ( a2[1] == *(_DWORD *)&GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data2
      && a2[2] == *(_DWORD *)GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data4
      && a2[3] == *(_DWORD *)&GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data4[4] )
    {
      goto LABEL_16;
    }
    return 2147500034LL;
  }
  if ( v3 != 3
    || a2[1] != *(_DWORD *)&GUID_00000003_0000_0000_c000_000000000046.Data2
    || a2[2] != *(_DWORD *)GUID_00000003_0000_0000_c000_000000000046.Data4
    || a2[3] != *(_DWORD *)&GUID_00000003_0000_0000_c000_000000000046.Data4[4] )
  {
    return 2147500034LL;
  }
  *a3 = v7;
  return result;
}
