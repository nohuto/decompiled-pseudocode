/*
 * XREFs of ??$GetAsString@U_tagpropertykey@@@?$CPropertyStoreHelperBase@UIPropertyStore@@@@QEBAJU_tagpropertykey@@PEAPEAG@Z @ 0x1800AB084
 * Callers:
 *     ?_CheckLinkHash@CLauncherTipContextMenu@@AEAAJAEBVCPropertyStoreHelper@@PEAK@Z @ 0x1800AA594 (-_CheckLinkHash@CLauncherTipContextMenu@@AEAAJAEBVCPropertyStoreHelper@@PEAK@Z.c)
 *     ?_AddLinkToCommands@CLauncherTipContextMenu@@AEAAXPEAUIShellItem2@@_NI@Z @ 0x1801927C4 (-_AddLinkToCommands@CLauncherTipContextMenu@@AEAAXPEAUIShellItem2@@_NI@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CPropertyStoreHelperBase<IPropertyStore>::GetAsString<_tagpropertykey>(
        _QWORD *a1,
        __int128 *a2,
        PWSTR *a3)
{
  HRESULT v4; // ebx
  __int128 v6; // [rsp+20h] [rbp-48h] BYREF
  int v7; // [rsp+30h] [rbp-38h]
  PROPVARIANT pvar[2]; // [rsp+40h] [rbp-28h] BYREF
  __int64 v9; // [rsp+50h] [rbp-18h]

  *a3 = 0LL;
  LOWORD(pvar[0]) = 0;
  v6 = *a2;
  v7 = *((_DWORD *)a2 + 4);
  v4 = (*(__int64 (__fastcall **)(_QWORD, __int128 *, PROPVARIANT *))(*(_QWORD *)*a1 + 40LL))(*a1, &v6, pvar);
  if ( v4 >= 0 )
  {
    if ( LOWORD(pvar[0]) )
    {
      if ( LOWORD(pvar[0]) == 31 && pvar[1] )
      {
        *a3 = (PWSTR)pvar[1];
        *(_OWORD *)pvar = 0LL;
        v9 = 0LL;
        v4 = 0;
      }
      else
      {
        *a3 = 0LL;
        v4 = PropVariantToStringAlloc(pvar, a3);
      }
    }
    else
    {
      v4 = -2147023728;
    }
  }
  PropVariantClear(pvar);
  return (unsigned int)v4;
}
