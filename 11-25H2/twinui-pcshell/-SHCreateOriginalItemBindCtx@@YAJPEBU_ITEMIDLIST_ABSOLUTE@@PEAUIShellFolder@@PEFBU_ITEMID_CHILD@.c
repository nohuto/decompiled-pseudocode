/*
 * XREFs of ?SHCreateOriginalItemBindCtx@@YAJPEBU_ITEMIDLIST_ABSOLUTE@@PEAUIShellFolder@@PEFBU_ITEMID_CHILD@@KW4REPARSE_PARTIAL_IDLIST_MODE@@PEAPEAUIBindCtx@@@Z @ 0x1806A3D90
 * Callers:
 *     ?GetParsingBindCtx@@YAJPEAUIShellFolder2@@PEFBU_ITEMID_CHILD@@HPEAPEAUIBindCtx@@@Z @ 0x1806A36E4 (-GetParsingBindCtx@@YAJPEAUIShellFolder2@@PEFBU_ITEMID_CHILD@@HPEAPEAUIBindCtx@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     memset_0 @ 0x1802D2FFC (memset_0.c)
 *     ?_CreateFileSysBindCtx@@YAJPEAUIBindCtx@@PEBU_WIN32_FIND_DATAW@@PEAPEAU1@@Z @ 0x180671D54 (-_CreateFileSysBindCtx@@YAJPEAUIBindCtx@@PEBU_WIN32_FIND_DATAW@@PEAPEAU1@@Z.c)
 *     ?MarkItemAsSimple@@YAJPEAUIShellItem@@@Z @ 0x1806A3CBC (-MarkItemAsSimple@@YAJPEAUIShellItem@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
  int v8; // r8d
  int v9; // ecx
  DWORD v10; // ebx
  const struct _GUID *v11; // rcx
  struct IBindCtx *v12; // rcx
  unsigned int v14; // [rsp+30h] [rbp-D0h] BYREF
  struct IShellItem *ppvItem; // [rsp+38h] [rbp-C8h] BYREF
  _DWORD v16[2]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v17; // [rsp+48h] [rbp-B8h]
  struct _WIN32_FIND_DATAW v18; // [rsp+50h] [rbp-B0h] BYREF

  ppvItem = 0LL;
  *a6 = 0LL;
  v6 = SHCreateItemWithParent(0LL, a2, a3, &GUID_43826d1e_e718_42ee_bc55_a1e261c37bfe, (void **)&ppvItem);
  if ( v6 >= 0 )
  {
    v14 = 0;
    v6 = ((__int64 (__fastcall *)(struct IShellItem *, __int64, unsigned int *))ppvItem->lpVtbl->GetAttributes)(
           ppvItem,
           1614807040LL,
           &v14);
    if ( v6 >= 0 )
    {
      v7 = (v14 >> 18) & 1 | 2;
      if ( (v14 & 0x80000) == 0 )
        v7 = (v14 >> 18) & 1;
      v8 = v7;
      if ( (v14 & 0x60000000) == 0x60000000 && (v14 & 0x400000) == 0 )
        v8 = v7 | 0x10;
      v9 = v8 | 0x800;
      if ( (v14 & 0x4000000) == 0 )
        v9 = v8;
      v10 = v9 | 0x4000;
      if ( (v14 & 0x2000) == 0 )
        v10 = v9;
      if ( !v10 )
        v10 = 128;
      memset_0(&v18.ftCreationTime, 0, 0x24CuLL);
      v18.dwFileAttributes = v10;
      v6 = _CreateFileSysBindCtx(v11, &v18, a6);
      if ( v6 >= 0 )
      {
        v12 = *a6;
        v16[0] = 16;
        v16[1] = 0;
        v17 = 4096LL;
        v6 = ((__int64 (__fastcall *)(struct IBindCtx *, _DWORD *))v12->lpVtbl->SetBindOptions)(v12, v16);
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
