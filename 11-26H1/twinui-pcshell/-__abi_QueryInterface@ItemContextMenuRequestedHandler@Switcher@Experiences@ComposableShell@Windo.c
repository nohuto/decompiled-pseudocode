/*
 * XREFs of ?__abi_QueryInterface@ItemContextMenuRequestedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@UE$AAAJAEAVGuid@Platform@@PEAPEAX@Z @ 0x1806A41F0
 * Callers:
 *     ?__abi_QueryInterface@ItemContextMenuRequestedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@W7E$AAAJAEAVGuid@Platform@@PEAPEAX@Z @ 0x1806A42C0 (-__abi_QueryInterface@ItemContextMenuRequestedHandler@Switcher@Experiences@Composab_ea_1806A42C0.c)
 *     ?__abi_QueryInterface@ItemContextMenuRequestedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@WBA@E$AAAJAEAVGuid@Platform@@PEAPEAX@Z @ 0x1806A42D0 (-__abi_QueryInterface@ItemContextMenuRequestedHandler@Switcher@Experiences@Composab_ea_1806A42D0.c)
 * Callees:
 *     ?__abi_QueryInterface@__abi_FTMWeakRefData@@QEAAJAEAVGuid@Platform@@PEAPEAX@Z @ 0x180180568 (-__abi_QueryInterface@__abi_FTMWeakRefData@@QEAAJAEAVGuid@Platform@@PEAPEAX@Z.c)
 *     ?Increment@__abi_FTMWeakRefData@@QECAKXZ @ 0x180180E1C (-Increment@__abi_FTMWeakRefData@@QECAKXZ.c)
 *     ?Equals@Guid@Platform@@QEAA_NAEBU_GUID@@@Z @ 0x1801B2238 (-Equals@Guid@Platform@@QEAA_NAEBU_GUID@@@Z.c)
 */

__int64 __fastcall WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuRequestedHandler::__abi_QueryInterface(
        __int64 a1,
        Platform::Guid *a2)
{
  Platform::Guid *v2; // rcx
  _QWORD *v3; // r9
  void **v4; // r11
  Platform::Guid *v5; // r10
  __int64 v6; // r8
  struct Platform::Guid *v7; // r10
  __int64 v8; // rcx

  if ( Platform::Guid::Equals(a2, &GUID_00000000_0000_0000_c000_000000000046)
    || Platform::Guid::Equals(
         v2,
         &_uuidof__AVItemContextMenuRequestedHandler_Switcher_Experiences_ComposableShell_WindowsInternal__)
    || (-(__int64)(v3[4] != 0LL) & (unsigned __int64)(v3 + 3)) != 0
    && Platform::Guid::Equals(v5, &_uuidof__AUIAgileObject_Details_Platform__) )
  {
    v8 = (__int64)(v3 + 3);
    goto LABEL_11;
  }
  if ( Platform::Guid::Equals(
         v5,
         &_uuidof__AU__abi_IDelegate_ItemContextMenuRequestedHandler_Switcher_Experiences_ComposableShell_WindowsInternal__) )
  {
    v8 = v6;
LABEL_11:
    *v4 = v3;
    __abi_FTMWeakRefData::Increment(v8);
    return 0LL;
  }
  if ( (-(__int64)(*(_QWORD *)(v6 + 8) != 0LL) & v6) != 0 )
    return (unsigned int)__abi_FTMWeakRefData::__abi_QueryInterface(
                           (__abi_FTMWeakRefData *)(v6 & -(__int64)(v3[4] != 0LL)),
                           v7,
                           v4) != 0
         ? 0x80004002
         : 0;
  else
    return 2147500034LL;
}
