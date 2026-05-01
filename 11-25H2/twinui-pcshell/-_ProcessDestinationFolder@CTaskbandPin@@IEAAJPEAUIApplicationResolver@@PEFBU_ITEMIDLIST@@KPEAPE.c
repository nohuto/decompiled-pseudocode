/*
 * XREFs of ?_ProcessDestinationFolder@CTaskbandPin@@IEAAJPEAUIApplicationResolver@@PEFBU_ITEMIDLIST@@KPEAPEAUIShellItem@@PEAPEAG@Z @ 0x180663A04
 * Callers:
 *     ?_ProcessDestinationFile@CTaskbandPin@@IEAAJPEAUIApplicationResolver@@PEFBU_ITEMIDLIST@@KPEAPEAUIShellItem@@PEAPEAG3@Z @ 0x1806636C8 (-_ProcessDestinationFile@CTaskbandPin@@IEAAJPEAUIApplicationResolver@@PEFBU_ITEMIDLIST@@KPEAPEAU.c)
 *     ?v_IsAcceptableTarget@CTaskbandPin@@MEAAHPEFBU_ITEMIDLIST@@PEAUIShellLinkW@@W4PINNABLEFLAG@@PEAPEAUIShellItem@@PEAPEAG43@Z @ 0x180663E60 (-v_IsAcceptableTarget@CTaskbandPin@@MEAAHPEFBU_ITEMIDLIST@@PEAUIShellLinkW@@W4PINNABLEFLAG@@PEAP.c)
 * Callees:
 *     ??$SafeRelease@UIShellItemArray@@@@YAXPEAPEAUIShellItemArray@@@Z @ 0x1802C068C (--$SafeRelease@UIShellItemArray@@@@YAXPEAPEAUIShellItemArray@@@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ?IsPinned@CPinnedList@@UEAAJPEFBU_ITEMIDLIST@@@Z @ 0x18066D560 (-IsPinned@CPinnedList@@UEAAJPEFBU_ITEMIDLIST@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CTaskbandPin::_ProcessDestinationFolder(
        CTaskbandPin *this,
        struct IApplicationResolver *a2,
        const struct _ITEMIDLIST *a3,
        __int64 a4,
        IUnknown **a5,
        unsigned __int16 **a6)
{
  HRESULT v8; // edi
  IUnknown *v9; // rcx
  int IsPinned; // ebx
  LPITEMIDLIST ppidl; // [rsp+30h] [rbp-48h] BYREF
  void *ppv; // [rsp+38h] [rbp-40h] BYREF

  if ( a6 )
    *a6 = 0LL;
  if ( a5 )
    *a5 = 0LL;
  ppv = 0LL;
  v8 = SHCreateItemFromIDList(a3, &GUID_43826d1e_e718_42ee_bc55_a1e261c37bfe, &ppv);
  if ( v8 >= 0 )
  {
    v8 = DetermineFolderDestinationParentAppID(a2, ppv, a5, a6, 0LL);
    if ( v8 >= 0 )
    {
      if ( (unsigned int)SHWindowsPolicy(&POLID_NoPinningToTaskbar) )
      {
        v9 = *a5;
        ppidl = 0LL;
        v8 = SHGetIDListFromObject(v9, &ppidl);
        if ( v8 < 0
          || (IsPinned = CPinnedList::IsPinned((CTaskbandPin *)((char *)this + 16), ppidl), ILFree(ppidl), IsPinned) )
        {
          if ( a5 )
            SafeRelease<IShellItemArray>((__int64 *)a5);
          if ( a6 )
          {
            CoTaskMemFree(*a6);
            *a6 = 0LL;
          }
          v8 = -2147024891;
        }
      }
    }
    (*(void (__fastcall **)(void *))(*(_QWORD *)ppv + 16LL))(ppv);
  }
  return (unsigned int)v8;
}
