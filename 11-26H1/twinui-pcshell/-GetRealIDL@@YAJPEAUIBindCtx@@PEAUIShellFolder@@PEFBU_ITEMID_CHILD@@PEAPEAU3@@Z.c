/*
 * XREFs of ?GetRealIDL@@YAJPEAUIBindCtx@@PEAUIShellFolder@@PEFBU_ITEMID_CHILD@@PEAPEAU3@@Z @ 0x1806CB960
 * Callers:
 *     SimpleToRealIDListWithContext @ 0x1806CC11C (SimpleToRealIDListWithContext.c)
 * Callees:
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     DisplayNameOfW @ 0x18068B21C (DisplayNameOfW.c)
 *     ?IShellItem_GetFilePlaceholderStatus@@YAJPEAUIShellItem@@PEAK@Z @ 0x1806CBC4C (-IShellItem_GetFilePlaceholderStatus@@YAJPEAUIShellItem@@PEAK@Z.c)
 *     ?SHILCloneFirst@@YAJPEFBU_ITEMIDLIST_RELATIVE@@PEAPEAU_ITEMID_CHILD@@@Z @ 0x1806CC01C (-SHILCloneFirst@@YAJPEFBU_ITEMIDLIST_RELATIVE@@PEAPEAU_ITEMID_CHILD@@@Z.c)
 *     ?_GetAttributesFromFolderAndIDList@@YAJPEAUIShellFolder@@PEFBU_ITEMIDLIST_RELATIVE@@PEAUIBindCtx@@KPEAK@Z @ 0x1806CC050 (-_GetAttributesFromFolderAndIDList@@YAJPEAUIShellFolder@@PEFBU_ITEMIDLIST_RELATIVE@@PEAUIBindCtx.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall GetRealIDL(
        struct IBindCtx *a1,
        struct IShellFolder *a2,
        const struct _ITEMID_CHILD *a3,
        struct _ITEMID_CHILD **a4)
{
  struct IShellFolderVtbl *lpVtbl; // rax
  struct IBindCtx *v9; // r8
  unsigned int v10; // r9d
  HRESULT v11; // ebx
  bool v12; // bl
  int v13; // eax
  struct _ITEMID_CHILD *v14; // rcx
  _WORD *v15; // rdx
  unsigned int v17; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v18; // [rsp+48h] [rbp-B8h] BYREF
  struct IShellItem *ppvItem; // [rsp+50h] [rbp-B0h] BYREF
  WCHAR v20[264]; // [rsp+60h] [rbp-A0h] BYREF

  *a4 = 0LL;
  lpVtbl = a2->lpVtbl;
  v18 = 0LL;
  if ( ((__int64 (__fastcall *)(struct IShellFolder *, GUID *, __int64 *))lpVtbl->QueryInterface)(
         a2,
         &GUID_6589b6d2_5f8d_4b9e_b7e0_23cdd9717d8c,
         &v18) >= 0 )
  {
    v11 = (*(__int64 (__fastcall **)(__int64, struct IBindCtx *, const struct _ITEMID_CHILD *, struct _ITEMID_CHILD **))(*(_QWORD *)v18 + 24LL))(
            v18,
            a1,
            a3,
            a4);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
    return (unsigned int)v11;
  }
  if ( !a3 || !*(_WORD *)a3 )
    return (unsigned int)SHILCloneFirst(a3, a4);
  v17 = 0;
  _GetAttributesFromFolderAndIDList(a2, a3, v9, v10, &v17);
  if ( !v17 )
  {
    ppvItem = 0LL;
    if ( SHCreateItemWithParent(
           0LL,
           a2,
           (LPCITEMIDLIST)a3,
           &GUID_43826d1e_e718_42ee_bc55_a1e261c37bfe,
           (void **)&ppvItem) < 0 )
      return (unsigned int)SHILCloneFirst(a3, a4);
    v12 = 0;
    v17 = 0;
    if ( (int)IShellItem_GetFilePlaceholderStatus(ppvItem, &v17) >= 0 )
      v12 = (v17 & 2) == 0;
    ((void (__fastcall *)(struct IShellItem *))ppvItem->lpVtbl->Release)(ppvItem);
    if ( !v12 )
      return (unsigned int)SHILCloneFirst(a3, a4);
  }
  v11 = DisplayNameOfW((__int64)a2, (const ITEMIDLIST *)a3, 0x8001u, v20);
  if ( v11 >= 0 )
  {
    v13 = IShellFolder_ParseDisplayName(a2, 0LL, a1, v20, 0LL, a4, 0LL);
    v11 = v13;
    if ( v13 == -2147467263
      || v13 >= 0
      && (v14 = *a4) != 0LL
      && *(_WORD *)v14
      && (v15 = (_WORD *)((char *)v14 + *(unsigned __int16 *)v14)) != 0LL
      && *v15 )
    {
      ILFree((LPITEMIDLIST)*a4);
      return (unsigned int)SHILCloneFirst(a3, a4);
    }
  }
  return (unsigned int)v11;
}
