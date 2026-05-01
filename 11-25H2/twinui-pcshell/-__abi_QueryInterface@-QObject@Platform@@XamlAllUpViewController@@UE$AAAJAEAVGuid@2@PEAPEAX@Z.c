/*
 * XREFs of ?__abi_QueryInterface@?QObject@Platform@@XamlAllUpViewController@@UE$AAAJAEAVGuid@2@PEAPEAX@Z @ 0x18018AE20
 * Callers:
 *     ?__abi_QueryInterface@?QObject@Platform@@XamlAllUpViewController@@W7E$AAAJAEAVGuid@2@PEAPEAX@Z @ 0x180692160 (-__abi_QueryInterface@-QObject@Platform@@XamlAllUpViewController@@W7E$AAAJAEAVGuid@2@PEAPEAX@Z.c)
 *     ?__abi_QueryInterface@?QObject@Platform@@XamlAllUpViewController@@WBA@E$AAAJAEAVGuid@2@PEAPEAX@Z @ 0x180692170 (-__abi_QueryInterface@-QObject@Platform@@XamlAllUpViewController@@WBA@E$AAAJAEAVGuid@2@PEAPEAX@Z.c)
 *     ?__abi_QueryInterface@?QObject@Platform@@XamlAllUpViewController@@WBI@E$AAAJAEAVGuid@2@PEAPEAX@Z @ 0x180692180 (-__abi_QueryInterface@-QObject@Platform@@XamlAllUpViewController@@WBI@E$AAAJAEAVGuid@2@PEAPEAX@Z.c)
 *     ?__abi_QueryInterface@?QObject@Platform@@XamlAllUpViewController@@WCA@E$AAAJAEAVGuid@2@PEAPEAX@Z @ 0x180692190 (-__abi_QueryInterface@-QObject@Platform@@XamlAllUpViewController@@WCA@E$AAAJAEAVGuid@2@PEAPEAX@Z.c)
 *     ?__abi_QueryInterface@?QObject@Platform@@XamlAllUpViewController@@WCI@E$AAAJAEAVGuid@2@PEAPEAX@Z @ 0x1806921A0 (-__abi_QueryInterface@-QObject@Platform@@XamlAllUpViewController@@WCI@E$AAAJAEAVGuid@2@PEAPEAX@Z.c)
 *     ?__abi_QueryInterface@?QObject@Platform@@XamlAllUpViewController@@WDA@E$AAAJAEAVGuid@2@PEAPEAX@Z @ 0x1806921B0 (-__abi_QueryInterface@-QObject@Platform@@XamlAllUpViewController@@WDA@E$AAAJAEAVGuid@2@PEAPEAX@Z.c)
 *     ?__abi_QueryInterface@?QObject@Platform@@XamlAllUpViewController@@WJI@E$AAAJAEAVGuid@2@PEAPEAX@Z @ 0x1806921C0 (-__abi_QueryInterface@-QObject@Platform@@XamlAllUpViewController@@WJI@E$AAAJAEAVGuid@2@PEAPEAX@Z.c)
 *     ?__abi_QueryInterface@?QObject@Platform@@XamlAllUpViewController@@WKA@E$AAAJAEAVGuid@2@PEAPEAX@Z @ 0x1806921E0 (-__abi_QueryInterface@-QObject@Platform@@XamlAllUpViewController@@WKA@E$AAAJAEAVGuid@2@PEAPEAX@Z.c)
 *     ?__abi_QueryInterface@?QObject@Platform@@XamlAllUpViewController@@WKI@E$AAAJAEAVGuid@2@PEAPEAX@Z @ 0x180692200 (-__abi_QueryInterface@-QObject@Platform@@XamlAllUpViewController@@WKI@E$AAAJAEAVGuid@2@PEAPEAX@Z.c)
 * Callees:
 *     ?__abi_QueryInterface@__abi_FTMWeakRefData@@QEAAJAEAVGuid@Platform@@PEAPEAX@Z @ 0x18018AA2C (-__abi_QueryInterface@__abi_FTMWeakRefData@@QEAAJAEAVGuid@Platform@@PEAPEAX@Z.c)
 *     ?Increment@__abi_FTMWeakRefData@@QECAKXZ @ 0x18018B444 (-Increment@__abi_FTMWeakRefData@@QECAKXZ.c)
 *     ?Equals@Guid@Platform@@QEAA_NAEBU_GUID@@@Z @ 0x1801B8D40 (-Equals@Guid@Platform@@QEAA_NAEBU_GUID@@@Z.c)
 *     ?__abi_QueryInterface@?QObject@Platform@@XamlBaseViewController@@UE$AAAJAEAVGuid@2@PEAPEAX@Z @ 0x18068A010 (-__abi_QueryInterface@-QObject@Platform@@XamlBaseViewController@@UE$AAAJAEAVGuid@2@PEAPEAX@Z.c)
 */

