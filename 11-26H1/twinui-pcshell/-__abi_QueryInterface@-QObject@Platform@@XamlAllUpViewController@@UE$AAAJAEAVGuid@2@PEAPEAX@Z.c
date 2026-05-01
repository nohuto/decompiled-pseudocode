/*
 * XREFs of ?__abi_QueryInterface@?QObject@Platform@@XamlAllUpViewController@@UE$AAAJAEAVGuid@2@PEAPEAX@Z @ 0x180180970
 * Callers:
 *     ?__abi_QueryInterface@?QObject@Platform@@XamlAllUpViewController@@W7E$AAAJAEAVGuid@2@PEAPEAX@Z @ 0x1806B9660 (-__abi_QueryInterface@-QObject@Platform@@XamlAllUpViewController@@W7E$AAAJAEAVGuid@2@PEAPEAX@Z.c)
 *     ?__abi_QueryInterface@?QObject@Platform@@XamlAllUpViewController@@WBA@E$AAAJAEAVGuid@2@PEAPEAX@Z @ 0x1806B9670 (-__abi_QueryInterface@-QObject@Platform@@XamlAllUpViewController@@WBA@E$AAAJAEAVGuid@2@PEAPEAX@Z.c)
 *     ?__abi_QueryInterface@?QObject@Platform@@XamlAllUpViewController@@WBI@E$AAAJAEAVGuid@2@PEAPEAX@Z @ 0x1806B9680 (-__abi_QueryInterface@-QObject@Platform@@XamlAllUpViewController@@WBI@E$AAAJAEAVGuid@2@PEAPEAX@Z.c)
 *     ?__abi_QueryInterface@?QObject@Platform@@XamlAllUpViewController@@WCA@E$AAAJAEAVGuid@2@PEAPEAX@Z @ 0x1806B9690 (-__abi_QueryInterface@-QObject@Platform@@XamlAllUpViewController@@WCA@E$AAAJAEAVGuid@2@PEAPEAX@Z.c)
 *     ?__abi_QueryInterface@?QObject@Platform@@XamlAllUpViewController@@WCI@E$AAAJAEAVGuid@2@PEAPEAX@Z @ 0x1806B96A0 (-__abi_QueryInterface@-QObject@Platform@@XamlAllUpViewController@@WCI@E$AAAJAEAVGuid@2@PEAPEAX@Z.c)
 *     ?__abi_QueryInterface@?QObject@Platform@@XamlAllUpViewController@@WDA@E$AAAJAEAVGuid@2@PEAPEAX@Z @ 0x1806B96B0 (-__abi_QueryInterface@-QObject@Platform@@XamlAllUpViewController@@WDA@E$AAAJAEAVGuid@2@PEAPEAX@Z.c)
 *     ?__abi_QueryInterface@?QObject@Platform@@XamlAllUpViewController@@WJI@E$AAAJAEAVGuid@2@PEAPEAX@Z @ 0x1806B96C0 (-__abi_QueryInterface@-QObject@Platform@@XamlAllUpViewController@@WJI@E$AAAJAEAVGuid@2@PEAPEAX@Z.c)
 *     ?__abi_QueryInterface@?QObject@Platform@@XamlAllUpViewController@@WKA@E$AAAJAEAVGuid@2@PEAPEAX@Z @ 0x1806B96E0 (-__abi_QueryInterface@-QObject@Platform@@XamlAllUpViewController@@WKA@E$AAAJAEAVGuid@2@PEAPEAX@Z.c)
 *     ?__abi_QueryInterface@?QObject@Platform@@XamlAllUpViewController@@WKI@E$AAAJAEAVGuid@2@PEAPEAX@Z @ 0x1806B9700 (-__abi_QueryInterface@-QObject@Platform@@XamlAllUpViewController@@WKI@E$AAAJAEAVGuid@2@PEAPEAX@Z.c)
 * Callees:
 *     ?__abi_QueryInterface@__abi_FTMWeakRefData@@QEAAJAEAVGuid@Platform@@PEAPEAX@Z @ 0x180180568 (-__abi_QueryInterface@__abi_FTMWeakRefData@@QEAAJAEAVGuid@Platform@@PEAPEAX@Z.c)
 *     ?Increment@__abi_FTMWeakRefData@@QECAKXZ @ 0x180180E1C (-Increment@__abi_FTMWeakRefData@@QECAKXZ.c)
 *     ?Equals@Guid@Platform@@QEAA_NAEBU_GUID@@@Z @ 0x1801B2238 (-Equals@Guid@Platform@@QEAA_NAEBU_GUID@@@Z.c)
 *     ?__abi_QueryInterface@?QObject@Platform@@XamlBaseViewController@@UE$AAAJAEAVGuid@2@PEAPEAX@Z @ 0x1806B13D0 (-__abi_QueryInterface@-QObject@Platform@@XamlBaseViewController@@UE$AAAJAEAVGuid@2@PEAPEAX@Z.c)
 */

