/*
 * XREFs of ?_ResolveTargetLink@CPinnedList@@IEAAJPEFBU_ITEMIDLIST@@PEAH@Z @ 0x180699ED8
 * Callers:
 *     ?UpdateForRemovedItemsAsNecessary@CPinnedList@@UEAAJXZ @ 0x180698620 (-UpdateForRemovedItemsAsNecessary@CPinnedList@@UEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?s_GetDarwinLinkInfo@CPinnedList@@KAHPEAUIShellLinkW@@PEAHPEAGI@Z @ 0x18069ADB0 (-s_GetDarwinLinkInfo@CPinnedList@@KAHPEAUIShellLinkW@@PEAHPEAGI@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CPinnedList::_ResolveTargetLink(CPinnedList *this, const struct _ITEMIDLIST *a2, int *a3)
{
  HRESULT v6; // ebx
  struct IShellLinkW *v8; // [rsp+30h] [rbp-40h] BYREF
  void *v9; // [rsp+38h] [rbp-38h] BYREF
  LPCITEMIDLIST pidl; // [rsp+40h] [rbp-30h] BYREF
  void *ppv; // [rsp+48h] [rbp-28h] BYREF
  LPCITEMIDLIST ppidlLast; // [rsp+50h] [rbp-20h] BYREF
  int v13; // [rsp+58h] [rbp-18h] BYREF

  ppv = 0LL;
  v6 = SHCreateItemFromIDList(a2, &GUID_43826d1e_e718_42ee_bc55_a1e261c37bfe, &ppv);
  if ( v6 >= 0 )
  {
    v8 = 0LL;
    if ( (*(int (__fastcall **)(void *, _QWORD, const GUID *, GUID *, struct IShellLinkW **))(*(_QWORD *)ppv + 24LL))(
           ppv,
           0LL,
           &BHID_SFUIObject,
           &GUID_000214f9_0000_0000_c000_000000000046,
           &v8) < 0 )
    {
LABEL_7:
      (*(void (__fastcall **)(void *))(*(_QWORD *)ppv + 16LL))(ppv);
      return (unsigned int)v6;
    }
    v13 = 0;
    if ( CPinnedList::s_GetDarwinLinkInfo(v8, &v13, 0LL, 0) )
    {
      if ( v13 )
      {
LABEL_5:
        v6 = 0;
LABEL_6:
        ((void (__fastcall *)(struct IShellLinkW *))v8->lpVtbl->Release)(v8);
        goto LABEL_7;
      }
    }
    else
    {
      pidl = 0LL;
      if ( ((unsigned int (__fastcall *)(struct IShellLinkW *, LPCITEMIDLIST *))v8->lpVtbl->GetIDList)(v8, &pidl) )
        goto LABEL_5;
      ppidlLast = 0LL;
      v9 = 0LL;
      v6 = SHBindToParent(pidl, &GUID_000214e6_0000_0000_c000_000000000046, &v9, &ppidlLast);
      if ( v6 >= 0 )
      {
        v13 = 0x1000000;
        v6 = (*(__int64 (__fastcall **)(void *, __int64, LPCITEMIDLIST *, int *))(*(_QWORD *)v9 + 72LL))(
               v9,
               1LL,
               &ppidlLast,
               &v13);
        (*(void (__fastcall **)(void *))(*(_QWORD *)v9 + 16LL))(v9);
      }
      ILFree((LPITEMIDLIST)pidl);
      if ( ((int)(v6 + 0x80000000) < 0 || v6 == -2147467263) && v6 != 1 )
        goto LABEL_6;
    }
    v6 = (*(__int64 (__fastcall **)(char *, const struct _ITEMIDLIST *, __int64))(*((_QWORD *)this + 4) + 24LL))(
           (char *)this + 32,
           a2,
           13LL);
    if ( v6 >= 0 )
      *a3 = 1;
    goto LABEL_6;
  }
  return (unsigned int)v6;
}
