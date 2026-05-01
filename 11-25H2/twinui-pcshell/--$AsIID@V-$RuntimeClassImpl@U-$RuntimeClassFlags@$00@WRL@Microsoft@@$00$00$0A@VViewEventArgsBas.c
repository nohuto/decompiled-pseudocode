/*
 * XREFs of ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VViewEventArgsBase@@UIViewEventArgsForNavigationRequest@ViewManagerInterop@Shell@Internal@Windows@@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$00@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VViewEventArgsBase@@UIViewEventArgsForNavigationRequest@ViewManagerInterop@Shell@Internal@Windows@@@123@AEBU_GUID@@PEAPEAX@Z @ 0x1800694F8
 * Callers:
 *     ??$MakeAndInitialize@VViewEventArgsForNavigationRequest@@UIViewEventArgs@ViewManagerInterop@Shell@Internal@Windows@@PEAUIPropertySet@Collections@Foundation@6@@Details@WRL@Microsoft@@YAJPEAPEAUIViewEventArgs@ViewManagerInterop@Shell@Internal@Windows@@$$QEAPEAUIPropertySet@Collections@Foundation@7@@Z @ 0x1800693D8 (--$MakeAndInitialize@VViewEventArgsForNavigationRequest@@UIViewEventArgs@ViewManagerInterop@Shel.c)
 *     ?UwpWindowActivating@UwpWindowEventDispatcher@@UEAAJPEAUIUwpWindowActivatingEventArgs@UwpWindowLifecycleManagement@Shell@Internal@Windows@@@Z @ 0x18006C8A0 (-UwpWindowActivating@UwpWindowEventDispatcher@@UEAAJPEAUIUwpWindowActivatingEventArgs@UwpWindowL.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VViewEventArgsBase@@UIViewEventArgsForNavigationRequest@ViewManagerInterop@Shell@Internal@Windows@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18022A840 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0_ea_18022A840.c)
 *     ??$MakeAndInitialize@VViewEventArgsForNavigationRequest@@UIViewEventArgs@ViewManagerInterop@Shell@Internal@Windows@@$$T@Details@WRL@Microsoft@@YAJPEAPEAUIViewEventArgs@ViewManagerInterop@Shell@Internal@Windows@@$$QEA$$T@Z @ 0x18041689C (--$MakeAndInitialize@VViewEventArgsForNavigationRequest@@UIViewEventArgs@ViewManage_ea_18041689C.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassBaseT<1>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,ViewEventArgsBase,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForNavigationRequest>>(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  int v5; // ebx
  int v6; // eax
  __int64 v7; // rcx

  *a3 = 0LL;
  if ( !*a2
    && a2[1] == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data2
    && a2[2] == *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
    && a2[3] == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4] )
  {
    goto LABEL_11;
  }
  if ( *a2 == -1350114592 )
  {
    if ( a2[1] == *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data2
      && a2[2] == *(_DWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4
      && a2[3] == *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4[4] )
    {
LABEL_11:
      *a3 = a1;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
      return 0LL;
    }
  }
  else if ( *a2 == -1765728790
         && a2[1] == *(_DWORD *)&GUID_96c11dea_68de_44ef_a7f7_3aa869663d57.Data2
         && a2[2] == *(_DWORD *)GUID_96c11dea_68de_44ef_a7f7_3aa869663d57.Data4
         && a2[3] == *(_DWORD *)&GUID_96c11dea_68de_44ef_a7f7_3aa869663d57.Data4[4] )
  {
    goto LABEL_16;
  }
  if ( *a2 == -1796592748 )
  {
    if ( a2[1] != *(_DWORD *)&GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data2
      || a2[2] != *(_DWORD *)GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data4 )
    {
      goto LABEL_43;
    }
    v6 = *(_DWORD *)&GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data4[4];
  }
  else
  {
    if ( *a2 != 3
      || a2[1] != *(_DWORD *)&GUID_00000003_0000_0000_c000_000000000046.Data2
      || a2[2] != *(_DWORD *)GUID_00000003_0000_0000_c000_000000000046.Data4 )
    {
      goto LABEL_43;
    }
    v6 = *(_DWORD *)&GUID_00000003_0000_0000_c000_000000000046.Data4[4];
  }
  if ( a2[3] != v6 )
  {
LABEL_43:
    v5 = -2147467262;
    goto LABEL_26;
  }
  *a3 = a1 + 8;
  v5 = 0;
LABEL_26:
  if ( v5 != -2147467262 )
    goto LABEL_36;
  a1 += 64LL;
  if ( *a2 != 56
    || a2[1] != *(_DWORD *)&_uuidof__AUIWeakReferenceSource_Details_Platform__.Data2
    || a2[2] != *(_DWORD *)_uuidof__AUIWeakReferenceSource_Details_Platform__.Data4
    || a2[3] != *(_DWORD *)&_uuidof__AUIWeakReferenceSource_Details_Platform__.Data4[4] )
  {
    v7 = a1 + 8;
    if ( *a2 == -1462589172
      && a2[1] == *(_DWORD *)&GUID_a8d2a90c_a403_4593_95ff_012516ae9351.Data2
      && a2[2] == *(_DWORD *)GUID_a8d2a90c_a403_4593_95ff_012516ae9351.Data4
      && a2[3] == *(_DWORD *)&GUID_a8d2a90c_a403_4593_95ff_012516ae9351.Data4[4] )
    {
      *a3 = v7;
      v5 = 0;
    }
    else
    {
      v5 = -2147467262;
    }
LABEL_36:
    if ( v5 < 0 )
      return (unsigned int)v5;
    goto LABEL_17;
  }
LABEL_16:
  *a3 = a1;
  v5 = 0;
LABEL_17:
  (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 8LL))(*a3);
  return (unsigned int)v5;
}
