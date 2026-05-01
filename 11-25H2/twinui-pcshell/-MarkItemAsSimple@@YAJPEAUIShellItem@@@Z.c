/*
 * XREFs of ?MarkItemAsSimple@@YAJPEAUIShellItem@@@Z @ 0x1806A3CBC
 * Callers:
 *     ?SHCreateOriginalItemBindCtx@@YAJPEBU_ITEMIDLIST_ABSOLUTE@@PEAUIShellFolder@@PEFBU_ITEMID_CHILD@@KW4REPARSE_PARTIAL_IDLIST_MODE@@PEAPEAUIBindCtx@@@Z @ 0x1806A3D90 (-SHCreateOriginalItemBindCtx@@YAJPEBU_ITEMIDLIST_ABSOLUTE@@PEAUIShellFolder@@PEFBU_ITEMID_CHILD@.c)
 * Callees:
 *     PropVariantClear_0 @ 0x1802D3E42 (PropVariantClear_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall MarkItemAsSimple(struct IShellItem *a1)
{
  struct IShellItemVtbl *lpVtbl; // rax
  int v2; // ebx
  PROPVARIANT pvar[2]; // [rsp+30h] [rbp-20h] BYREF
  __int64 v5; // [rsp+40h] [rbp-10h]
  __int64 v6; // [rsp+60h] [rbp+10h] BYREF
  __int64 v7; // [rsp+68h] [rbp+18h] BYREF

  lpVtbl = a1->lpVtbl;
  v7 = 0LL;
  v2 = ((__int64 (__fastcall *)(struct IShellItem *, GUID *, __int64 *))lpVtbl->QueryInterface)(
         a1,
         &GUID_7e9fb0d3_919f_4307_ab2e_9b1860310c93,
         &v7);
  if ( v2 >= 0 )
  {
    v6 = 0LL;
    v2 = (*(__int64 (__fastcall **)(__int64, __int64, GUID *, __int64 *))(*(_QWORD *)v7 + 64LL))(
           v7,
           4LL,
           &GUID_886d8eeb_8cf2_4446_8d02_cdba1dbdcf99,
           &v6);
    if ( v2 >= 0 )
    {
      v5 = 0LL;
      *(_OWORD *)pvar = 0LL;
      LOWORD(pvar[0]) = 11;
      LOWORD(pvar[1]) = -1;
      v2 = (*(__int64 (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v6 + 48LL))(
             v6,
             &PKEY_IsSimpleItem,
             pvar);
      PropVariantClear_0(pvar);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  return (unsigned int)v2;
}