__int64 __fastcall ___abi_QueryInterface__QObject_Platform__XamlAllUpViewController__UE_AAAJAEAVGuid_2_PEAPEAX_Z(
        _QWORD *a1,
        Platform::Guid *a2,
        void **a3)
{
  Platform::Guid *v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rax
  _QWORD *v9; // rcx
  unsigned __int64 v11; // rdx

  if ( !*(_DWORD *)a2
    && *((_DWORD *)a2 + 1) == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data2
    && *((_DWORD *)a2 + 2) == *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
    && *((_DWORD *)a2 + 3) == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4]
    || *(_DWORD *)a2 == -1350114592
    && *((_DWORD *)a2 + 1) == *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data2
    && *((_DWORD *)a2 + 2) == *(_DWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4
    && *((_DWORD *)a2 + 3) == *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4[4]
    || *(_DWORD *)a2 == 2101284408
    && *((_DWORD *)a2 + 1) == 1051281424
    && *((_DWORD *)a2 + 2) == -1050331480
    && *((_DWORD *)a2 + 3) == 723772329
    || (-(__int64)(a1[17] != 0LL) & (unsigned __int64)(a1 + 16)) != 0
    && *(_DWORD *)a2 == -1796592748
    && *((_DWORD *)a2 + 1) == *(_DWORD *)&GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data2
    && *((_DWORD *)a2 + 2) == *(_DWORD *)GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data4
    && *((_DWORD *)a2 + 3) == *(_DWORD *)&GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data4[4] )
  {
    *a3 = a1;
LABEL_14:
    v9 = a1 + 16;
LABEL_15:
    __abi_FTMWeakRefData::Increment(v9);
    return 0LL;
  }
  if ( *(_DWORD *)a2 == 56
    && *((_DWORD *)a2 + 1) == *(_DWORD *)&_uuidof__AUIWeakReferenceSource_Details_Platform__.Data2
    && *((_DWORD *)a2 + 2) == *(_DWORD *)_uuidof__AUIWeakReferenceSource_Details_Platform__.Data4
    && *((_DWORD *)a2 + 3) == *(_DWORD *)&_uuidof__AUIWeakReferenceSource_Details_Platform__.Data4[4] )
  {
    v11 = (unsigned __int64)(a1 + 20);
    goto LABEL_21;
  }
  if ( *(_DWORD *)a2 == -1879262123 )
  {
    if ( *((_DWORD *)a2 + 1) == *(_DWORD *)&_uuidof__AUIXamlMultitaskingViewController__.Data2
      && *((_DWORD *)a2 + 2) == *(_DWORD *)_uuidof__AUIXamlMultitaskingViewController__.Data4
      && *((_DWORD *)a2 + 3) == *(_DWORD *)&_uuidof__AUIXamlMultitaskingViewController__.Data4[4] )
    {
      v11 = (unsigned __int64)(a1 + 2);
LABEL_21:
      *a3 = (void *)(v11 & -(__int64)(a1 != 0LL));
      goto LABEL_14;
    }
  }
  else if ( *(_DWORD *)a2 == -915487802
         && *((_DWORD *)a2 + 1) == *(_DWORD *)&_uuidof__AUIXamlSwitcherWindowInteractionEvents__.Data2
         && *((_DWORD *)a2 + 2) == *(_DWORD *)_uuidof__AUIXamlSwitcherWindowInteractionEvents__.Data4
         && *((_DWORD *)a2 + 3) == *(_DWORD *)&_uuidof__AUIXamlSwitcherWindowInteractionEvents__.Data4[4] )
  {
    v9 = a1 + 16;
    *a3 = (void *)((unsigned __int64)(a1 + 3) & -(__int64)(a1 != 0LL));
    goto LABEL_15;
  }
  if ( Platform::Guid::Equals(a2, &_uuidof__AU__IXamlBaseViewControllerPublicNonVirtuals__) )
  {
    v8 = (unsigned __int64)(a1 + 1) & -(__int64)(a1 != 0LL);
LABEL_44:
    *a3 = (void *)v8;
    v9 = (_QWORD *)v7;
    goto LABEL_15;
  }
  if ( Platform::Guid::Equals(v6, &_uuidof__AUIMonitorFrameDismissAnimationCallback__) )
  {
    v8 = (unsigned __int64)(a1 + 19) & -(__int64)(a1 != 0LL);
    goto LABEL_44;
  }
  if ( (-(__int64)(a1[17] != 0LL) & v7) != 0
    && !(unsigned int)__abi_FTMWeakRefData::__abi_QueryInterface(
                        (__abi_FTMWeakRefData *)((unsigned __int64)(a1 + 16) & -(__int64)(a1[17] != 0LL)),
                        a2,
                        a3) )
  {
    return 0LL;
  }
  return ___abi_QueryInterface__QObject_Platform__XamlBaseViewController__UE_AAAJAEAVGuid_2_PEAPEAX_Z(a1 + 1, a2, a3);
}