__int64 __fastcall ___abi_QueryInterface__QObject_Platform__XamlAllUpViewController__UE_AAAJAEAVGuid_2_PEAPEAX_Z(
        __int64 a1,
        struct Platform::Guid *a2,
        void **a3,
        __int64 a4)
{
  void **v4; // rsi
  struct Platform::Guid *v5; // rbx
  Platform::Guid *v7; // rcx
  __int64 v8; // rcx
  void **v9; // rcx
  __int64 v10; // rax

  v4 = a3;
  v5 = a2;
  if ( !*(_DWORD *)a2 )
  {
    if ( *((_DWORD *)a2 + 1) != *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data2
      || *((_DWORD *)a2 + 2) != *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4 )
    {
      goto LABEL_4;
    }
    if ( *((_DWORD *)a2 + 3) == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4] )
      goto LABEL_13;
  }
  if ( *(_DWORD *)a2 == -1350114592 )
  {
    if ( *((_DWORD *)a2 + 1) != *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data2
      || *((_DWORD *)a2 + 2) != *(_DWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4 )
    {
      goto LABEL_4;
    }
    if ( *((_DWORD *)a2 + 3) == *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4[4] )
    {
LABEL_13:
      *v4 = (void *)a1;
      v9 = (void **)(a1 + 128);
LABEL_36:
      __abi_FTMWeakRefData::Increment(v9, a2, a3, a4);
      return 0LL;
    }
  }
  if ( *(_DWORD *)a2 == 2101284408
    && *((_DWORD *)a2 + 1) == 1051281424
    && *((_DWORD *)a2 + 2) == -1050331480
    && *((_DWORD *)a2 + 3) == 723772329 )
  {
    goto LABEL_13;
  }
LABEL_4:
  a3 = (void **)(a1 + 128);
  if ( (-(__int64)(*(_QWORD *)(a1 + 136) != 0LL) & (a1 + 128)) != 0
    && *(_DWORD *)a2 == -1796592748
    && *((_DWORD *)a2 + 1) == *(_DWORD *)&_uuidof__AUIAgileObject_Details_Platform__.Data2
    && *((_DWORD *)a2 + 2) == *(_DWORD *)_uuidof__AUIAgileObject_Details_Platform__.Data4
    && *((_DWORD *)a2 + 3) == *(_DWORD *)&_uuidof__AUIAgileObject_Details_Platform__.Data4[4] )
  {
    goto LABEL_13;
  }
  if ( *(_DWORD *)a2 == 56 )
  {
    if ( *((_DWORD *)a2 + 1) == *(_DWORD *)&_uuidof__AUIWeakReferenceSource_Details_Platform__.Data2
      && *((_DWORD *)a2 + 2) == *(_DWORD *)_uuidof__AUIWeakReferenceSource_Details_Platform__.Data4
      && *((_DWORD *)a2 + 3) == *(_DWORD *)&_uuidof__AUIWeakReferenceSource_Details_Platform__.Data4[4] )
    {
      a2 = (struct Platform::Guid *)(a1 + 160);
      v10 = (a1 + 160) & -(__int64)(a1 != 0);
LABEL_35:
      *v4 = (void *)v10;
      v9 = a3;
      goto LABEL_36;
    }
  }
  else if ( *(_DWORD *)a2 == -1879262123 )
  {
    if ( *((_DWORD *)a2 + 1) == *(_DWORD *)&_uuidof__AUIXamlMultitaskingViewController__.Data2
      && *((_DWORD *)a2 + 2) == *(_DWORD *)_uuidof__AUIXamlMultitaskingViewController__.Data4
      && *((_DWORD *)a2 + 3) == *(_DWORD *)&_uuidof__AUIXamlMultitaskingViewController__.Data4[4] )
    {
      v8 = a1 + 16;
      goto LABEL_34;
    }
  }
  else if ( *(_DWORD *)a2 == -915487802
         && *((_DWORD *)a2 + 1) == *(_DWORD *)&_uuidof__AUIXamlSwitcherWindowInteractionEvents__.Data2
         && *((_DWORD *)a2 + 2) == *(_DWORD *)_uuidof__AUIXamlSwitcherWindowInteractionEvents__.Data4
         && *((_DWORD *)a2 + 3) == *(_DWORD *)&_uuidof__AUIXamlSwitcherWindowInteractionEvents__.Data4[4] )
  {
    v8 = a1 + 24;
    goto LABEL_34;
  }
  if ( Platform::Guid::Equals(a2, &_uuidof__AU__IXamlBaseViewControllerPublicNonVirtuals__) )
  {
    v8 = a1 + 8;
LABEL_34:
    v10 = v8 & -(__int64)(a1 != 0);
    goto LABEL_35;
  }
  if ( Platform::Guid::Equals(v7, &_uuidof__AUIMonitorFrameDismissAnimationCallback__) )
  {
    v8 = a1 + 152;
    goto LABEL_34;
  }
  if ( (-(__int64)(*(_QWORD *)(a1 + 136) != 0LL) & (unsigned __int64)a3) != 0
    && !(unsigned int)__abi_FTMWeakRefData::__abi_QueryInterface(
                        (__abi_FTMWeakRefData *)((unsigned __int64)a3 & -(__int64)(*(_QWORD *)(a1 + 136) != 0LL)),
                        v5,
                        v4) )
  {
    return 0LL;
  }
  return ___abi_QueryInterface__QObject_Platform__XamlBaseViewController__UE_AAAJAEAVGuid_2_PEAPEAX_Z(a1 + 8, v5, v4);
}
