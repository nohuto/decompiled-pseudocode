/*
 * XREFs of ?__abi_QueryInterface@KeyEventHandler@Input@Xaml@UI@Windows@@UE$AAAJAEAVGuid@Platform@@PEAPEAX@Z @ 0x180180410
 * Callers:
 *     ?__abi_QueryInterface@KeyEventHandler@Input@Xaml@UI@Windows@@W7E$AAAJAEAVGuid@Platform@@PEAPEAX@Z @ 0x1806B1520 (-__abi_QueryInterface@KeyEventHandler@Input@Xaml@UI@Windows@@W7E$AAAJAEAVGuid@Platform@@PEAPEAX@.c)
 *     ?__abi_QueryInterface@KeyEventHandler@Input@Xaml@UI@Windows@@WBA@E$AAAJAEAVGuid@Platform@@PEAPEAX@Z @ 0x1806B1530 (-__abi_QueryInterface@KeyEventHandler@Input@Xaml@UI@Windows@@WBA@E$AAAJAEAVGuid@Platform@@PEAPEA.c)
 * Callees:
 *     ?__abi_QueryInterface@__abi_FTMWeakRefData@@QEAAJAEAVGuid@Platform@@PEAPEAX@Z @ 0x180180568 (-__abi_QueryInterface@__abi_FTMWeakRefData@@QEAAJAEAVGuid@Platform@@PEAPEAX@Z.c)
 *     ?Increment@__abi_FTMWeakRefData@@QECAKXZ @ 0x180180E1C (-Increment@__abi_FTMWeakRefData@@QECAKXZ.c)
 */

__int64 __fastcall Windows::UI::Xaml::Input::KeyEventHandler::__abi_QueryInterface(
        void **a1,
        struct Platform::Guid *a2,
        void **a3)
{
  void **v3; // r10
  _QWORD *v6; // rcx

  v3 = a3;
  if ( *(_DWORD *)a2 )
  {
LABEL_2:
    if ( *(_DWORD *)a2 == 2086916837
      && *((_DWORD *)a2 + 1) == 1309833742
      && *((_DWORD *)a2 + 2) == 360147641
      && *((_DWORD *)a2 + 3) == -923701334 )
    {
      goto LABEL_11;
    }
    goto LABEL_3;
  }
  if ( *((_DWORD *)a2 + 1) == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data2
    && *((_DWORD *)a2 + 2) == *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4 )
  {
    if ( *((_DWORD *)a2 + 3) == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4] )
      goto LABEL_11;
    goto LABEL_2;
  }
LABEL_3:
  a3 = a1 + 3;
  if ( (-(__int64)(a1[4] != 0LL) & (unsigned __int64)(a1 + 3)) != 0 && *(_DWORD *)a2 == -1796592748 )
  {
    if ( *((_DWORD *)a2 + 1) != *(_DWORD *)&_uuidof__AUIAgileObject_Details_Platform__.Data2
      || *((_DWORD *)a2 + 2) != *(_DWORD *)_uuidof__AUIAgileObject_Details_Platform__.Data4 )
    {
      goto LABEL_6;
    }
    if ( *((_DWORD *)a2 + 3) == *(_DWORD *)&_uuidof__AUIAgileObject_Details_Platform__.Data4[4] )
    {
LABEL_11:
      v6 = a1 + 3;
LABEL_20:
      *v3 = a1;
      __abi_FTMWeakRefData::Increment(v6, a2, a3, a1);
      return 0LL;
    }
  }
  if ( *(_DWORD *)a2 == 2086916837
    && *((_DWORD *)a2 + 1) == 1309833742
    && *((_DWORD *)a2 + 2) == 360147641
    && *((_DWORD *)a2 + 3) == -923701334 )
  {
    v6 = a1 + 3;
    goto LABEL_20;
  }
LABEL_6:
  if ( (-(__int64)(a1[4] != 0LL) & (unsigned __int64)(a1 + 3)) != 0 )
    return (unsigned int)__abi_FTMWeakRefData::__abi_QueryInterface(
                           (__abi_FTMWeakRefData *)((unsigned __int64)a3 & -(__int64)(a1[4] != 0LL)),
                           a2,
                           v3) != 0
         ? 0x80004002
         : 0;
  else
    return 2147500034LL;
}
