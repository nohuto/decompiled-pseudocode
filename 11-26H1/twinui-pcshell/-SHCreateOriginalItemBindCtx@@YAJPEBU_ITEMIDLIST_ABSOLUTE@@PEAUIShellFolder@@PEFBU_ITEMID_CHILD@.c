/*
 * XREFs of ?SHCreateOriginalItemBindCtx@@YAJPEBU_ITEMIDLIST_ABSOLUTE@@PEAUIShellFolder@@PEFBU_ITEMID_CHILD@@KW4REPARSE_PARTIAL_IDLIST_MODE@@PEAPEAUIBindCtx@@@Z @ 0x1806CBE48
 * Callers:
 *     ?GetParsingBindCtx@@YAJPEAUIShellFolder2@@PEFBU_ITEMID_CHILD@@HPEAPEAUIBindCtx@@@Z @ 0x1806CB7C0 (-GetParsingBindCtx@@YAJPEAUIShellFolder2@@PEFBU_ITEMID_CHILD@@HPEAPEAUIBindCtx@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     memset_0 @ 0x1802C9ECC (memset_0.c)
 *     ?_CreateFileSysBindCtx@@YAJPEAUIBindCtx@@PEBU_WIN32_FIND_DATAW@@PEAPEAU1@@Z @ 0x180698A04 (-_CreateFileSysBindCtx@@YAJPEAUIBindCtx@@PEBU_WIN32_FIND_DATAW@@PEAPEAU1@@Z.c)
 *     ?MarkItemAsSimple@@YAJPEAUIShellItem@@@Z @ 0x1806CBD6C (-MarkItemAsSimple@@YAJPEAUIShellItem@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall SHCreateOriginalItemBindCtx(
        __int64 a1,
        IShellFolder *a2,
        const ITEMIDLIST *a3,
        __int64 a4,
        __int64 a5,
        struct IBindCtx **a6)
{
  int v6; // ebx
  int v7; // edx
  int v8; // ecx
  DWORD v9; // ebx
  const struct _GUID *v10; // rcx
  struct IBindCtx *v11; // rcx
  unsigned int v13; // [rsp+30h] [rbp-D0h] BYREF
  struct IShellItem *ppvItem; // [rsp+38h] [rbp-C8h] BYREF
  _DWORD v15[2]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v16; // [rsp+48h] [rbp-B8h]
  struct _WIN32_FIND_DATAW v17; // [rsp+50h] [rbp-B0h] BYREF

  ppvItem = 0LL;
  *a6 = 0LL;
  v6 = SHCreateItemWithParent(0LL, a2, a3, &GUID_43826d1e_e718_42ee_bc55_a1e261c37bfe, (void **)&ppvItem);
  if ( v6 >= 0 )
  {
    v13 = 0;
    v6 = ((__int64 (__fastcall *)(struct IShellItem *, __int64, unsigned int *))ppvItem->lpVtbl->GetAttributes)(
           ppvItem,
           1614807040LL,
           &v13);
    if ( v6 >= 0 )
    {
      v7 = (v13 >> 18) & 1 | 2;
      if ( (v13 & 0x80000) == 0 )
        v7 = (v13 >> 18) & 1;
      if ( (v13 & 0x60000000) == 0x60000000 && (v13 & 0x400000) == 0 )
        v7 |= 0x10u;
      v8 = v7 | 0x800;
      if ( (v13 & 0x4000000) == 0 )
        v8 = v7;
      v9 = v8 | 0x4000;
      if ( (v13 & 0x2000) == 0 )
        v9 = v8;
      if ( !v9 )
        v9 = 128;
      memset_0(&v17.ftCreationTime, 0, 0x24CuLL);
      v17.dwFileAttributes = v9;
      v6 = _CreateFileSysBindCtx(v10, &v17, a6);
      if ( v6 >= 0 )
      {
        v11 = *a6;
        v15[0] = 16;
        v15[1] = 0;
        v16 = 4096LL;
        v6 = ((__int64 (__fastcall *)(struct IBindCtx *, _DWORD *))v11->lpVtbl->SetBindOptions)(v11, v15);
        if ( v6 < 0
          || (v6 = MarkItemAsSimple(ppvItem), v6 < 0)
          || (v6 = ((__int64 (__fastcall *)(struct IBindCtx *, const wchar_t *, struct IShellItem *))(*a6)->lpVtbl->RegisterObjectParam)(
                     *a6,
                     L"ParseOriginalItem",
                     ppvItem),
              v6 < 0) )
        {
          ((void (__fastcall *)(struct IBindCtx *))(*a6)->lpVtbl->Release)(*a6);
          *a6 = 0LL;
        }
      }
    }
    ((void (__fastcall *)(struct IShellItem *))ppvItem->lpVtbl->Release)(ppvItem);
  }
  return (unsigned int)v6;
}
