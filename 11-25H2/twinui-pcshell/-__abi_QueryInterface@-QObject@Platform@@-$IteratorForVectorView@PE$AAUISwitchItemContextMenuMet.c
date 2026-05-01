/*
 * XREFs of ?__abi_QueryInterface@?QObject@Platform@@?$IteratorForVectorView@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Details@Collections@2@UE$AAAJAEAVGuid@2@PEAPEAX@Z @ 0x180691950
 * Callers:
 *     ?__abi_QueryInterface@?QObject@Platform@@?$IteratorForVectorView@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Details@Collections@2@W7E$AAAJAEAVGuid@2@PEAPEAX@Z @ 0x180691A80 (-__abi_QueryInterface@-QObject@Platform@@-$IteratorForVectorView@PE$AAUISwitchItemC_ea_180691A80.c)
 *     ?__abi_QueryInterface@?QObject@Platform@@?$IteratorForVectorView@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Details@Collections@2@WBA@E$AAAJAEAVGuid@2@PEAPEAX@Z @ 0x180691A90 (-__abi_QueryInterface@-QObject@Platform@@-$IteratorForVectorView@PE$AAUISwitchItemC_ea_180691A90.c)
 *     ?__abi_QueryInterface@?QObject@Platform@@?$IteratorForVectorView@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Details@Collections@2@WBI@E$AAAJAEAVGuid@2@PEAPEAX@Z @ 0x180691AA0 (-__abi_QueryInterface@-QObject@Platform@@-$IteratorForVectorView@PE$AAUISwitchItemC_ea_180691AA0.c)
 *     ?__abi_QueryInterface@?QObject@Platform@@?$IteratorForVectorView@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Details@Collections@2@WCA@E$AAAJAEAVGuid@2@PEAPEAX@Z @ 0x180691AB0 (-__abi_QueryInterface@-QObject@Platform@@-$IteratorForVectorView@PE$AAUISwitchItemC_ea_180691AB0.c)
 *     ?__abi_QueryInterface@?QObject@Platform@@?$IteratorForVectorView@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Details@Collections@2@WCI@E$AAAJAEAVGuid@2@PEAPEAX@Z @ 0x180691AC0 (-__abi_QueryInterface@-QObject@Platform@@-$IteratorForVectorView@PE$AAUISwitchItemC_ea_180691AC0.c)
 * Callees:
 *     ?__abi_QueryInterface@__abi_FTMWeakRefData@@QEAAJAEAVGuid@Platform@@PEAPEAX@Z @ 0x18018AA2C (-__abi_QueryInterface@__abi_FTMWeakRefData@@QEAAJAEAVGuid@Platform@@PEAPEAX@Z.c)
 *     ?Increment@__abi_FTMWeakRefData@@QECAKXZ @ 0x18018B444 (-Increment@__abi_FTMWeakRefData@@QECAKXZ.c)
 *     ?Equals@Guid@Platform@@QEAA_NAEBU_GUID@@@Z @ 0x1801B8D40 (-Equals@Guid@Platform@@QEAA_NAEBU_GUID@@@Z.c)
 */

__int64 __fastcall ___abi_QueryInterface__QObject_Platform____IteratorForVectorView_PE_AAUISwitchItemContextMenuMetadata_Switcher_Experiences_ComposableShell_WindowsInternal___Details_Collections_2_UE_AAAJAEAVGuid_2_PEAPEAX_Z(
        __int64 a1,
        Platform::Guid *a2)
{
  Platform::Guid *v2; // rcx
  __int64 v3; // r9
  _QWORD *v4; // r11
  Platform::Guid *v5; // rcx
  Platform::Guid *v6; // r10
  Platform::Guid *v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  void **v10; // r11
  __int64 v11; // rax
  __int64 v12; // rcx
  Platform::Guid *v13; // rcx
  __int64 v14; // r9
  __int64 v15; // rcx
  struct Platform::Guid *v16; // r10

  if ( Platform::Guid::Equals(a2, &GUID_00000000_0000_0000_c000_000000000046)
    || Platform::Guid::Equals(v2, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90)
    || Platform::Guid::Equals(
         v5,
         &_uuidof__AU__IIterator_PE_AAUISwitchItemContextMenuMetadata_Switcher_Experiences_ComposableShell_WindowsInternal___Collections_Foundation_Windows__)
    || (-(__int64)(*(_QWORD *)(v3 + 96) != 0LL) & (v3 + 88)) != 0
    && Platform::Guid::Equals(v6, &GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90) )
  {
    *v4 = v3;
    v12 = v3 + 88;
    goto LABEL_18;
  }
  if ( Platform::Guid::Equals(v6, &_uuidof__AUIWeakReferenceSource_Details_Platform__) )
  {
    v11 = (v9 + 32) & -(__int64)(v9 != 0);
LABEL_8:
    *v10 = (void *)v11;
    v12 = v8;
LABEL_18:
    __abi_FTMWeakRefData::Increment(v12);
    return 0LL;
  }
  if ( Platform::Guid::Equals(v7, &_uuidof__AUIBindableIterator_Interop_Xaml_UI_Windows__) )
  {
    v15 = v14 + 16;
LABEL_11:
    v11 = v15 & -(__int64)(v14 != 0);
    goto LABEL_8;
  }
  if ( Platform::Guid::Equals(
         v13,
         &_uuidof__AU__I__IteratorForVectorView_PE_AAUISwitchItemContextMenuMetadata_Switcher_Experiences_ComposableShell_WindowsInternal__PublicNonVirtuals_Details_Collections_Platform__) )
  {
    v15 = v14 + 8;
    goto LABEL_11;
  }
  if ( (-(__int64)(*(_QWORD *)(v14 + 96) != 0LL) & v8) != 0 )
    return (unsigned int)__abi_FTMWeakRefData::__abi_QueryInterface(
                           (__abi_FTMWeakRefData *)(v8 & -(__int64)(*(_QWORD *)(v14 + 96) != 0LL)),
                           v16,
                           v10) != 0
         ? 0x80004002
         : 0;
  else
    return 2147500034LL;
}
