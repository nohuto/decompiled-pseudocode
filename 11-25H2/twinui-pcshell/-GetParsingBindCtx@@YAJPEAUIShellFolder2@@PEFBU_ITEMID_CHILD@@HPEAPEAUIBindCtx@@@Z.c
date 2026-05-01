/*
 * XREFs of ?GetParsingBindCtx@@YAJPEAUIShellFolder2@@PEFBU_ITEMID_CHILD@@HPEAPEAUIBindCtx@@@Z @ 0x1806A36E4
 * Callers:
 *     SimpleToRealIDListWithContext @ 0x1806A405C (SimpleToRealIDListWithContext.c)
 * Callees:
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     memset_0 @ 0x1802D2FFC (memset_0.c)
 *     ?_CreateFileSysBindCtx@@YAJPEAUIBindCtx@@PEBU_WIN32_FIND_DATAW@@PEAPEAU1@@Z @ 0x180671D54 (-_CreateFileSysBindCtx@@YAJPEAUIBindCtx@@PEBU_WIN32_FIND_DATAW@@PEAPEAU1@@Z.c)
 *     ?SHCreateOriginalItemBindCtx@@YAJPEBU_ITEMIDLIST_ABSOLUTE@@PEAUIShellFolder@@PEFBU_ITEMID_CHILD@@KW4REPARSE_PARTIAL_IDLIST_MODE@@PEAPEAUIBindCtx@@@Z @ 0x1806A3D90 (-SHCreateOriginalItemBindCtx@@YAJPEBU_ITEMIDLIST_ABSOLUTE@@PEAUIShellFolder@@PEFBU_ITEMID_CHILD@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall GetParsingBindCtx(
        struct IShellFolder2 *a1,
        const struct _ITEMID_CHILD *a2,
        __int64 a3,
        struct IBindCtx **a4)
{
  struct IShellFolder2Vtbl *lpVtbl; // rax
  HRESULT v8; // ebx
  HRESULT v9; // eax
  __int64 v10; // rcx
  const struct _GUID *v11; // rcx
  struct IBindCtx *v13; // [rsp+30h] [rbp-D0h] BYREF
  VARIANT varIn; // [rsp+38h] [rbp-C8h] BYREF
  struct _WIN32_FIND_DATAW pv; // [rsp+50h] [rbp-B0h] BYREF

  v13 = 0LL;
  lpVtbl = a1->lpVtbl;
  memset(&varIn, 0, sizeof(varIn));
  if ( ((int (__fastcall *)(struct IShellFolder2 *, const struct _ITEMID_CHILD *, const PROPERTYKEY *, VARIANT *))lpVtbl->GetDetailsEx)(
         a1,
         a2,
         &PKEY_ParsingBindContext,
         &varIn) >= 0 )
  {
    v8 = -2147467262;
    if ( varIn.vt != 13 && varIn.vt != 9 || !varIn.llVal )
      goto LABEL_10;
    v9 = (**(__int64 (__fastcall ***)(LONGLONG, GUID *, struct IBindCtx **))varIn.llVal)(
           varIn.llVal,
           &GUID_0000000e_0000_0000_c000_000000000046,
           &v13);
    goto LABEL_9;
  }
  if ( ((int (__fastcall *)(struct IShellFolder2 *, const struct _ITEMID_CHILD *, const PROPERTYKEY *, VARIANT *))a1->lpVtbl->GetDetailsEx)(
         a1,
         a2,
         &PKEY_FindData,
         &varIn) >= 0 )
  {
    memset_0(&pv, 0, sizeof(pv));
    v8 = VariantToBuffer(&varIn, &pv, 0x250u);
    if ( v8 < 0 )
    {
LABEL_10:
      VariantClear(&varIn);
      goto LABEL_12;
    }
    v9 = _CreateFileSysBindCtx(v11, &pv, &v13);
LABEL_9:
    v8 = v9;
    goto LABEL_10;
  }
  v8 = SHCreateOriginalItemBindCtx(v10, a1, a2);
LABEL_12:
  if ( v8 >= 0 )
  {
    v8 = ((__int64 (__fastcall *)(struct IBindCtx *, GUID *, struct IBindCtx **))v13->lpVtbl->QueryInterface)(
           v13,
           &GUID_0000000e_0000_0000_c000_000000000046,
           a4);
    ((void (__fastcall *)(struct IBindCtx *))v13->lpVtbl->Release)(v13);
  }
  return (unsigned int)v8;
}
