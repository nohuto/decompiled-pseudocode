/*
 * XREFs of ??$GetUInt32@U_tagpropertykey@@@?$PropertyStoreHelperBase@UIPropertyStore@@@wil@@QEBAJU_tagpropertykey@@PEAK@Z @ 0x1802AFECC
 * Callers:
 *     ?CanPinToTaskbar@TaskbarPinHelper@@YAJPEAUIShellItem@@PEA_N@Z @ 0x1805C0950 (-CanPinToTaskbar@TaskbarPinHelper@@YAJPEAUIShellItem@@PEA_N@Z.c)
 *     ?GetTaskbarPinnableItem@TaskbarPinHelper@@YAJPEAUIShellItem@@PEAPEAU2@@Z @ 0x1805C2B4C (-GetTaskbarPinnableItem@TaskbarPinHelper@@YAJPEAUIShellItem@@PEAPEAU2@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall wil::PropertyStoreHelperBase<IPropertyStore>::GetUInt32<_tagpropertykey>(
        _QWORD *a1,
        __int128 *a2,
        _DWORD *a3)
{
  int v4; // ebx
  __int128 v6; // [rsp+20h] [rbp-58h] BYREF
  int v7; // [rsp+30h] [rbp-48h]
  PROPVARIANT pvar; // [rsp+40h] [rbp-38h] BYREF
  int v9; // [rsp+48h] [rbp-30h]

  *a3 = 0;
  LOWORD(pvar) = 0;
  v6 = *a2;
  v7 = *((_DWORD *)a2 + 4);
  v4 = (*(__int64 (__fastcall **)(_QWORD, __int128 *, PROPVARIANT *))(*(_QWORD *)*a1 + 40LL))(*a1, &v6, &pvar);
  if ( v4 >= 0 )
  {
    if ( (_WORD)pvar )
    {
      if ( (_WORD)pvar == 19 )
        *a3 = v9;
      else
        v4 = -2147352571;
    }
    else
    {
      v4 = -2147023728;
    }
  }
  PropVariantClear(&pvar);
  return (unsigned int)v4;
}
