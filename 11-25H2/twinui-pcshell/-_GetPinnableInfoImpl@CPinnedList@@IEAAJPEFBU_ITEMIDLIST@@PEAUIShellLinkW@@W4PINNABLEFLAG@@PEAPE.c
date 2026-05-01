/*
 * XREFs of ?_GetPinnableInfoImpl@CPinnedList@@IEAAJPEFBU_ITEMIDLIST@@PEAUIShellLinkW@@W4PINNABLEFLAG@@PEAPEAUIShellItem@@3PEAPEAGPEAH@Z @ 0x180672B70
 * Callers:
 *     ?GetPinnableInfo@CPinnedList@@UEAAJPEAUIDataObject@@W4PINNABLEFLAG@@PEAPEAUIShellItem@@2PEAPEAGPEAH@Z @ 0x18066AE00 (-GetPinnableInfo@CPinnedList@@UEAAJPEAUIDataObject@@W4PINNABLEFLAG@@PEAPEAUIShellItem@@2PEAPEAGP.c)
 *     ?_ShouldAddMenu@CPinnedList@@IEAAJI@Z @ 0x1806733C0 (-_ShouldAddMenu@CPinnedList@@IEAAJI@Z.c)
 * Callees:
 *     ??$SafeRelease@UIShellItemArray@@@@YAXPEAPEAUIShellItemArray@@@Z @ 0x1802C068C (--$SafeRelease@UIShellItemArray@@@@YAXPEAPEAUIShellItemArray@@@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CPinnedList::_GetPinnableInfoImpl(
        __int64 a1,
        const ITEMIDLIST *a2,
        __int64 a3,
        char a4,
        IUnknown **ppv,
        __int64 *a6,
        LPVOID *a7,
        BOOL *a8)
{
  HRESULT DestinationItem; // ebx
  LPVOID v12; // r8
  BOOL v13; // eax
  __int64 v15; // [rsp+28h] [rbp-90h]
  LPITEMIDLIST ppidl; // [rsp+50h] [rbp-68h] BYREF
  LPVOID pv; // [rsp+58h] [rbp-60h]

  if ( ppv )
    *ppv = 0LL;
  if ( a6 )
    *a6 = 0LL;
  if ( a7 )
    *a7 = 0LL;
  pv = 0LL;
  DestinationItem = 1;
  HIDWORD(v15) = HIDWORD(a7);
  if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a1 + 112LL))(a1) )
  {
    DestinationItem = 0;
    if ( !ppv )
    {
LABEL_29:
      CoTaskMemFree(pv);
      goto LABEL_30;
    }
    ppidl = 0LL;
    if ( *ppv && (!a6 || !*a6) )
    {
      DestinationItem = SHGetIDListFromObject(*ppv, &ppidl);
      if ( DestinationItem < 0 )
        goto LABEL_23;
      a2 = ppidl;
    }
    if ( a2 )
    {
      if ( (a4 & 4) != 0 && *a6 )
      {
        if ( pv )
        {
          if ( a7 )
            v12 = *a7;
          else
            v12 = 0LL;
          LODWORD(v15) = 1;
          DestinationItem = MakeDestinationItem(*a6, 0LL, v12, 0LL, pv, v15, 0LL);
        }
      }
      else
      {
        SafeRelease<IShellItemArray>((__int64 *)ppv);
        DestinationItem = SHCreateItemFromIDList(a2, &GUID_43826d1e_e718_42ee_bc55_a1e261c37bfe, (void **)ppv);
      }
      goto LABEL_24;
    }
LABEL_23:
    DestinationItem = -2147024882;
LABEL_24:
    ILFree(ppidl);
    if ( DestinationItem < 0 )
    {
      if ( a7 )
      {
        CoTaskMemFree(*a7);
        *a7 = 0LL;
      }
      SafeRelease<IShellItemArray>((__int64 *)ppv);
      if ( a6 )
        SafeRelease<IShellItemArray>(a6);
    }
    goto LABEL_29;
  }
LABEL_30:
  if ( a8 )
  {
    v13 = DestinationItem >= 0 && DestinationItem != 1;
    *a8 = v13;
  }
  if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a1 + 120LL))(a1) )
    return 1;
  return (unsigned int)DestinationItem;
}
